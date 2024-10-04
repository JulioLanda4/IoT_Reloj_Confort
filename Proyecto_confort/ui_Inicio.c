#include "ui.h"
#include "ui_events.h"

void ui_Inicio_screen_init(void)
{
ui_Inicio = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Inicio, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Bateria = lv_bar_create(ui_Inicio);
lv_bar_set_value(ui_Bateria,25,LV_ANIM_OFF);
lv_obj_set_width( ui_Bateria, 40);
lv_obj_set_height( ui_Bateria, 16);
lv_obj_set_x( ui_Bateria, 0 );
lv_obj_set_y( ui_Bateria, 20 );
lv_obj_set_align( ui_Bateria, LV_ALIGN_TOP_MID );
lv_obj_set_style_radius(ui_Bateria, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Bateria, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Bateria, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_Bateria, 0, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Bateria, lv_color_hex(0x2FCF1F), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Bateria, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);

ui_BateriaLabel = create_custom_label(ui_Bateria, "0", 1, 0, &montserrat_latino_12);
lv_obj_set_style_text_color(ui_BateriaLabel, lv_color_hex(0x050505), LV_PART_MAIN | LV_STATE_DEFAULT );

ui_Hora = create_custom_label(ui_Inicio, "00:00", 0, -20, &lv_font_montserrat_48);
ui_Temporizador = create_custom_label(ui_Inicio, "00:00", 0, 10, &montserrat_latino_14);

ui_Encuesta = lv_btn_create(ui_Inicio);
lv_obj_set_width( ui_Encuesta, 120);
lv_obj_set_height( ui_Encuesta, 40);
lv_obj_set_x( ui_Encuesta, 0 );
lv_obj_set_y( ui_Encuesta, 70 );
lv_obj_set_align( ui_Encuesta, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Encuesta, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Encuesta, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Encuesta, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Encuesta, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_add_flag(ui_Encuesta, LV_OBJ_FLAG_HIDDEN);  // Hacer invisible
lv_obj_clear_flag(ui_Encuesta, LV_OBJ_FLAG_CLICKABLE);  // Deshabilitar clic

ui_LabelEncuesta = create_custom_label(ui_Encuesta, "Encuesta", 0, 0, &montserrat_latino_14);

lv_obj_add_event_cb(ui_Encuesta, ui_event_Encuesta, LV_EVENT_ALL, NULL);
}
