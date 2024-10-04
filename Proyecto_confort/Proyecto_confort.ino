#include <lvgl.h>
#include "ui.h"
#include "ui_events.h"
#define USE_TFT_ESPI_LIBRARY
#include "lv_xiao_round_screen.h"
#include <Adafruit_MLX90614.h>
#include "MAX30105.h"
#include "heartRate.h"
#include <Wire.h>
#include "I2C_BM8563.h"
#include "ThingsBoard.h"
#include <WiFi.h>
#include <Arduino_MQTT_Client.h>

const char* ssid = "RED_WIFI";                        // Reemplazar con el nombre de la red Wifi
const char* password = "CLAVE_WIFI";                // Reemplazar con la clave Wifi
const char* TOKEN = "TOKEN_DISPOSITIVO";                      // Reemplazar por el token del dispositivo de ThingsBoard donde se va a publicar
const char* THINGSBOARD_SERVER = "URL_SERVIDOR";           // Reemplazar por el servidor de thingsboard
const char *ntpServer = "time.google.com";

#define NUM_ADC_SAMPLE 20           // Frecuencia de sampleo
#define BATTERY_DEFICIT_VOL 1660    // Valor de la tensión de la batería descargada
#define BATTERY_FULL_VOL 2060       // Valor de tensión de la batería completamente cargada

I2C_BM8563 rtc(I2C_BM8563_DEFAULT_ADDRESS, Wire);
I2C_BM8563_TimeTypeDef timeStruct;

WiFiClient espClient;  // Inicializar el cliente de ThingsBoard
Arduino_MQTT_Client mqttClient(espClient);
ThingsBoard tb(mqttClient);  // Inicializar la instancia de ThingsBoard
int status = WL_IDLE_STATUS;  // Estado del radio Wifi

MAX30105 particleSensor;
Adafruit_MLX90614 mlx = Adafruit_MLX90614();
float Temperatura = 0.0;
int BPMs = 0;
Diccionario respuestas[7]; // Arreglo que almacena todas las respuestas

int motor = D2;  

void setup()
{
    Serial.begin( 115200 );   
    Serial.println( "Inicializando..." );

    analogReadResolution(12);

    pinMode(TFT_BL, OUTPUT);
    pinMode(motor, OUTPUT);
    digitalWrite(motor, 0);

    configTime(-6 * 3600, 0, ntpServer);
    struct tm timeInfo;
    if (getLocalTime(&timeInfo)) {
      timeStruct.hours   = timeInfo.tm_hour;
      timeStruct.minutes = timeInfo.tm_min;
      timeStruct.seconds = timeInfo.tm_sec;
      rtc.setTime(&timeStruct);
    }

    Wire.begin();
    rtc.begin();
    rtc.getTime(&timeStruct);

    // --------------------------- Inicializar MAX30102 ----------------------------------------------
    if (!particleSensor.begin()) {
      Serial.println("Error al conectar el MAX3012, revisa las conexiones. ");
    }
    byte ledBrightness = 0x1F; // Intensidad del LED (de 0 = apagado a 255 = 50mA)
    byte sampleAverage = 4;    // Número de muestras a promediar (1, 2, 4, 8, 16, 32)
    particleSensor.setup(ledBrightness, sampleAverage, 2, 400, 411, 2048);
    particleSensor.shutDown();
    // --------------------------- Inicializar GY-906 ----------------------------------------------
    if (!mlx.begin()) {
      Serial.println("Error conectando el sensor MLX, revisa las conexiones.");
    }
    Serial.print("Emisividad = "); Serial.println(mlx.readEmissivity());
    Serial.println("================================================");
    mlxSleep();  // Enviar comando de sleep mode

    WifiInit();

    lv_init();
    lv_xiao_disp_init();
    lv_xiao_touch_init();
    ui_init();

    iniciar_temporizador_hora();
    actualizar_bateria();
    iniciar_temporizador_bateria(); 

    // Crear temporizador para verificar inactividad cada segundo
    lv_timer_create(check_inactivity, 1000, NULL);

    // Añadir un evento para detectar cualquier actividad en la pantalla
    lv_obj_add_event_cb(lv_scr_act(), reset_inactivity_timer, LV_EVENT_ALL, NULL);

    lv_xiao_disp_on();

}

void loop()
{
    lv_timer_handler();  
    delay(5);
}

void imprimir_respuestas() {
    llenar_diccionario(respuestas);

    Serial.println("{");
    for (int i = 0; i < 7; i++) {
        Serial.print("{\"");
        Serial.print(respuestas[i].key);
        Serial.print("\":\"");
        Serial.print(respuestas[i].value);
        Serial.println("\"},");
    }
    Serial.println("}");
}

// Función auxiliar para calcular el promedio de las tasas de pulsos
int calcularPromedio(const byte *rates, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += rates[i];
    }
    return total / size;
}

// Función para medir el pulso usando el sensor de ritmo cardíaco
void medirPulso(byte *rates, byte &rateSpot, long &lastBeat, int &beatAvg, byte rateSize) {
    long irValue = particleSensor.getIR();
    if (checkForBeat(irValue)) {
        long delta = millis() - lastBeat;
        lastBeat = millis();
        float beatsPerMinute = 60 / (delta / 1000.0);
        if (beatsPerMinute < 255 && beatsPerMinute > 20) {
            rates[rateSpot++] = (byte)beatsPerMinute; 
            rateSpot %= rateSize;  // Usar el parámetro rateSize aquí
            beatAvg = calcularPromedio(rates, rateSize);
        }
    }
}

// Función para medir la temperatura usando el sensor MLX90614
void medirTemperatura(float &sumTemp, int &numReadings, unsigned long &previousMillisLectura, unsigned long Tlectura, int lecturas) {
    if (millis() - previousMillisLectura >= Tlectura * 1000 / lecturas) {
        previousMillisLectura = millis();
        float temp = mlx.readObjectTempC();
        sumTemp += temp;
        numReadings++;
    }
}

// Función principal para medir los sensores
void MedirSensores(unsigned long Tlectura, int lecturas) {
    const byte RATE_SIZE = 6; // Declaración local
    byte rates[RATE_SIZE];
    byte rateSpot = 0;
    long lastBeat = 0; 
    int beatAvg;
    float sumTemp = 0.0;
    int numReadings = 0;
    unsigned long startTime = millis(), previousMillisLectura = 0;

    mlx.begin();  // Iniciar el sensor de temperatura
    particleSensor.wakeUp();  // Despertar el sensor de pulso

    while (millis() - startTime < Tlectura * 1000) {  // Bucle de medición
        medirTemperatura(sumTemp, numReadings, previousMillisLectura, Tlectura, lecturas);
        medirPulso(rates, rateSpot, lastBeat, beatAvg, RATE_SIZE);
    }

    float averageTemp = sumTemp / numReadings;
    Temperatura = roundf((averageTemp + 0.47) * 10) / 10.0;  // Guardar y ajustar temperatura
    BPMs = beatAvg;  // Guardar promedio de pulsos

    particleSensor.shutDown();  // Apagar el sensor de pulso
    mlxSleep();  // Poner en reposo el sensor de temperatura

    // Imprimir resultados a la consola serial
    Serial.print("T = ");
    Serial.print(Temperatura);
    Serial.print("*C , BPM = ");
    Serial.println(BPMs);
}


void mlxSleep() {
  Wire.beginTransmission(0x5A); 
  Wire.write(0xFF);             
  Wire.endTransmission();
}

void WifiInit() {
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi conectado.");
  Serial.println("Dirección IP: ");
  Serial.println(WiFi.localIP());
}

void publish_tb(Diccionario respuestas[], int num_respuestas) {
  if (WiFi.status() != WL_CONNECTED) {
      Serial.println("WiFi no conectado. Reconectando...");
      WifiInit();
  }
  reconnect_to_thingsboard();
  tb.setBufferSize(150);  
  Serial.println("Enviando datos...");
  StaticJsonDocument<150> jsonDocument;             // Crear un objeto JSON

  // Agregar todas las respuestas al documento JSON
  for (int i = 0; i < num_respuestas; i++) {
      jsonDocument[respuestas[i].key] = respuestas[i].value;
  }

  char buffer[150];
  size_t n = serializeJson(jsonDocument, buffer); // Serializar el objeto JSON a una cadena de caracteres

  bool success = tb.sendTelemetryJson(buffer);
  if (!success) {
    Serial.println("Error al enviar datos a ThingsBoard.");
  }
  tb.loop();
}

void reconnect_to_thingsboard() {
    if (!tb.connected()) {
        Serial.print("Conectando a: ");
        Serial.print(THINGSBOARD_SERVER);
        Serial.print(" con el token ");
        Serial.println(TOKEN);

        if (!tb.connect(THINGSBOARD_SERVER, TOKEN)) {
            Serial.println("Fallo al conectar a ThingsBoard");
            return;
        }

        Serial.println("Conectado a ThingsBoard");
    }
}

void vibrate_motor(int times) {
    for (int i = 0; i < times; i++) {
        digitalWrite(motor, 1);
        delay(200);  // Vibrar por 200 ms
        digitalWrite(motor, 0);
        delay(200);  // Pausa por 200 ms
    }
}


int32_t getBatteryLevel(void) {
  int32_t mvolts = 0;
#if defined(CONFIG_IDF_TARGET_ESP32S3) || defined(CONFIG_IDF_TARGET_ESP32C3)
  for(int8_t i=0; i<NUM_ADC_SAMPLE; i++){
    mvolts += analogReadMilliVolts(D0);
  }
  mvolts /= NUM_ADC_SAMPLE;
#endif

  int32_t level = (mvolts - BATTERY_DEFICIT_VOL) * 100 / (BATTERY_FULL_VOL-BATTERY_DEFICIT_VOL); // 1850 ~ 2100
  level = (level<0) ? 0 : ((level>100) ? 100 : level); 
  return level;
}

unsigned long last_activity_time = 0;
const unsigned long INACTIVITY_THRESHOLD = 10000; // 10 segundos
bool screen_on = false;

void check_inactivity(lv_timer_t *timer) {
    if (millis() - last_activity_time > INACTIVITY_THRESHOLD && screen_on) {
        // Verificar si estamos en ui_Inicio
        if (lv_scr_act() == ui_Inicio) {
            // Apagar la pantalla
            lv_xiao_disp_off();
        }
    }
}

void reset_inactivity_timer(lv_event_t *e) {
    lv_event_code_t code = lv_event_get_code(e);
    if (code == LV_EVENT_CLICKED || code == LV_EVENT_PRESSED || code == LV_EVENT_PRESSING || code == LV_EVENT_RELEASED || code == LV_EVENT_VALUE_CHANGED || code == LV_EVENT_GESTURE) {
        last_activity_time = millis();
        if (!screen_on) {
            // Encender la pantalla
            lv_xiao_disp_on();
        }
    }
}


void lv_xiao_disp_off() {
    digitalWrite(TFT_BL,0);
    tft.writecommand(0x10);
    screen_on = false;
}

void lv_xiao_disp_on() {
    digitalWrite(TFT_BL,1);
    tft.writecommand(0x11);
    screen_on = true;
}
