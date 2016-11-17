<?php
/**
 * @file
 * variable_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function variable_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_admin_version';
  $strongarm->value = '1.5';
  $export['jquery_update_jquery_admin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.7';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_1';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_partners-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_recent-news';
  $strongarm->value = 0;
  $export['owlcarousel_add_class_active_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_1';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_auto_height_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_partners-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_recent-news';
  $strongarm->value = 0;
  $export['owlcarousel_auto_height_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_1';
  $strongarm->value = '5000';
  $export['owlcarousel_auto_play_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_default';
  $strongarm->value = '500000';
  $export['owlcarousel_auto_play_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = '500000';
  $export['owlcarousel_auto_play_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_partners-carousel';
  $strongarm->value = '300000';
  $export['owlcarousel_auto_play_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_recent-news';
  $strongarm->value = '5000';
  $export['owlcarousel_auto_play_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_1';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_default';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_partners-carousel';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_recent-news';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_1';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_partners-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_recent-news';
  $strongarm->value = 1;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_1_items';
  $strongarm->value = '4';
  $export['owlcarousel_items_desktop_owlcarousel_settings_1_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_1_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_1_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_default_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_desktop_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_default_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_front-carousel-settings_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_desktop_owlcarousel_settings_front-carousel-settings_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_front-carousel-settings_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_front-carousel-settings_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_partners-carousel_items';
  $strongarm->value = '3';
  $export['owlcarousel_items_desktop_owlcarousel_settings_partners-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_partners-carousel_width';
  $strongarm->value = '999';
  $export['owlcarousel_items_desktop_owlcarousel_settings_partners-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_recent-news_items';
  $strongarm->value = '3';
  $export['owlcarousel_items_desktop_owlcarousel_settings_recent-news_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_recent-news_width';
  $strongarm->value = '999';
  $export['owlcarousel_items_desktop_owlcarousel_settings_recent-news_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_1_items';
  $strongarm->value = '3';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_1_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_1_width';
  $strongarm->value = '9791';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_1_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_default_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_default_width';
  $strongarm->value = '979';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_front-carousel-settings_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_front-carousel-settings_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_front-carousel-settings_width';
  $strongarm->value = '979';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_front-carousel-settings_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_partners-carousel_items';
  $strongarm->value = '';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_partners-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_partners-carousel_width';
  $strongarm->value = '';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_partners-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_recent-news_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_recent-news_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_recent-news_width';
  $strongarm->value = '724';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_recent-news_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_1_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_1_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_1_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_1_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_default_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_default_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_front-carousel-settings_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_front-carousel-settings_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_front-carousel-settings_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_front-carousel-settings_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_partners-carousel_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_partners-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_partners-carousel_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_partners-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_recent-news_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_mobile_owlcarousel_settings_recent-news_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_recent-news_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_recent-news_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_1';
  $strongarm->value = '5';
  $export['owlcarousel_items_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_default';
  $strongarm->value = '1';
  $export['owlcarousel_items_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = '1';
  $export['owlcarousel_items_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_partners-carousel';
  $strongarm->value = '4';
  $export['owlcarousel_items_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_recent-news';
  $strongarm->value = '4';
  $export['owlcarousel_items_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_1';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_partners-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_recent-news';
  $strongarm->value = 0;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_1_items';
  $strongarm->value = '2';
  $export['owlcarousel_items_tablet_owlcarousel_settings_1_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_1_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_1_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_default_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_tablet_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_default_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_front-carousel-settings_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_tablet_owlcarousel_settings_front-carousel-settings_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_front-carousel-settings_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_front-carousel-settings_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_partners-carousel_items';
  $strongarm->value = '';
  $export['owlcarousel_items_tablet_owlcarousel_settings_partners-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_partners-carousel_width';
  $strongarm->value = '';
  $export['owlcarousel_items_tablet_owlcarousel_settings_partners-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_recent-news_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_tablet_owlcarousel_settings_recent-news_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_recent-news_width';
  $strongarm->value = '480';
  $export['owlcarousel_items_tablet_owlcarousel_settings_recent-news_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_1_items';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_1_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_1_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_1_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_default_items';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_default_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_default_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_default_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_front-carousel-settings_items';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_front-carousel-settings_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_front-carousel-settings_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_front-carousel-settings_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_partners-carousel_items';
  $strongarm->value = '1';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_partners-carousel_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_partners-carousel_width';
  $strongarm->value = '723';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_partners-carousel_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_recent-news_items';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_recent-news_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_recent-news_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_recent-news_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_1';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_default';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_partners-carousel';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_recent-news';
  $strongarm->value = '';
  $export['owlcarousel_json_path_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_1';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_default';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_partners-carousel';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_recent-news';
  $strongarm->value = '';
  $export['owlcarousel_json_success_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_1';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_default';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_partners-carousel';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_recent-news';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_1';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_partners-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_recent-news';
  $strongarm->value = 1;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_1';
  $strongarm->value = 0;
  $export['owlcarousel_lazy_load_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_lazy_load_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 0;
  $export['owlcarousel_lazy_load_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_partners-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_lazy_load_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_recent-news';
  $strongarm->value = 0;
  $export['owlcarousel_lazy_load_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_1';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_partners-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_recent-news';
  $strongarm->value = 1;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_1';
  $strongarm->value = 1;
  $export['owlcarousel_navigation_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_navigation_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 0;
  $export['owlcarousel_navigation_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_partners-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_navigation_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_recent-news';
  $strongarm->value = 0;
  $export['owlcarousel_navigation_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_1';
  $strongarm->value = array(
    0 => 'prev',
    1 => 'next',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_default';
  $strongarm->value = array(
    0 => '',
    1 => '',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = array(
    0 => 'prev',
    1 => 'next',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_partners-carousel';
  $strongarm->value = array(
    0 => '',
    1 => '',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_recent-news';
  $strongarm->value = array(
    0 => '',
    1 => '',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_1';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_partners-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_override_ajax_pagination_owlcarousel_settings_recent-news';
  $strongarm->value = 0;
  $export['owlcarousel_override_ajax_pagination_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_1';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_partners-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_recent-news';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_1';
  $strongarm->value = 1;
  $export['owlcarousel_pagination_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_pagination_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 0;
  $export['owlcarousel_pagination_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_partners-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_pagination_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_recent-news';
  $strongarm->value = 1;
  $export['owlcarousel_pagination_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_1';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_default';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = '80000';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_partners-carousel';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_recent-news';
  $strongarm->value = '800';
  $export['owlcarousel_pagination_speed_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_1';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_default';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_partners-carousel';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_base_width_owlcarousel_settings_recent-news';
  $strongarm->value = 'window';
  $export['owlcarousel_responsive_base_width_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_1';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_partners-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_recent-news';
  $strongarm->value = 1;
  $export['owlcarousel_responsive_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_1';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_default';
  $strongarm->value = '0';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_partners-carousel';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_recent-news';
  $strongarm->value = '200';
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_1';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_partners-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_recent-news';
  $strongarm->value = 1;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_1';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_default';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = '100000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_partners-carousel';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_recent-news';
  $strongarm->value = '1000';
  $export['owlcarousel_rewind_speed_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_1';
  $strongarm->value = 0;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 0;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_partners-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_recent-news';
  $strongarm->value = 0;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_1';
  $strongarm->value = '1';
  $export['owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_default';
  $strongarm->value = 'owlcarousel_default';
  $export['owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 'Front Carousel Settings';
  $export['owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_partners-carousel';
  $strongarm->value = 'partners_carousel';
  $export['owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_recent-news';
  $strongarm->value = 'recent-news';
  $export['owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_1';
  $strongarm->value = 0;
  $export['owlcarousel_single_item_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_single_item_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 0;
  $export['owlcarousel_single_item_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_partners-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_single_item_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_recent-news';
  $strongarm->value = 0;
  $export['owlcarousel_single_item_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_1';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_default';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_partners-carousel';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_recent-news';
  $strongarm->value = '200';
  $export['owlcarousel_slide_speed_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_1';
  $strongarm->value = 0;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_default';
  $strongarm->value = 0;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 1;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_partners-carousel';
  $strongarm->value = 0;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_recent-news';
  $strongarm->value = 0;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_1';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_default';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_partners-carousel';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_recent-news';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_1';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_default';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_partners-carousel';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_recent-news';
  $strongarm->value = 1;
  $export['owlcarousel_touch_drag_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_1';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_default';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_front-carousel-settings';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_front-carousel-settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_partners-carousel';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_partners-carousel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_recent-news';
  $strongarm->value = '';
  $export['owlcarousel_transition_style_owlcarousel_settings_recent-news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_defaults';
  $strongarm->value = array(
    'archive' => FALSE,
    'comments_recent' => FALSE,
    'recent_comments' => TRUE,
    'home_page_partners' => TRUE,
  );
  $export['views_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_corporate_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 0,
    'logo_path' => 'public://theme_logo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bigscreen_layout' => 'three_col_grail',
    'bigscreen_sidebar_unit' => '%',
    'bigscreen_sidebar_first' => '25',
    'bigscreen_sidebar_second' => '25',
    'bigscreen_page_unit' => 'px',
    'bigscreen_page_width' => '1000',
    'bigscreen_set_max_width' => 0,
    'bigscreen_max_width_unit' => 'px',
    'bigscreen_max_width' => '960px',
    'bigscreen_media_query' => 'only screen and (min-width:1000px)',
    'tablet_landscape_layout' => 'three_col_grail',
    'tablet_landscape_sidebar_unit' => '%',
    'tablet_landscape_sidebar_first' => '25',
    'tablet_landscape_sidebar_second' => '25',
    'tablet_landscape_page_unit' => '%',
    'tablet_landscape_page_width' => '100',
    'tablet_landscape_media_query' => 'only screen and (min-width:999px) and (max-width:999px)',
    'tablet_portrait_layout' => 'two_sidebars_right_stack',
    'tablet_portrait_sidebar_unit' => '%',
    'tablet_portrait_sidebar_first' => '33',
    'tablet_portrait_sidebar_second' => '50',
    'tablet_portrait_page_unit' => '%',
    'tablet_portrait_page_width' => '100',
    'tablet_portrait_media_query' => 'only screen and (min-width:724px) and (max-width:999px)',
    'smalltouch_landscape_layout' => 'one_col_stack',
    'smalltouch_landscape_sidebar_unit' => '%',
    'smalltouch_landscape_sidebar_first' => '50',
    'smalltouch_landscape_sidebar_second' => '50',
    'smalltouch_landscape_media_query' => 'only screen and (min-width:480px) and (max-width:723px)',
    'smalltouch_landscape_page_width' => '100',
    'smalltouch_landscape_page_unit' => '%',
    'smalltouch_portrait_media_query' => 'only screen and (max-width:723px)',
    'smalltouch_portrait_page_width' => '100',
    'smalltouch_portrait_page_unit' => '%',
    'smalltouch_portrait_sidebar_first' => '100',
    'smalltouch_portrait_sidebar_second' => '100',
    'smalltouch_portrait_sidebar_unit' => '%',
    'smalltouch_portrait_layout' => 'one_col_stack',
    'bigscreen_two_33_66' => 'two-33-66',
    'bigscreen_two_brick' => 'two-brick',
    'bigscreen_two_50' => 'two-50',
    'bigscreen_two_66_33' => 'two-66-33',
    'bigscreen_three_25_25_50' => 'three-25-25-50',
    'bigscreen_three_25_50_25' => 'three-25-50-25',
    'bigscreen_three_50_25_25' => 'three-50-25-25',
    'bigscreen_three_3x33' => 'three-3x33',
    'bigscreen_five_5x20' => 'five-5x20-2x3-grid',
    'bigscreen_four_4x25' => 'four-4x25',
    'bigscreen_six_6x16' => 'six-6x16-3x2-grid',
    'bigscreen_three_inset_right' => 'three-inset-right',
    'bigscreen_three_inset_left' => 'three-inset-left',
    'tablet_landscape_two_33_66' => 'two-33-66',
    'tablet_landscape_two_brick' => 'two-brick',
    'tablet_landscape_two_50' => 'two-50',
    'tablet_landscape_two_66_33' => 'two-66-33',
    'tablet_landscape_three_25_25_50' => 'three-25-25-50',
    'tablet_landscape_three_25_50_25' => 'three-25-50-25',
    'tablet_landscape_three_50_25_25' => 'three-50-25-25',
    'tablet_landscape_three_3x33' => 'three-3x33',
    'tablet_landscape_five_5x20' => 'five-5x20',
    'tablet_landscape_four_4x25' => 'four-4x25',
    'tablet_landscape_six_6x16' => 'six-6x16-3x2-grid',
    'tablet_landscape_three_inset_right' => 'three-inset-right',
    'tablet_landscape_three_inset_left' => 'three-inset-left',
    'tablet_portrait_two_33_66' => 'two-33-66',
    'tablet_portrait_two_brick' => 'two-brick',
    'tablet_portrait_two_50' => 'two-50',
    'tablet_portrait_two_66_33' => 'two-66-33',
    'tablet_portrait_three_25_25_50' => 'three-25-25-50-stack-top',
    'tablet_portrait_three_25_50_25' => 'three-25-50-25-stack-top',
    'tablet_portrait_three_50_25_25' => 'three-50-25-25-stack-top',
    'tablet_portrait_three_3x33' => 'three-3x33-stack-top',
    'tablet_portrait_five_5x20' => 'five-5x20-1x2x2-grid',
    'tablet_portrait_four_4x25' => 'four-4x25-2x2-grid',
    'tablet_portrait_six_6x16' => 'six-6x16-2x3-grid',
    'tablet_portrait_three_inset_right' => 'three-inset-right-wrap',
    'tablet_portrait_three_inset_left' => 'three-inset-left-wrap',
    'smalltouch_landscape_two_33_66' => 'two-33-66-stack',
    'smalltouch_landscape_two_brick' => 'two-brick-stack',
    'smalltouch_landscape_two_50' => 'two-50-stack',
    'smalltouch_landscape_two_66_33' => 'two-66-33-stack',
    'smalltouch_landscape_three_25_25_50' => 'three-25-25-50-stack',
    'smalltouch_landscape_three_25_50_25' => 'three-25-50-25-stack',
    'smalltouch_landscape_three_50_25_25' => 'three-50-25-25-stack',
    'smalltouch_landscape_three_3x33' => 'three-3x33-stack',
    'smalltouch_landscape_five_5x20' => 'five-5x20-stack',
    'smalltouch_landscape_four_4x25' => 'four-4x25-stack',
    'smalltouch_landscape_six_6x16' => 'six-6x16-stack',
    'smalltouch_landscape_three_inset_right' => 'three-inset-right-stack',
    'smalltouch_landscape_three_inset_left' => 'three-inset-left-stack',
    'global_default_layout_toggle' => 0,
    'global_default_layout' => 'smalltouch-portrait',
    'disable_responsive_styles' => 0,
    'global_files_path' => 'public_files',
    'custom_files_path' => '',
    'combine_css_files' => 0,
    'combine_js_files' => 0,
    'enable_custom_media_queries' => 1,
    'load_html5js' => 1,
    'load_matchmediajs' => 1,
    'load_onmediaqueryjs' => 0,
    'load_ltie8css' => 0,
    'load_respondjs' => 0,
    'load_scalefixjs' => 0,
    'adaptivetheme_meta_viewport' => 'width=device-width, initial-scale=1.0, user-scalable=yes',
    'adaptivetheme_meta_mobileoptimized' => 'width',
    'adaptivetheme_meta_handheldfriendly' => 'true',
    'adaptivetheme_meta_apple_mobile_web_app_capable' => 'yes',
    'adaptivetheme_meta_ie_document_mode' => '',
    'adaptivetheme_meta_clear_type' => 0,
    'expose_regions' => 0,
    'show_window_size' => 0,
    'atcore_version_test' => 0,
    'load_all_panels' => 0,
    'load_all_panels_no_sidebars' => 0,
    'enable_extensions' => 1,
    'enable_font_settings' => 1,
    'enable_heading_settings' => 0,
    'enable_image_settings' => 0,
    'enable_apple_touch_icons' => 0,
    'enable_exclude_css' => 0,
    'enable_custom_css' => 0,
    'enable_context_regions' => 0,
    'enable_menu_toggle' => 1,
    'enable_float_region_blocks' => 0,
    'enable_markup_overides' => 0,
    'at-settings__active_tab' => 'edit-bigscreen',
    'base_font_type' => 'gwf',
    'base_font' => 'bf-sss',
    'base_font_gwf' => 'Roboto Condensed',
    'base_font_gwf_add_styles' => 1,
    'base_font_gwf_add_styles_300' => 0,
    'base_font_gwf_add_styles_300italic' => 0,
    'base_font_gwf_add_styles_400' => 1,
    'base_font_gwf_add_styles_400italic' => 0,
    'base_font_gwf_add_styles_700' => 0,
    'base_font_gwf_add_styles_700italic' => 0,
    'base_font_gwf_add_charsets' => 1,
    'base_font_gwf_add_charsets_latin' => 1,
    'base_font_gwf_add_charsets_latin-ext' => 1,
    'base_font_gwf_add_charsets_greek' => 0,
    'base_font_gwf_add_charsets_greek-ext' => 0,
    'base_font_gwf_add_charsets_cyrillic' => 1,
    'base_font_gwf_add_charsets_cyrillic-ext' => 1,
    'base_font_gwf_add_charsets_khmer' => 0,
    'base_font_gwf_add_charsets_vietnamese' => 0,
    'base_font_cfs' => '',
    'base_font_size' => '<none>',
    'site_name_font_type' => '<none>',
    'site_name_font' => 'bf-sss',
    'site_name_font_gwf' => '',
    'site_name_font_gwf_add_styles' => 0,
    'site_name_font_gwf_add_styles_300' => 0,
    'site_name_font_gwf_add_styles_300italic' => 0,
    'site_name_font_gwf_add_styles_400' => 0,
    'site_name_font_gwf_add_styles_400italic' => 0,
    'site_name_font_gwf_add_styles_700' => 0,
    'site_name_font_gwf_add_styles_700italic' => 0,
    'site_name_font_gwf_add_charsets' => 0,
    'site_name_font_gwf_add_charsets_latin' => 0,
    'site_name_font_gwf_add_charsets_latin-ext' => 0,
    'site_name_font_gwf_add_charsets_greek' => 0,
    'site_name_font_gwf_add_charsets_greek-ext' => 0,
    'site_name_font_gwf_add_charsets_cyrillic' => 0,
    'site_name_font_gwf_add_charsets_cyrillic-ext' => 0,
    'site_name_font_gwf_add_charsets_khmer' => 0,
    'site_name_font_gwf_add_charsets_vietnamese' => 0,
    'site_name_font_cfs' => '',
    'site_name_font_size' => '<none>',
    'site_slogan_font_type' => '<none>',
    'site_slogan_font' => 'bf-sss',
    'site_slogan_font_gwf' => '',
    'site_slogan_font_gwf_add_styles' => 0,
    'site_slogan_font_gwf_add_styles_300' => 0,
    'site_slogan_font_gwf_add_styles_300italic' => 0,
    'site_slogan_font_gwf_add_styles_400' => 0,
    'site_slogan_font_gwf_add_styles_400italic' => 0,
    'site_slogan_font_gwf_add_styles_700' => 0,
    'site_slogan_font_gwf_add_styles_700italic' => 0,
    'site_slogan_font_gwf_add_charsets' => 0,
    'site_slogan_font_gwf_add_charsets_latin' => 0,
    'site_slogan_font_gwf_add_charsets_latin-ext' => 0,
    'site_slogan_font_gwf_add_charsets_greek' => 0,
    'site_slogan_font_gwf_add_charsets_greek-ext' => 0,
    'site_slogan_font_gwf_add_charsets_cyrillic' => 0,
    'site_slogan_font_gwf_add_charsets_cyrillic-ext' => 0,
    'site_slogan_font_gwf_add_charsets_khmer' => 0,
    'site_slogan_font_gwf_add_charsets_vietnamese' => 0,
    'site_slogan_font_cfs' => '',
    'site_slogan_font_size' => '<none>',
    'page_title_font_type' => '<none>',
    'page_title_font' => 'bf-sss',
    'page_title_font_gwf' => '',
    'page_title_font_gwf_add_styles' => 0,
    'page_title_font_gwf_add_styles_300' => 0,
    'page_title_font_gwf_add_styles_300italic' => 0,
    'page_title_font_gwf_add_styles_400' => 0,
    'page_title_font_gwf_add_styles_400italic' => 0,
    'page_title_font_gwf_add_styles_700' => 0,
    'page_title_font_gwf_add_styles_700italic' => 0,
    'page_title_font_gwf_add_charsets' => 0,
    'page_title_font_gwf_add_charsets_latin' => 0,
    'page_title_font_gwf_add_charsets_latin-ext' => 0,
    'page_title_font_gwf_add_charsets_greek' => 0,
    'page_title_font_gwf_add_charsets_greek-ext' => 0,
    'page_title_font_gwf_add_charsets_cyrillic' => 0,
    'page_title_font_gwf_add_charsets_cyrillic-ext' => 0,
    'page_title_font_gwf_add_charsets_khmer' => 0,
    'page_title_font_gwf_add_charsets_vietnamese' => 0,
    'page_title_font_cfs' => '',
    'page_title_font_size' => '<none>',
    'node_title_font_type' => '<none>',
    'node_title_font' => 'bf-sss',
    'node_title_font_gwf' => '',
    'node_title_font_gwf_add_styles' => 0,
    'node_title_font_gwf_add_styles_300' => 0,
    'node_title_font_gwf_add_styles_300italic' => 0,
    'node_title_font_gwf_add_styles_400' => 0,
    'node_title_font_gwf_add_styles_400italic' => 0,
    'node_title_font_gwf_add_styles_700' => 0,
    'node_title_font_gwf_add_styles_700italic' => 0,
    'node_title_font_gwf_add_charsets' => 0,
    'node_title_font_gwf_add_charsets_latin' => 0,
    'node_title_font_gwf_add_charsets_latin-ext' => 0,
    'node_title_font_gwf_add_charsets_greek' => 0,
    'node_title_font_gwf_add_charsets_greek-ext' => 0,
    'node_title_font_gwf_add_charsets_cyrillic' => 0,
    'node_title_font_gwf_add_charsets_cyrillic-ext' => 0,
    'node_title_font_gwf_add_charsets_khmer' => 0,
    'node_title_font_gwf_add_charsets_vietnamese' => 0,
    'node_title_font_cfs' => '',
    'node_title_font_size' => '<none>',
    'comment_title_font_type' => '<none>',
    'comment_title_font' => 'bf-sss',
    'comment_title_font_gwf' => '',
    'comment_title_font_gwf_add_styles' => 0,
    'comment_title_font_gwf_add_styles_300' => 0,
    'comment_title_font_gwf_add_styles_300italic' => 0,
    'comment_title_font_gwf_add_styles_400' => 0,
    'comment_title_font_gwf_add_styles_400italic' => 0,
    'comment_title_font_gwf_add_styles_700' => 0,
    'comment_title_font_gwf_add_styles_700italic' => 0,
    'comment_title_font_gwf_add_charsets' => 0,
    'comment_title_font_gwf_add_charsets_latin' => 0,
    'comment_title_font_gwf_add_charsets_latin-ext' => 0,
    'comment_title_font_gwf_add_charsets_greek' => 0,
    'comment_title_font_gwf_add_charsets_greek-ext' => 0,
    'comment_title_font_gwf_add_charsets_cyrillic' => 0,
    'comment_title_font_gwf_add_charsets_cyrillic-ext' => 0,
    'comment_title_font_gwf_add_charsets_khmer' => 0,
    'comment_title_font_gwf_add_charsets_vietnamese' => 0,
    'comment_title_font_cfs' => '',
    'comment_title_font_size' => '<none>',
    'block_title_font_type' => '<none>',
    'block_title_font' => 'bf-sss',
    'block_title_font_gwf' => '',
    'block_title_font_gwf_add_styles' => 0,
    'block_title_font_gwf_add_styles_300' => 0,
    'block_title_font_gwf_add_styles_300italic' => 0,
    'block_title_font_gwf_add_styles_400' => 0,
    'block_title_font_gwf_add_styles_400italic' => 0,
    'block_title_font_gwf_add_styles_700' => 0,
    'block_title_font_gwf_add_styles_700italic' => 0,
    'block_title_font_gwf_add_charsets' => 0,
    'block_title_font_gwf_add_charsets_latin' => 0,
    'block_title_font_gwf_add_charsets_latin-ext' => 0,
    'block_title_font_gwf_add_charsets_greek' => 0,
    'block_title_font_gwf_add_charsets_greek-ext' => 0,
    'block_title_font_gwf_add_charsets_cyrillic' => 0,
    'block_title_font_gwf_add_charsets_cyrillic-ext' => 0,
    'block_title_font_gwf_add_charsets_khmer' => 0,
    'block_title_font_gwf_add_charsets_vietnamese' => 0,
    'block_title_font_cfs' => '',
    'block_title_font_size' => '<none>',
    'content_headings_h1h4_font_type' => '<none>',
    'content_headings_h1h4_font' => 'bf-sss',
    'content_headings_h1h4_font_gwf' => '',
    'content_headings_h1h4_font_gwf_add_styles' => 0,
    'content_headings_h1h4_font_gwf_add_styles_300' => 0,
    'content_headings_h1h4_font_gwf_add_styles_300italic' => 0,
    'content_headings_h1h4_font_gwf_add_styles_400' => 0,
    'content_headings_h1h4_font_gwf_add_styles_400italic' => 0,
    'content_headings_h1h4_font_gwf_add_styles_700' => 0,
    'content_headings_h1h4_font_gwf_add_styles_700italic' => 0,
    'content_headings_h1h4_font_gwf_add_charsets' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_latin' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_latin-ext' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_greek' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_greek-ext' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_cyrillic' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_cyrillic-ext' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_khmer' => 0,
    'content_headings_h1h4_font_gwf_add_charsets_vietnamese' => 0,
    'content_headings_h1h4_font_cfs' => '',
    'content_headings_h5h6_font_type' => '<none>',
    'content_headings_h5h6_font' => 'bf-sss',
    'content_headings_h5h6_font_gwf' => '',
    'content_headings_h5h6_font_gwf_add_styles' => 0,
    'content_headings_h5h6_font_gwf_add_styles_300' => 0,
    'content_headings_h5h6_font_gwf_add_styles_300italic' => 0,
    'content_headings_h5h6_font_gwf_add_styles_400' => 0,
    'content_headings_h5h6_font_gwf_add_styles_400italic' => 0,
    'content_headings_h5h6_font_gwf_add_styles_700' => 0,
    'content_headings_h5h6_font_gwf_add_styles_700italic' => 0,
    'content_headings_h5h6_font_gwf_add_charsets' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_latin' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_latin-ext' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_greek' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_greek-ext' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_cyrillic' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_cyrillic-ext' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_khmer' => 0,
    'content_headings_h5h6_font_gwf_add_charsets_vietnamese' => 0,
    'content_headings_h5h6_font_cfs' => '',
    'h1_font_size' => '2em',
    'h2_font_size' => '1.6em',
    'h3_font_size' => '1.4em',
    'h4_font_size' => '1.2em',
    'h5_font_size' => '1em',
    'h6_font_size' => '1em',
    'main_menu_font_type' => '<none>',
    'main_menu_font' => 'bf-sss',
    'main_menu_font_gwf' => '',
    'main_menu_font_gwf_add_styles' => 0,
    'main_menu_font_gwf_add_styles_300' => 0,
    'main_menu_font_gwf_add_styles_300italic' => 0,
    'main_menu_font_gwf_add_styles_400' => 0,
    'main_menu_font_gwf_add_styles_400italic' => 0,
    'main_menu_font_gwf_add_styles_700' => 0,
    'main_menu_font_gwf_add_styles_700italic' => 0,
    'main_menu_font_gwf_add_charsets' => 0,
    'main_menu_font_gwf_add_charsets_latin' => 0,
    'main_menu_font_gwf_add_charsets_latin-ext' => 0,
    'main_menu_font_gwf_add_charsets_greek' => 0,
    'main_menu_font_gwf_add_charsets_greek-ext' => 0,
    'main_menu_font_gwf_add_charsets_cyrillic' => 0,
    'main_menu_font_gwf_add_charsets_cyrillic-ext' => 0,
    'main_menu_font_gwf_add_charsets_khmer' => 0,
    'main_menu_font_gwf_add_charsets_vietnamese' => 0,
    'main_menu_font_cfs' => '',
    'main_menu_font_size' => '<none>',
    'secondary_menu_font_type' => '<none>',
    'secondary_menu_font' => 'bf-sss',
    'secondary_menu_font_gwf' => '',
    'secondary_menu_font_gwf_add_styles' => 0,
    'secondary_menu_font_gwf_add_styles_300' => 0,
    'secondary_menu_font_gwf_add_styles_300italic' => 0,
    'secondary_menu_font_gwf_add_styles_400' => 0,
    'secondary_menu_font_gwf_add_styles_400italic' => 0,
    'secondary_menu_font_gwf_add_styles_700' => 0,
    'secondary_menu_font_gwf_add_styles_700italic' => 0,
    'secondary_menu_font_gwf_add_charsets' => 0,
    'secondary_menu_font_gwf_add_charsets_latin' => 0,
    'secondary_menu_font_gwf_add_charsets_latin-ext' => 0,
    'secondary_menu_font_gwf_add_charsets_greek' => 0,
    'secondary_menu_font_gwf_add_charsets_greek-ext' => 0,
    'secondary_menu_font_gwf_add_charsets_cyrillic' => 0,
    'secondary_menu_font_gwf_add_charsets_cyrillic-ext' => 0,
    'secondary_menu_font_gwf_add_charsets_khmer' => 0,
    'secondary_menu_font_gwf_add_charsets_vietnamese' => 0,
    'secondary_menu_font_cfs' => '',
    'secondary_menu_font_size' => '<none>',
    'block_menu_font_type' => '<none>',
    'block_menu_font' => 'bf-sss',
    'block_menu_font_gwf' => '',
    'block_menu_font_gwf_add_styles' => 0,
    'block_menu_font_gwf_add_styles_300' => 0,
    'block_menu_font_gwf_add_styles_300italic' => 0,
    'block_menu_font_gwf_add_styles_400' => 0,
    'block_menu_font_gwf_add_styles_400italic' => 0,
    'block_menu_font_gwf_add_styles_700' => 0,
    'block_menu_font_gwf_add_styles_700italic' => 0,
    'block_menu_font_gwf_add_charsets' => 0,
    'block_menu_font_gwf_add_charsets_latin' => 0,
    'block_menu_font_gwf_add_charsets_latin-ext' => 0,
    'block_menu_font_gwf_add_charsets_greek' => 0,
    'block_menu_font_gwf_add_charsets_greek-ext' => 0,
    'block_menu_font_gwf_add_charsets_cyrillic' => 0,
    'block_menu_font_gwf_add_charsets_cyrillic-ext' => 0,
    'block_menu_font_gwf_add_charsets_khmer' => 0,
    'block_menu_font_gwf_add_charsets_vietnamese' => 0,
    'block_menu_font_cfs' => '',
    'block_menu_font_size' => '<none>',
    'selectors_font_type' => '<none>',
    'selectors_font' => 'bf-sss',
    'selectors_font_gwf' => '',
    'selectors_font_add_styles' => 0,
    'selectors_font_add_styles_300' => 0,
    'selectors_font_add_styles_300italic' => 0,
    'selectors_font_add_styles_400' => 0,
    'selectors_font_add_styles_400italic' => 0,
    'selectors_font_add_styles_700' => 0,
    'selectors_font_add_styles_700italic' => 0,
    'selectors_font_add_charsets' => 0,
    'selectors_font_add_charsets_latin' => 0,
    'selectors_font_add_charsets_latin-ext' => 0,
    'selectors_font_add_charsets_greek' => 0,
    'selectors_font_add_charsets_greek-ext' => 0,
    'selectors_font_add_charsets_cyrillic' => 0,
    'selectors_font_add_charsets_cyrillic-ext' => 0,
    'selectors_font_add_charsets_khmer' => 0,
    'selectors_font_add_charsets_vietnamese' => 0,
    'selectors_font_cfs' => '',
    'selectors_css' => '',
    'menu_toggle_tablet_portrait' => 1,
    'menu_toggle_tablet_landscape' => 0,
    'menu_toggle_main_menu' => 1,
    'menu_toggle_secondary_menu' => 0,
    'menu_toggle_leaderboard' => 0,
    'menu_toggle_header' => 0,
    'menu_toggle_menu_bar' => 1,
    'menu_toggle_main_menu_title' => 'Main menu',
    'menu_toggle_secondary_menu_title' => 'User menu',
    'at__active_tab' => 'edit-font',
    'at_core' => '7.x-3.x',
  );

  $export['theme_corporate_theme_settings'] = $strongarm;
  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 1;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = 'sites/default/files/avatar_default.png';
  $export['user_picture_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_guidelines';
  $strongarm->value = '';
  $export['user_picture_guidelines'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_path';
  $strongarm->value = 'pictures';
  $export['user_picture_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'thumbnail';
  $export['user_picture_style'] = $strongarm;

  return $export;
}
