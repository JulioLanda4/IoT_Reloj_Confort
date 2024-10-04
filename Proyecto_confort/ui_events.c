#include "ui_events.h"
#include "ui.h"
#include <time.h>


// Variables donde se almacenan las respuestas de cada encuesta
char valor_clo[5] = "0.0";
char valor_met[2] = "0";
char valor_ubicacion[2] = "0";
char valor_sensacion[3] = "0";
char valor_aceptacion[2] = "0"; 

bool encuesta_habilitada = false;
int segundos_restantes = 0;
int vibrate_count = 0;  // Contador de parpadeos del motor



//lv_obj_t *msgbox; 
//lv_obj_t *sensores_msgbox; 
//----------------------- Cambiar pantalla --------------------------
void go_to_next_screen(lv_event_t *e) {
    lv_obj_t *current_screen = lv_scr_act();
    if (current_screen == ui_Clo) {
        lv_scr_load_anim(ui_Met, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0, false);
    } else if (current_screen == ui_Met) {
        lv_scr_load_anim(ui_Ubicacion, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0, false);
    } else if (current_screen == ui_Ubicacion) {
        lv_scr_load_anim(ui_Sensacion, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0, false);
    } else if (current_screen == ui_Sensacion) {
        lv_scr_load_anim(ui_Aceptacion, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0, false);
    }
}

void go_to_previous_screen(lv_event_t *e) {
    lv_obj_t *current_screen = lv_scr_act();
    if (current_screen == ui_Aceptacion) {
        lv_scr_load_anim(ui_Sensacion, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0, false);
    } else if (current_screen == ui_Sensacion) {
        lv_scr_load_anim(ui_Ubicacion, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0, false); 
    } else if (current_screen == ui_Ubicacion) {
        lv_scr_load_anim(ui_Met, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0, false);
    } else if (current_screen == ui_Met) {
        lv_scr_load_anim(ui_Clo, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0, false);
    }
}

//------------------------------- Navegación entre los indices --------------------------------------

void increase_index(lv_event_t * e) {
    NavigationData *data = (NavigationData *)lv_event_get_user_data(e);
    (*(data->index))++;
    if (*(data->index) >= data->num_options) {
        *(data->index) = 0;  // Volver al inicio si se pasa del final
    }
    lv_label_set_text(data->label, data->options[*(data->index)].opcion);
    if (data->descripcion_label != NULL) {
      lv_label_set_text(data->descripcion_label, data->options[*(data->index)].descripcion);
    }

    // Almacenar el valor actual en la variable char correspondiente
    const char *value_to_store = data->use_description 
                                 ? data->options[*(data->index)].descripcion 
                                 : data->options[*(data->index)].opcion;

    // Guardar en la variable correspondiente según la pantalla
    if (data->current_screen == ui_Met) {
        strncpy(valor_met, value_to_store, sizeof(valor_met) - 1);
        valor_met[sizeof(valor_met) - 1] = '\0';
    } else if (data->current_screen == ui_Ubicacion) {
        strncpy(valor_ubicacion, value_to_store, sizeof(valor_ubicacion) - 1);
        valor_ubicacion[sizeof(valor_ubicacion) - 1] = '\0';
    } else if (data->current_screen == ui_Sensacion) {
        strncpy(valor_sensacion, value_to_store, sizeof(valor_sensacion) - 1);
        valor_sensacion[sizeof(valor_sensacion) - 1] = '\0';
    }
}

void decrease_index(lv_event_t * e) {
    NavigationData *data = (NavigationData *)lv_event_get_user_data(e);
    (*(data->index))--;
    if (*(data->index) < 0) {
        *(data->index) = data->num_options - 1;  // Ir al final si se pasa del inicio
    }
    lv_label_set_text(data->label, data->options[*(data->index)].opcion);
    if (data->descripcion_label != NULL) {
      lv_label_set_text(data->descripcion_label, data->options[*(data->index)].descripcion);
    }

    // Almacenar el valor actual en la variable char correspondiente
    const char *value_to_store = data->use_description 
                                 ? data->options[*(data->index)].descripcion 
                                 : data->options[*(data->index)].opcion;


    // Guardar en la variable correspondiente según la pantalla
    if (data->current_screen == ui_Met) {
        strncpy(valor_met, value_to_store, sizeof(valor_met) - 1);
        valor_met[sizeof(valor_met) - 1] = '\0';
    } else if (data->current_screen == ui_Ubicacion) {
        strncpy(valor_ubicacion, value_to_store, sizeof(valor_ubicacion) - 1);
        valor_ubicacion[sizeof(valor_ubicacion) - 1] = '\0';
    } else if (data->current_screen == ui_Sensacion) {
        strncpy(valor_sensacion, value_to_store, sizeof(valor_sensacion) - 1);
        valor_sensacion[sizeof(valor_sensacion) - 1] = '\0';
    }
}



void setup_navigation_buttons(lv_obj_t *btn_up, lv_obj_t *btn_down, int *index, lv_obj_t *label, lv_obj_t *descripcion_label, const OpcionDescripcion *options, int num_options, lv_obj_t *current_screen, bool use_description) {
    NavigationData *data = (NavigationData *)malloc(sizeof(NavigationData));
    data->index = index;
    data->label = label;
    data->descripcion_label = descripcion_label;
    data->options = options;
    data->num_options = num_options;
    data->current_screen = current_screen; 
    data->use_description = use_description;  

    // Asignar las funciones de incremento y decremento a los botones
    lv_obj_add_event_cb(btn_up, decrease_index, LV_EVENT_CLICKED, data);
    lv_obj_add_event_cb(btn_down, increase_index, LV_EVENT_CLICKED, data);
}



//--------------------------------------- Actualizar Clo --------------------------------------------
void actualizar_clo(lv_event_t *e) {
    clo_data_t *data = (clo_data_t *)lv_event_get_user_data(e);
    if (!data) return;  // Verificar que data no sea NULL

    float suma_clo = 0.0;
    for (int i = 0; i < data->num_prendas; i++) {
        if (lv_obj_has_state(data->checkboxes[i], LV_STATE_CHECKED)) {
            suma_clo += data->prendas[i].valor_clo;
        }
    }
    char texto[32];
    snprintf(texto, sizeof(texto), "Clo = %.2f", suma_clo);
    lv_label_set_text(data->label, texto);
    snprintf(valor_clo, sizeof(valor_clo), "%.2f", suma_clo);
}

void add_actualizar_clo(lv_obj_t *checkboxes[], lv_obj_t *label, const PrendaClo *prendas, int num_prendas) {
    clo_data_t *data = malloc(sizeof(clo_data_t));
    if (!data) return;  // Verificar que malloc no falle

    data->checkboxes = checkboxes;
    data->label = label;
    data->prendas = prendas;
    data->num_prendas = num_prendas;

    for (int i = 0; i < num_prendas; i++) {
        lv_obj_add_event_cb(checkboxes[i], actualizar_clo, LV_EVENT_VALUE_CHANGED, data);
    }
}

//-------------------------------------- Evento de switch----------------------------------------------
void switch_event_cb(lv_event_t *e) {
    lv_obj_t *switch_obj = lv_event_get_target(e);

    if (lv_obj_has_state(switch_obj, LV_STATE_CHECKED)) {
        strncpy(valor_aceptacion, "1", sizeof(valor_aceptacion) - 1);
    } else {
        strncpy(valor_aceptacion, "0", sizeof(valor_aceptacion) - 1);
    }
    valor_aceptacion[sizeof(valor_aceptacion) - 1] = '\0';
}

//####################### MEDICIÓN DE SENSORES ##########################
//-----------------------------------------------------------------------
void msgbox_event_cb(lv_event_t *e) {
    lv_obj_t *msgbox = lv_event_get_current_target(e);
    uint16_t btn_id = lv_msgbox_get_active_btn(msgbox);
    if (btn_id == 0) { // Botón Repetir
        lv_msgbox_close(msgbox);
        sensores_msgbox = lv_msgbox_create(NULL, "Sensores midiendo", "Por favor no te muevas", NULL, false);  // Volver a abrir el primer message box
        lv_obj_set_width(sensores_msgbox, 200);
        lv_obj_center(sensores_msgbox);
        lv_timer_t *timer = lv_timer_create(Mediciones_sensores_msgbox, 5000, sensores_msgbox); // Configurar un temporizador para cerrar el primer message box y abrir el segundo después de 5 segundos
        lv_timer_set_repeat_count(timer, 1);
    } else if (btn_id == 1) { // Botón Enviar
        last_activity_time = millis();
        imprimir_respuestas(); // Llamar a la función para imprimir las respuestas
        Diccionario respuestas[7];
        llenar_diccionario(respuestas);
        publish_tb(respuestas, 7);
        _ui_screen_change(&ui_Inicio, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0, &ui_Inicio_screen_init); // Cambiar a la pantalla de inicio
        lv_msgbox_close(msgbox);
    }
}
//-------------------------------- Evento para el botón Finalizar ---------------------------------------
void ui_event_FinalizarEnc(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    if (event_code == LV_EVENT_RELEASED) {
        sensores_msgbox = lv_msgbox_create(NULL, "Sensores midiendo", "Por favor no te muevas", NULL, false);
        lv_obj_set_width(sensores_msgbox, 200);
        lv_obj_center(sensores_msgbox);
        lv_timer_t *timer = lv_timer_create(Mediciones_sensores_msgbox, 2000, sensores_msgbox);
        lv_timer_set_repeat_count(timer, 1);
    }
}
//----------------------------------- cerrar el primer message box y abrir el segundo ------------------------------------
void Mediciones_sensores_msgbox(lv_timer_t *timer) {
    lv_obj_t *sensores_msgbox = (lv_obj_t *)timer->user_data;
    lv_msgbox_close(sensores_msgbox);
    MedirSensores(10, 20);  // Segundos de lectura, No. de lecturas de temperatura
    char msg[30];
    snprintf(msg, sizeof(msg), "    %.1f °C        %d BPM", Temperatura, BPMs);  // Crear el mensaje con los valores de temperatura y BPMs
    static const char *btns[] = {"Repetir", "Enviar", NULL};
    msgbox = lv_msgbox_create(NULL, "Mediciones", msg, btns, false);
    lv_obj_set_width(msgbox, 200);
    lv_obj_add_event_cb(msgbox, msgbox_event_cb, LV_EVENT_VALUE_CHANGED, NULL);
    lv_obj_center(msgbox);
}
//#######################################################################
// -------------------------------------- Función para iniciar la encuesta ----------------------------------------
void ui_event_Encuesta( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_RELEASED) {
      lv_obj_add_flag(ui_Encuesta, LV_OBJ_FLAG_HIDDEN);  // Hacer invisible
      lv_obj_clear_flag(ui_Encuesta, LV_OBJ_FLAG_CLICKABLE);  // Deshabilitar clic
      encuesta_habilitada = false;  // Resetear estado a deshabilitado
      _ui_screen_change( &ui_Clo, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0, &ui_Clo_screen_init);
      _ui_screen_delete( &ui_Inicio);
}
}
//------------------------------------ Función para llenar el diccionario con las respuestas ----------------------------------------
void set_respuesta(Diccionario *respuestas, int index, const char *key, const char *value) {
    strncpy(respuestas[index].key, key, sizeof(respuestas[index].key));
    strncpy(respuestas[index].value, value, sizeof(respuestas[index].value));
}
void llenar_diccionario(Diccionario respuestas[]) {
   // Convertir Temperatura y BPMs a cadenas
    char temp_str[5]; 
    char bpm_str[3];
    snprintf(temp_str, sizeof(temp_str), "%.2f", Temperatura);
    snprintf(bpm_str, sizeof(bpm_str), "%d", BPMs);

    set_respuesta(respuestas, 0, "Clo", valor_clo);
    set_respuesta(respuestas, 1, "Met", valor_met);
    set_respuesta(respuestas, 2, "Ubicacion", valor_ubicacion);
    set_respuesta(respuestas, 3, "Sensacion", valor_sensacion);
    set_respuesta(respuestas, 4, "Aceptacion", valor_aceptacion);
    set_respuesta(respuestas, 5, "Temperatura", temp_str);
    set_respuesta(respuestas, 6, "BPMs", bpm_str);
}


//-------------- Actualizar hora ---------------------------------

// Función para actualizar la hora y manejar el estado del botón de la encuesta
void actualizar_hora(lv_timer_t *timer) {
    struct tm timeInfo;
    if (getLocalTime(&timeInfo)) {
        char buffer[6];
        snprintf(buffer, sizeof(buffer), "%02d:%02d", timeInfo.tm_hour, timeInfo.tm_min);
        lv_label_set_text(ui_Hora, buffer);

        if (timeInfo.tm_min == 30 && timeInfo.tm_sec == 0 && !encuesta_habilitada && timeInfo.tm_hour >= 8 && timeInfo.tm_hour < 22) {
        //if (timeInfo.tm_min % 2 == 0 && timeInfo.tm_sec == 0 && !encuesta_habilitada && timeInfo.tm_hour >= 0 && timeInfo.tm_hour < 25) {
            lv_obj_clear_flag(ui_Encuesta, LV_OBJ_FLAG_HIDDEN);  // Hacer visible
            lv_obj_add_flag(ui_Encuesta, LV_OBJ_FLAG_CLICKABLE);  // Habilitar clic
            encuesta_habilitada = true;  // Marcar como habilitado
            lv_obj_add_flag(ui_Temporizador, LV_OBJ_FLAG_HIDDEN);  // Ocultar temporizador

            // Hacer que el motor vibre 3 veces
            vibrate_motor(3);
            last_activity_time = millis();
            lv_xiao_disp_on();
        }

         if (timeInfo.tm_min == 45 && timeInfo.tm_sec == 0 && encuesta_habilitada && timeInfo.tm_hour >= 8 && timeInfo.tm_hour < 22) {
            // Hacer que el motor vibre 3 veces
            vibrate_motor(3);
            last_activity_time = millis();
            lv_xiao_disp_on();
        }

        if (!encuesta_habilitada) {
          if (timeInfo.tm_min < 30) {
              segundos_restantes = (30 - timeInfo.tm_min) * 60 - timeInfo.tm_sec;
          } else {
             segundos_restantes = (90 - timeInfo.tm_min) * 60 - timeInfo.tm_sec;
          }
          int minutos = segundos_restantes / 60;
          int segundos = segundos_restantes % 60;
          snprintf(buffer, sizeof(buffer), "%02d:%02d", minutos, segundos);
          lv_label_set_text(ui_Temporizador, buffer);
          lv_obj_clear_flag(ui_Temporizador, LV_OBJ_FLAG_HIDDEN);  // Hacer visible temporizador
        } 
    }
}

// Crear un temporizador para actualizar la hora cada segundo
void iniciar_temporizador_hora() {
    lv_timer_create(actualizar_hora, 1000, NULL);  
}




// ------------------------------------------------------------------

void actualizar_bateria(lv_timer_t *timer) {
    int batteryLevel = getBatteryLevel();
    lv_bar_set_value(ui_Bateria, batteryLevel, LV_ANIM_OFF);
    
    char buffer[4];
    snprintf(buffer, sizeof(buffer), "%d%%", batteryLevel);
    lv_label_set_text(ui_BateriaLabel, buffer);
}

// Crear un temporizador para actualizar el nivel de batería cada minuto (60000 ms)
void iniciar_temporizador_bateria() {
    lv_timer_create(actualizar_bateria, 60000, NULL);
}




