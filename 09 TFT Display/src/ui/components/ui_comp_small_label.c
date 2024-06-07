// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: Smart_Gadget

#include "../ui.h"


// COMPONENT Small Label

lv_obj_t * ui_Small_Label_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_Small_Label;
    cui_Small_Label = lv_label_create(comp_parent);
    lv_obj_set_width(cui_Small_Label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_Small_Label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_Small_Label, 0);
    lv_obj_set_y(cui_Small_Label, 72);
    lv_obj_set_align(cui_Small_Label, LV_ALIGN_TOP_MID);
    lv_label_set_text(cui_Small_Label, "12");
    lv_obj_set_style_text_color(cui_Small_Label, lv_color_hex(0x000746), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_Small_Label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_Small_Label, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_SMALL_LABEL_NUM);
    children[UI_COMP_SMALL_LABEL_SMALL_LABEL] = cui_Small_Label;
    lv_obj_add_event_cb(cui_Small_Label, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_Small_Label, del_component_child_event_cb, LV_EVENT_DELETE, children);
    ui_comp_Small_Label_create_hook(cui_Small_Label);
    return cui_Small_Label;
}

