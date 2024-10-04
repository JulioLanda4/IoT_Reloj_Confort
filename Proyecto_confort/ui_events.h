#ifndef _UI_EVENTS_H
#define _UI_EVENTS_H
#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern char valor_clo[5];
extern char valor_met[2];
extern char valor_ubicacion[2];
extern char valor_sensacion[3];
extern char valor_aceptacion[2];
extern float Temperatura;
extern int BPMs;

extern bool encuesta_habilitada;
extern unsigned long last_activity_time;


typedef struct {
    char key[12];
    char value[6];
} Diccionario;

typedef struct {
    const char *prenda;
    float valor_clo;
} PrendaClo;

typedef struct {
    lv_obj_t **checkboxes;
    lv_obj_t *label;
    const PrendaClo *prendas;
    int num_prendas;
} clo_data_t;

typedef struct {
    const char *opcion;
    const char *descripcion;
} OpcionDescripcion;

typedef struct {
    int *index;
    lv_obj_t *label;
    lv_obj_t *descripcion_label;
    const OpcionDescripcion *options;
    int num_options;
    lv_obj_t *current_screen;  
    bool use_description; 
} NavigationData;



void go_to_next_screen(lv_event_t *e);
void go_to_previous_screen(lv_event_t *e);
void add_actualizar_clo(lv_obj_t *checkboxes[], lv_obj_t *label, const PrendaClo *prendas, int num_prendas);
void setup_navigation_buttons(lv_obj_t *btn_up, lv_obj_t *btn_down, int *index, lv_obj_t *label, lv_obj_t *descripcion_label, const OpcionDescripcion *options, int num_options, lv_obj_t *current_screen, bool use_description);
void switch_event_cb(lv_event_t *e);
void msgbox_event_cb(lv_event_t *e);
void ui_event_FinalizarEnc(lv_event_t *e);
void Mediciones_sensores_msgbox(lv_timer_t *timer);
void ui_event_Encuesta( lv_event_t * e);
void llenar_diccionario(Diccionario respuestas[]);
void imprimir_respuestas(); 
void MedirSensores(unsigned long Tlectura, int lecturas);
void WifiInit();
void publish_tb(Diccionario respuestas[], int num_respuestas);
void iniciar_temporizador_hora();
void vibrate_motor(int times);
void actualizar_bateria();
void iniciar_temporizador_bateria();
int32_t getBatteryLevel(void);  
void lv_xiao_disp_on();


#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
