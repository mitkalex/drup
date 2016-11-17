<?php
/**
 * @file
 * features_breadcrumbs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_breadcrumbs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function features_breadcrumbs_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: portfolio_breadcrumbs.
  $custom_breadcrumbs['portfolio_breadcrumbs'] = array(
    'name' => 'portfolio_breadcrumbs',
    'titles' => 'Portfolio',
    'paths' => 'portfolio',
    'visibility_php' => '',
    'node_type' => 'portfolio_project',
    'language' => '',
    'machine_name' => 'portfolio_breadcrumbs',
  );

  return $custom_breadcrumbs;
}
