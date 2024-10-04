#include "ui.h"
#include "ui_events.h"

static int index_Sensacion = 6;
//-------------------------------------------------------------------
const OpcionDescripcion opciones_Sensacion[] = {
  {"-3", "Helado"},                     
  {"-2.5", "Mucho frío"},                   
  {"-2", "frío"},                   
  {"-1.5", "ligeramente frío"},         
  {"-1", "fresco"},         
  {"-0.5", "ligeramente fresco"},                    
  {"0", "neutro"},                    
  {"0.5", "ligeramente templado"},                    
  {"1", "templado"},      
  {"1.5", "ligeramente caluroso"},                    
  {"2", "caluroso"},                  
  {"2.5", "Muy caluroso"},                    
  {"3", "Ardiendo"}                   
};
const int num_opciones_Sensacion = sizeof(opciones_Sensacion) / sizeof(opciones_Sensacion[0]);
//-------------------------------------------------------------------

void ui_Sensacion_screen_init(void)
{
    ui_Sensacion = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Sensacion, LV_OBJ_FLAG_SCROLLABLE);    

ui_PreguntaSensacion = create_custom_label(ui_Sensacion,"     ¿Cuál es tu sensación\ntérmica en este momento?", 0, -80, &montserrat_latino_12);

ui_OpcionSensacion = lv_obj_create(ui_Sensacion);
lv_obj_set_size(ui_OpcionSensacion, 100, 60);
lv_obj_align(ui_OpcionSensacion, LV_ALIGN_CENTER, 0, 0);

ui_LabelOpcionSensacion = create_custom_label(ui_OpcionSensacion, opciones_Sensacion[index_Sensacion].opcion, 0, 0, &montserrat_latino_14);
ui_DescripcionSensacion = create_custom_label(ui_Sensacion, opciones_Sensacion[index_Sensacion].descripcion, 0, 50, &montserrat_latino_14);

ui_BtnDSensacion = create_custom_button(ui_Sensacion, "> ", LV_ALIGN_RIGHT_MID, 10, 0, 40, 100, &montserrat_latino_26);
ui_BtnISensacion = create_custom_button(ui_Sensacion, " <", LV_ALIGN_LEFT_MID, -10, 0, 40, 100, &montserrat_latino_26);

// Botones que manejan el elemento seleccionado
ui_BtnUpSen = create_custom_button(ui_Sensacion, "v", LV_ALIGN_BOTTOM_MID, -30, -10, 40, 40, &montserrat_latino_14);
ui_BtnDownSen = create_custom_button(ui_Sensacion, "^", LV_ALIGN_BOTTOM_MID, 30, -10, 40, 40, &montserrat_latino_12);
setup_navigation_buttons(ui_BtnUpSen, ui_BtnDownSen, &index_Sensacion, ui_LabelOpcionSensacion, ui_DescripcionSensacion, opciones_Sensacion, num_opciones_Sensacion, ui_Sensacion, false);

lv_obj_add_event_cb(ui_BtnDSensacion, go_to_next_screen, LV_EVENT_CLICKED, NULL);
lv_obj_add_event_cb(ui_BtnISensacion, go_to_previous_screen, LV_EVENT_CLICKED, NULL);
}

