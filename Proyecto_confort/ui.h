  #ifndef _CONFORT_TERMICO_UI_H
#define _CONFORT_TERMICO_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
  #if __has_include("lvgl.h")
    #include "lvgl.h"
  #elif __has_include("lvgl/lvgl.h")
    #include "lvgl/lvgl.h"
  #else
    #include "lvgl.h"
  #endif
#else
  #include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"

void ui_Inicio_screen_init(void);
extern lv_obj_t *ui_Inicio;
extern lv_obj_t *ui_Panel1;
extern lv_obj_t *ui_Bateria;
extern lv_obj_t *ui_BateriaLabel;
extern lv_obj_t *ui_Hora;
extern lv_obj_t *ui_Temporizador;
void ui_event_Encuesta( lv_event_t * e);
extern lv_obj_t *ui_Encuesta;
extern lv_obj_t *ui_LabelEncuesta;

void ui_Clo_screen_init(void);
extern lv_obj_t *ui_Clo;
extern lv_obj_t *ui_PreguntaClo;
extern lv_obj_t *ui_PanelCB;
extern lv_obj_t **checkboxes;
extern lv_obj_t *ui_LabelClo;
extern lv_obj_t *ui_BtnDClo; 
extern lv_obj_t *ui_BtnUpClo;
extern lv_obj_t *ui_BtnDownClo;

void ui_Met_screen_init(void);
extern lv_obj_t *ui_Met;
extern lv_obj_t *ui_PreguntaMet;
extern lv_obj_t *ui_OpcionMet;
extern lv_obj_t *ui_LabelOpcionMet;
extern lv_obj_t *ui_BtnDMet; 
extern lv_obj_t *ui_BtnIMet;
extern lv_obj_t *ui_BtnUpMet;
extern lv_obj_t *ui_BtnDownMet;

void ui_Ubicacion_screen_init(void);
extern lv_obj_t *ui_Ubicacion;
extern lv_obj_t *ui_PreguntaUbicacion;
extern lv_obj_t *ui_OpcionUbicacion;
extern lv_obj_t *ui_LabelOpcionUbicacion;
extern lv_obj_t *ui_BtnDUbicacion; 
extern lv_obj_t *ui_BtnIUbicacion;
extern lv_obj_t *ui_BtnUpUbi;
extern lv_obj_t *ui_BtnDownUbi;

void ui_Sensacion_screen_init(void);
extern lv_obj_t *ui_Sensacion;
extern lv_obj_t *ui_PreguntaSensacion;
extern lv_obj_t *ui_OpcionSensacion;
extern lv_obj_t *ui_LabelOpcionSensacion;
extern lv_obj_t *ui_DescripcionSensacion;
extern lv_obj_t *ui_BtnDSensacion; 
extern lv_obj_t *ui_BtnISensacion;
extern lv_obj_t *ui_BtnUpSen;
extern lv_obj_t *ui_BtnDownSen;

void ui_Aceptacion_screen_init(void);
extern lv_obj_t *ui_Aceptacion;
extern lv_obj_t *ui_PreguntaAceptacion;
extern lv_obj_t *ui_SwitchAceptacion;
extern lv_obj_t *ui_LabelSi;
extern lv_obj_t *ui_LabelNo;
void ui_event_FinalizarEnc( lv_event_t * e);
extern lv_obj_t *ui_FinalizarEnc;
extern lv_obj_t *ui_FinalizarEncLabel;
extern lv_obj_t *ui_BtnIAceptacion; 
extern lv_obj_t *msgbox;
extern lv_obj_t *sensores_msgbox;

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
