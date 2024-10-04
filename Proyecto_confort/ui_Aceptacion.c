#include "ui.h"
#include "ui_helpers.h"

// Inicialización de la pantalla de aceptación
void ui_Aceptacion_screen_init(void) {
    ui_Aceptacion = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Aceptacion, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_PreguntaAceptacion = create_custom_label(ui_Aceptacion, "¿Aceptas la sensación \n        térmica actual?", 0, -80, &montserrat_latino_12);

    ui_SwitchAceptacion = lv_switch_create(ui_Aceptacion);     // Crear switch
    lv_obj_set_x(ui_SwitchAceptacion, 0);
    lv_obj_set_y(ui_SwitchAceptacion, 0);
    lv_obj_set_align(ui_SwitchAceptacion, LV_ALIGN_CENTER);

    ui_LabelSi = create_custom_label(ui_Aceptacion, "Sí", 40, -5, &montserrat_latino_14); // Crear etiqueta "Sí"
    ui_LabelNo = create_custom_label(ui_Aceptacion, "No", -45, -5, &montserrat_latino_14); // Crear etiqueta "No"

    ui_FinalizarEnc = lv_btn_create(ui_Aceptacion);   // Crear botón Finalizar
    lv_obj_set_width(ui_FinalizarEnc, 80);
    lv_obj_set_height(ui_FinalizarEnc, 40);
    lv_obj_set_x(ui_FinalizarEnc, 0);
    lv_obj_set_y(ui_FinalizarEnc, 80);
    lv_obj_set_align(ui_FinalizarEnc, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_FinalizarEnc, LV_OBJ_FLAG_SCROLL_ON_FOCUS);    
    lv_obj_clear_flag(ui_FinalizarEnc, LV_OBJ_FLAG_SCROLLABLE);      
    lv_obj_set_style_bg_color(ui_FinalizarEnc, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_FinalizarEnc, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_FinalizarEncLabel = create_custom_label(ui_FinalizarEnc, "Finalizar", 0, 0, &montserrat_latino_14);

    ui_BtnIAceptacion = create_custom_button(ui_Aceptacion, " <", LV_ALIGN_LEFT_MID, -10, 0, 40, 100, &montserrat_latino_26);

    lv_obj_add_event_cb(ui_SwitchAceptacion, switch_event_cb, LV_EVENT_VALUE_CHANGED, NULL);
    lv_obj_add_event_cb(ui_BtnIAceptacion, go_to_previous_screen, LV_EVENT_CLICKED, NULL);
    lv_obj_add_event_cb(ui_FinalizarEnc, ui_event_FinalizarEnc, LV_EVENT_ALL, NULL);
}
