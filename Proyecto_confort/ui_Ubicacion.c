#include "ui.h"
#include "ui_events.h"

static int index_Ubicacion = 0;
//-------------------------------------------------------------------
const OpcionDescripcion opciones_Ubicacion[] = {
  {"Aula 1", "0"},
  {"Aula 2", "1"},
  {"Aula 3", "2"},
  {"Aula 4", "3"},
  {"Aula 5", "4"},
  {"Aula 6", "5"},
  {"Aula 7", "6"},
  {"Aula 8", "7"},
  {"Aula 9", "8"},
  {"Aula 10", "9"}
};
const int num_opciones_Ubicacion = sizeof(opciones_Ubicacion) / sizeof(opciones_Ubicacion[0]);
//-------------------------------------------------------------------

void ui_Ubicacion_screen_init(void)
{
    ui_Ubicacion = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Ubicacion, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

ui_PreguntaUbicacion = create_custom_label(ui_Ubicacion,"     ¿En donde  \n te encuentras?", 0, -80, &montserrat_latino_12);

ui_OpcionUbicacion = lv_obj_create(ui_Ubicacion);
lv_obj_set_size(ui_OpcionUbicacion, 150, 60);
lv_obj_align(ui_OpcionUbicacion, LV_ALIGN_CENTER, 0, 0);

ui_LabelOpcionUbicacion = create_custom_label(ui_OpcionUbicacion, opciones_Ubicacion[index_Ubicacion].opcion, 0, 0, &montserrat_latino_14);

ui_BtnDUbicacion = create_custom_button(ui_Ubicacion, "> ", LV_ALIGN_RIGHT_MID, 10, 0, 40, 100, &montserrat_latino_26);
ui_BtnIUbicacion = create_custom_button(ui_Ubicacion, " <", LV_ALIGN_LEFT_MID, -10, 0, 40, 100, &montserrat_latino_26);

// Botones que manejan el elemento seleccionado
ui_BtnUpUbi = create_custom_button(ui_Ubicacion, "v", LV_ALIGN_BOTTOM_MID, -30, -15, 40, 40, &montserrat_latino_14);
ui_BtnDownUbi = create_custom_button(ui_Ubicacion, "^", LV_ALIGN_BOTTOM_MID, 30, -15, 40, 40, &montserrat_latino_12);
setup_navigation_buttons(ui_BtnUpUbi, ui_BtnDownUbi, &index_Ubicacion, ui_LabelOpcionUbicacion, NULL, opciones_Ubicacion, num_opciones_Ubicacion, ui_Ubicacion, true);

lv_obj_add_event_cb(ui_BtnDUbicacion, go_to_next_screen, LV_EVENT_CLICKED, NULL);
lv_obj_add_event_cb(ui_BtnIUbicacion, go_to_previous_screen, LV_EVENT_CLICKED, NULL);
}
