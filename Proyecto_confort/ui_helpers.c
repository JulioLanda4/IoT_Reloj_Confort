#include "ui_helpers.h"

void _ui_bar_set_property( lv_obj_t *target, int id, int val) 
{
   if (id == _UI_BAR_PROPERTY_VALUE_WITH_ANIM) lv_bar_set_value(target, val, LV_ANIM_ON);
   if (id == _UI_BAR_PROPERTY_VALUE) lv_bar_set_value(target, val, LV_ANIM_OFF);
}

void _ui_basic_set_property( lv_obj_t *target, int id, int val) 
{
   if (id == _UI_BASIC_PROPERTY_POSITION_X) lv_obj_set_x(target, val);
   if (id == _UI_BASIC_PROPERTY_POSITION_Y) lv_obj_set_y(target, val);
   if (id == _UI_BASIC_PROPERTY_WIDTH) lv_obj_set_width(target, val);
   if (id == _UI_BASIC_PROPERTY_HEIGHT) lv_obj_set_height(target, val);
}


void _ui_label_set_property( lv_obj_t *target, int id, const char *val) 
{
   if (id == _UI_LABEL_PROPERTY_TEXT) lv_label_set_text(target, val);
}


void _ui_screen_change( lv_obj_t ** target, lv_scr_load_anim_t fademode, int spd, int delay, void (*target_init)(void)) 
{
   if(*target == NULL)
      target_init();
   lv_scr_load_anim(*target, fademode, spd, delay, false);
}

void _ui_screen_delete( lv_obj_t ** target ) 
{
   if(*target == NULL)
   {
      lv_obj_del(*target);
      target = NULL;
   }
}

void _ui_bar_increment( lv_obj_t *target, int val, int anm) 
{
   int old = lv_bar_get_value(target);
   lv_bar_set_value(target, old+val, anm);
}

void _ui_flag_modify( lv_obj_t *target, int32_t flag, int value)
{
    if (value==_UI_MODIFY_FLAG_TOGGLE)
    {
        if ( lv_obj_has_flag(target,flag) ) lv_obj_clear_flag(target,flag);
        else lv_obj_add_flag(target,flag);
    }
    else if (value==_UI_MODIFY_FLAG_ADD) lv_obj_add_flag(target,flag);
    else lv_obj_clear_flag(target,flag);
}
void _ui_state_modify( lv_obj_t *target, int32_t state, int value)
{
    if (value==_UI_MODIFY_STATE_TOGGLE)
    {
        if ( lv_obj_has_state(target,state) ) lv_obj_clear_state(target,state);
        else lv_obj_add_state(target,state);
    }
    else if (value==_UI_MODIFY_STATE_ADD) lv_obj_add_state(target,state);
    else lv_obj_clear_state(target,state);
}

void scr_unloaded_delete_cb(lv_event_t * e)
{
   lv_obj_t ** var = lv_event_get_user_data(e);
   lv_obj_del(*var);
   (*var) = NULL;
}

void _ui_opacity_set( lv_obj_t *target, int val) 
{
   lv_obj_set_style_opa(target, val, 0);
}

void _ui_anim_callback_set_x(lv_anim_t* a, int32_t v)
{
   ui_anim_user_data_t *usr = (ui_anim_user_data_t *)a->user_data;
   lv_obj_set_x(usr->target, v);
}

void _ui_anim_callback_set_y(lv_anim_t* a, int32_t v)
{
   ui_anim_user_data_t *usr = (ui_anim_user_data_t *)a->user_data;
   lv_obj_set_y(usr->target, v);
}

void _ui_anim_callback_set_width(lv_anim_t* a, int32_t v)
{
   ui_anim_user_data_t *usr = (ui_anim_user_data_t *)a->user_data;
   lv_obj_set_width(usr->target, v);
}

void _ui_anim_callback_set_height(lv_anim_t* a, int32_t v)
{
   ui_anim_user_data_t *usr = (ui_anim_user_data_t *)a->user_data;
   lv_obj_set_height(usr->target, v);
}

void _ui_anim_callback_set_opacity(lv_anim_t* a, int32_t v)
{
   ui_anim_user_data_t *usr = (ui_anim_user_data_t *)a->user_data;
   lv_obj_set_style_opa(usr->target, v, 0);
}

void _ui_checked_set_text_value( lv_obj_t *trg, lv_obj_t *src, const char *txt_on, const char *txt_off) 
{
    if (lv_obj_has_state(src,LV_STATE_CHECKED)) lv_label_set_text(trg,txt_on);
    else lv_label_set_text(trg,txt_off);
}

// -----------------------------------------------------

lv_obj_t* create_custom_label(lv_obj_t* parent, const char* text, int pos_x, int pos_y, const lv_font_t* font) {
    lv_obj_t* label = lv_label_create(parent);
    lv_label_set_text(label, text);
    lv_obj_set_width(label, LV_SIZE_CONTENT);
    lv_obj_set_height(label, LV_SIZE_CONTENT);
    lv_obj_set_x(label, pos_x);
    lv_obj_set_y(label, pos_y);
    lv_obj_set_align(label, LV_ALIGN_CENTER);
    lv_obj_set_style_text_font(label, font, LV_PART_MAIN | LV_STATE_DEFAULT);
    return label;
}

lv_obj_t* create_custom_button(lv_obj_t* parent, const char* label_text, lv_align_t align, int pos_x, int pos_y, int size_x, int size_y, const lv_font_t* font) {
    lv_obj_t* btn = lv_btn_create(parent);
    lv_obj_set_size(btn, size_x, size_y); 
    lv_obj_align(btn, align, pos_x, pos_y);   
    lv_obj_set_style_bg_opa(btn, LV_OPA_30, LV_PART_MAIN | LV_STATE_DEFAULT);  
    lv_obj_t* label = lv_label_create(btn);
    lv_label_set_text(label, label_text);
    lv_obj_set_style_text_font(label, font, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_center(label);
    return btn;
}



