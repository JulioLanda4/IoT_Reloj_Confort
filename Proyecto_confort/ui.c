#include "ui.h"
#include "ui_events.h"

///////////////////// PANTALLAS ////////////////////
void ui_Inicio_screen_init(void);
lv_obj_t *ui_Inicio;
lv_obj_t *ui_Panel1;
lv_obj_t *ui_Bateria;
lv_obj_t *ui_BateriaLabel;
lv_obj_t *ui_Hora;
lv_obj_t *ui_Temporizador;
void ui_event_Encuesta( lv_event_t * e);
lv_obj_t *ui_Encuesta;
lv_obj_t *ui_LabelEncuesta;

void ui_Clo_screen_init(void);
lv_obj_t *ui_Clo;
lv_obj_t *ui_PreguntaClo;
lv_obj_t *ui_PanelCB;
lv_obj_t **checkboxes;
lv_obj_t *ui_LabelClo;
lv_obj_t *ui_BtnDClo;  
lv_obj_t *ui_BtnUpClo;
lv_obj_t *ui_BtnDownClo;

void ui_Met_screen_init(void);
lv_obj_t *ui_Met;
lv_obj_t *ui_PreguntaMet;
lv_obj_t *ui_OpcionMet;
lv_obj_t *ui_LabelOpcionMet;
lv_obj_t *ui_BtnDMet; 
lv_obj_t *ui_BtnIMet; 
lv_obj_t *ui_BtnUpMet;
lv_obj_t *ui_BtnDownMet;

void ui_Ubicacion_screen_init(void);
lv_obj_t *ui_Ubicacion;
lv_obj_t *ui_PreguntaUbicacion;
lv_obj_t *ui_OpcionUbicacion;
lv_obj_t *ui_LabelOpcionUbicacion;
lv_obj_t *ui_BtnDUbicacion; 
lv_obj_t *ui_BtnIUbicacion;
lv_obj_t *ui_BtnUpUbi;
lv_obj_t *ui_BtnDownUbi;

void ui_Sensacion_screen_init(void);
lv_obj_t *ui_Sensacion;
lv_obj_t *ui_PreguntaSensacion;
lv_obj_t *ui_OpcionSensacion;
lv_obj_t *ui_LabelOpcionSensacion;
lv_obj_t *ui_DescripcionSensacion;
lv_obj_t *ui_BtnDSensacion; 
lv_obj_t *ui_BtnISensacion; 
lv_obj_t *ui_BtnUpSen;
lv_obj_t *ui_BtnDownSen;

void ui_Aceptacion_screen_init(void);
lv_obj_t *ui_Aceptacion;
lv_obj_t *ui_PreguntaAceptacion;
lv_obj_t *ui_SwitchAceptacion;
lv_obj_t *ui_LabelSi;
lv_obj_t *ui_LabelNo;
void ui_event_FinalizarEnc( lv_event_t * e);
lv_obj_t *ui_FinalizarEnc;
lv_obj_t *ui_FinalizarEncLabel;
lv_obj_t *ui_BtnIAceptacion; 
lv_obj_t *msgbox; 
lv_obj_t *sensores_msgbox; 

///////////////////// FUNCION PRINCIPAL ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Inicio_screen_init();
ui_Clo_screen_init();
ui_Met_screen_init();
ui_Ubicacion_screen_init();
ui_Sensacion_screen_init();
ui_Aceptacion_screen_init();
lv_disp_load_scr( ui_Inicio);
}
