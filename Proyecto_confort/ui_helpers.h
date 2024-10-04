#ifndef _CONFORT_TERMICO_UI_HELPERS_H
#define _CONFORT_TERMICO_UI_HELPERS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "ui.h"

#define _UI_TEMPORARY_STRING_BUFFER_SIZE 32
#define _UI_BAR_PROPERTY_VALUE 0
#define _UI_BAR_PROPERTY_VALUE_WITH_ANIM 1
void _ui_bar_set_property( lv_obj_t *target, int id, int val);

#define _UI_BASIC_PROPERTY_POSITION_X 0
#define _UI_BASIC_PROPERTY_POSITION_Y 1
#define _UI_BASIC_PROPERTY_WIDTH 2
#define _UI_BASIC_PROPERTY_HEIGHT 3
void _ui_basic_set_property( lv_obj_t *target, int id, int val);

#define _UI_LABEL_PROPERTY_TEXT 0
void _ui_label_set_property( lv_obj_t *target, int id, const char *val);

void _ui_screen_change( lv_obj_t ** target, lv_scr_load_anim_t fademode, int spd, int delay, void (*target_init)(void));

void _ui_screen_delete( lv_obj_t ** target );

void _ui_bar_increment( lv_obj_t *target, int val, int anm);

#define _UI_MODIFY_FLAG_ADD 0
#define _UI_MODIFY_FLAG_REMOVE 1
#define _UI_MODIFY_FLAG_TOGGLE 2
void _ui_flag_modify( lv_obj_t *target, int32_t flag, int value);

#define _UI_MODIFY_STATE_ADD 0
#define _UI_MODIFY_STATE_REMOVE 1
#define _UI_MODIFY_STATE_TOGGLE 2
void _ui_state_modify( lv_obj_t *target, int32_t state, int value);

void scr_unloaded_delete_cb(lv_event_t * e);

void _ui_opacity_set( lv_obj_t *target, int val);

/** Describes an animation*/
typedef struct _ui_anim_user_data_t {
    lv_obj_t *target;
    lv_img_dsc_t **imgset;
    int32_t imgset_size;
    int32_t val;
} ui_anim_user_data_t;

void _ui_anim_callback_set_x(lv_anim_t* a, int32_t v);

void _ui_anim_callback_set_y(lv_anim_t* a, int32_t v);

void _ui_anim_callback_set_width(lv_anim_t* a, int32_t v);

void _ui_anim_callback_set_height(lv_anim_t* a, int32_t v);

void _ui_anim_callback_set_opacity(lv_anim_t* a, int32_t v);

void _ui_checked_set_text_value( lv_obj_t *trg, lv_obj_t *src, const char *txt_on, const char *txt_off);

lv_obj_t* create_custom_label(lv_obj_t* parent, const char* text, int pos_x, int pos_y, const lv_font_t* font);
lv_obj_t* create_custom_button(lv_obj_t* parent, const char* label_text, lv_align_t align, int pos_x, int pos_y, int size_x, int size_y, const lv_font_t* font);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
