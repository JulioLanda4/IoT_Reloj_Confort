#include "ui.h"
#include "ui_events.h"

static int index_Met = 0;
//-------------------------------------------------------------------

const OpcionDescripcion opciones_MET[] = {
  {"Tomando clase \n      sentado", "1.3"},           
  {"Tomando clase \n        de pie", "1.8"},                    
  {"Dando clase \n    sentado", "2.0"},         
  {"Dando clase \n      de pie", "2.3"},       
  {"Caminando", "2.9"},         
  {"Comiendo", "1.5"},     
  {"Escribiendo", "1.3"},
  {" Trabajando en\n computadora", "1.5"},
  {"    De pie en \n un laboratorio", "2.0"}                
};

const int num_opciones_MET = sizeof(opciones_MET) / sizeof(opciones_MET[0]);
//-------------------------------------------------------------------

void ui_Met_screen_init(void)
{
    ui_Met = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Met, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

ui_PreguntaMet = create_custom_label(ui_Met, "  ¿Qué actividad  \n estás realizando?", 0, -80, &montserrat_latino_12);

ui_OpcionMet = lv_obj_create(ui_Met);
lv_obj_set_size(ui_OpcionMet, 150, 100);
lv_obj_align(ui_OpcionMet, LV_ALIGN_CENTER, 0, 0);

ui_LabelOpcionMet = create_custom_label(ui_OpcionMet, opciones_MET[index_Met].opcion, 0, 0, &montserrat_latino_14);  // Crear etiqueta para mostrar el texto dentro del panel

ui_BtnDMet = create_custom_button(ui_Met, "> ", LV_ALIGN_RIGHT_MID, 10, 0, 40, 100, &montserrat_latino_26);
ui_BtnIMet = create_custom_button(ui_Met, " <", LV_ALIGN_LEFT_MID, -10, 0, 40, 100, &montserrat_latino_26);

// Botones que manejan el elemento seleccionado
ui_BtnUpMet = create_custom_button(ui_Met, "^", LV_ALIGN_BOTTOM_MID, 30, -15, 40, 40, &montserrat_latino_14);
ui_BtnDownMet = create_custom_button(ui_Met, "v", LV_ALIGN_BOTTOM_MID, -30, -15, 40, 40, &montserrat_latino_12);
setup_navigation_buttons(ui_BtnUpMet, ui_BtnDownMet, &index_Met, ui_LabelOpcionMet, NULL, opciones_MET, num_opciones_MET, ui_Met, true);

lv_obj_add_event_cb(ui_BtnDMet, go_to_next_screen, LV_EVENT_CLICKED, NULL);
lv_obj_add_event_cb(ui_BtnIMet, go_to_previous_screen, LV_EVENT_CLICKED, NULL);
}

