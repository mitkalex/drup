<?php
/**
 * @file
 * blocks.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function blocks_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.desktop';
  $breakpoint->name = 'desktop';
  $breakpoint->breakpoint = 'only screen and (min-width:1000px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 4;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.desktop'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.landscape_smalltouch';
  $breakpoint->name = 'landscape_smalltouch';
  $breakpoint->breakpoint = 'only screen and (min-width:480px) and (max-width:723px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 7;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.landscape_smalltouch'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.landscape_tablet';
  $breakpoint->name = 'landscape_tablet';
  $breakpoint->breakpoint = 'only screen and (min-width:999px) and (max-width:999px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 5;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.landscape_tablet'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.portrait_smalltouch';
  $breakpoint->name = 'portrait_smalltouch';
  $breakpoint->breakpoint = 'only screen and (max-width:723px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 8;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.portrait_smalltouch'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.portrait_tablet';
  $breakpoint->name = 'portrait_tablet';
  $breakpoint->breakpoint = 'only screen and (min-width:724px) and (max-width:999px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 6;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.portrait_tablet'] = $breakpoint;

  return $export;
}
