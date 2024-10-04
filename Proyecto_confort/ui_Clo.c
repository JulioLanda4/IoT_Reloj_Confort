#include "ui.h"
#include "ui_helpers.h"
#include "ui_events.h"

//----------------------------------------------------------------------
const PrendaClo prendas_clo[] = {
    {"Zapato", 0.02},
    {"Calzón", 0.04},
    {"Playera", 0.09},
    {"Camisa", 0.15},
    {"Pantalón", 0.25},
    {"Calcetines", 0.02},
    {"Sombrero", 0.05},
    {"Bufanda", 0.1},
    {"Guantes", 0.1},
    {"Chaqueta", 0.3},
    {"Suéter", 0.18},
    {"Falda", 0.14},
    {"Shorts", 0.06},
    {"Vestido", 0.15},
    {"Pantalón de mezclilla", 0.23},
    {"Abrigo", 0.4},
    {"Gorro de lana", 0.08},
    {"Bata de baño", 0.3},
    {"Chaleco", 0.1},
    {"Botas", 0.1},
    {"Impermeable", 0.2},
    {"Sandalias", 0.02}, 
    {"Brasier", 0.02},   
    {"Corpiño", 0.03}    
};
const int num_prendas_clo = sizeof(prendas_clo) / sizeof(prendas_clo[0]);


void scroll_up(lv_event_t *e) {
    lv_coord_t item_height = lv_obj_get_height(checkboxes[0]);
    lv_obj_scroll_by(ui_PanelCB, 0, -item_height, LV_ANIM_ON);  // Asegura que suba
}

void scroll_down(lv_event_t *e) {
    lv_coord_t item_height = lv_obj_get_height(checkboxes[0]);
    lv_obj_scroll_by(ui_PanelCB, 0, item_height, LV_ANIM_ON);   // Asegura que baje
}

//-----------------------------------------------------------------------

void ui_Clo_screen_init(void)
{
    ui_Clo = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Clo, LV_OBJ_FLAG_SCROLLABLE);      

ui_PreguntaClo = create_custom_label(ui_Clo, "        ¿Cuál es tu   \n vestimenta actual?", 0, -80, &montserrat_latino_12);

ui_PanelCB = lv_obj_create(ui_Clo); 
lv_obj_set_width(ui_PanelCB, 150);
lv_obj_set_height(ui_PanelCB, 160); 
lv_obj_set_x(ui_PanelCB, 0);
lv_obj_set_y(ui_PanelCB, 20);
lv_obj_set_align(ui_PanelCB, LV_ALIGN_CENTER);
lv_obj_set_flex_flow(ui_PanelCB, LV_FLEX_FLOW_COLUMN);
lv_obj_set_scrollbar_mode(ui_PanelCB, LV_SCROLLBAR_MODE_OFF); 
lv_obj_clear_flag(ui_PanelCB, LV_OBJ_FLAG_SCROLLABLE);  
lv_obj_add_flag(ui_PanelCB, LV_OBJ_FLAG_SCROLL_ONE);  
lv_obj_set_scroll_snap_y(ui_PanelCB, LV_SCROLL_SNAP_START);  
lv_obj_set_style_bg_color(ui_PanelCB, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
lv_obj_set_style_bg_opa(ui_PanelCB, 150, LV_PART_MAIN | LV_STATE_DEFAULT);


checkboxes = malloc(sizeof(lv_obj_t *) * num_prendas_clo); // Creación de checkboxes dentro del panel
for (int i = 0; i < num_prendas_clo; i++) { 
     checkboxes[i] = lv_checkbox_create(ui_PanelCB);
     lv_checkbox_set_text(checkboxes[i], prendas_clo[i].prenda);
     lv_obj_set_style_text_font(checkboxes[i], &montserrat_latino_12, LV_PART_MAIN | LV_STATE_DEFAULT);
     lv_obj_set_style_text_font(checkboxes[i], &montserrat_latino_12, LV_PART_INDICATOR | LV_STATE_CHECKED);  
}


ui_LabelClo = create_custom_label(ui_Clo, " Clo = 0.00", 0, 110, &montserrat_latino_12);

ui_BtnDClo = create_custom_button(ui_Clo, "> ", LV_ALIGN_RIGHT_MID, 10, 0, 40, 100, &montserrat_latino_26);

// Botones que manejan el scroll de los elementos
ui_BtnUpClo = create_custom_button(ui_Clo, "^", LV_ALIGN_LEFT_MID, -5, -30, 40, 40, &montserrat_latino_14);
ui_BtnDownClo = create_custom_button(ui_Clo, "v", LV_ALIGN_LEFT_MID, -5, 30, 40, 40, &montserrat_latino_12);

lv_obj_add_event_cb(ui_BtnUpClo, scroll_down, LV_EVENT_CLICKED, NULL);  
lv_obj_add_event_cb(ui_BtnDownClo, scroll_up, LV_EVENT_CLICKED, NULL);  

add_actualizar_clo(checkboxes, ui_LabelClo, prendas_clo, num_prendas_clo);
lv_obj_add_event_cb(ui_BtnDClo, go_to_next_screen, LV_EVENT_CLICKED, NULL);
}

