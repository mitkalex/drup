<?php
/**
 * @file
 * blocks.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function blocks_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'slideshow_image_group';
  $breakpoint_group->name = 'slideshow_image_group';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.desktop',
    1 => 'custom.user.landscape_tablet',
    2 => 'custom.user.portrait_tablet',
    3 => 'custom.user.landscape_smalltouch',
    4 => 'custom.user.portrait_smalltouch',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['slideshow_image_group'] = $breakpoint_group;

  return $export;
}
