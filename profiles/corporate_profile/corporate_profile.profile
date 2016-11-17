<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */

if (!function_exists("system_form_install_configure_form_alter")) {
  function system_form_install_configure_form_alter(&$form, $form_state) {
    $form['site_information']['site_name']['#default_value'] = 'corporate_profile';
  }
}

/**
 * Implements hook_form_alter().
 *
 * Select the current install profile by default.
 */
if (!function_exists("system_form_alter")) {
  function system_form_install_select_profile_form_alter(&$form, $form_state) {
    foreach ($form['profile'] as $profile_name => $profile_data) {
      $form['profile'][$profile_name]['#value'] = 'corporate_profile';
    }
  }
}

/**
 * Implements hook_install_tasks().
 *
 * @param array $install_state
 * An array of information about the current installation state.
 *
 * 'display_name': step name, visible for user. NOTE: function t() is not
 * yet avaliable on install process, so you should use st() * instead.
 *
 * 'display': TRUE or FALSE. In case of no display_name or FALSE value,
 *  step will be hidden from steps list.
 *
 * 'type': There are 3 values possible:
 * - "Normal" could return HTML content or NULL if step completed. Set to
 *   default.
 * - "Batch" means that the step should be executed via Batch API.
 * - "Form" is used when the step requires to be presented as a form. We
 *   used Form in our example, because we need to receive some * info from user.
 *
 * 'run': Can be INSTALL_TASK_RUN_IF_REACHED, INSTALL_TASK_RUN_IF_NOT_COMPLETED
 * or INSTALL_TASK_SKIP.
 * - INSTALL_TASK_RUN_IF_REACHED - means that the task should be executed on
 *   each step oo the install process. Mostly used by core functions.
 * - INSTALL_TASK_RUN_IF_NOT_COMPLETED - run task once during install.
 *   Set to default.
 * - INSTALL_TASK_SKIP - skip task. Can be useful, if previous steps info tells
 *   us that the task not needed and should be skipped. *   function - a
 *   function to execute when step is reached. If not set, machine_name function
 *   will be called.
 */
function corporate_profile_install_tasks($install_state) {
  $tasks = array();
  $tasks['corporate_profile_blocks_turning'] = array(
    'display' => FALSE,
  );
  $tasks['corporate_profile_public_files_copy'] = array(
    'display' => FALSE,
  );
  $tasks['corporate_profile_config'] = array(
    'display_name' => st('Corporate Profile Config'),
    'display' => TRUE,
    'type' => 'form',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'corporate_profile_config_form',
  );
  return $tasks;
}

/**
 * Our custom form step.
 * Allow user to select profile features and demo content.
 *
 * @param array $form_state.
 * 
 * @return array $form.
 */
function corporate_profile_config_form($form_state) {
  $form['content'] = array(
    '#type' => 'fieldset',
    '#title' => st('Test content'),
  );
  $form['content']['components'] = array(
    '#type' => 'checkboxes',
    '#options' => array(
      'yes' => st('Would you like to install test content?'),
    ),
    '#default_value' => array(
      'yes',
    ),
    '#description' => st('Help to provide all functionality of this profile. Uncheked if you are skilled user and don\'t need it.'),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Apply'),
  );
  return $form;
}

/**
 * Corporate Profile configuration form submit.
 * Enable features modules depending on users' choice.
 *
 * @param array $form.
 * @param array $form_state.
 */
function corporate_profile_config_form_submit($form, &$form_state) {
  $modules = array();
  $values = $form_state['values'];
  if ($values['components']['yes']) {
    $modules[] = 'content';
  }
  // Enable features
  module_enable($modules);
}
/**
 * Our custom task.
 * Enable and turning blocks.
 *
 * @param array $install_state: An array of information about the current
 * installation state.
 */
function corporate_profile_blocks_turning($install_state) {
  $criteria = array(
    'type' => 'webform',
  );
  $nodes = entity_load('node', FALSE, $criteria);
  foreach ($nodes as $entity_id => $archive_entity) {
    $wnid = $archive_entity->nid;
  }
  $file_path = drupal_get_path('module', 'blocks') . '/blocks.features.fe_block_settings.inc';
  $search = 'client-block-131';
  $replace = 'client-block-' . $wnid;
  if (file_exists($file_path)) {
    $data = file_get_contents($file_path);
    $new_data = str_replace($search, $replace, $data);
    $fp = fopen($file_path, "w+");
    fwrite($fp, $new_data);
    fclose($fp);
  }
  $node = node_load(1);
  if (!empty($node)) {
    $node->path = array(
      'alias' => 'contact',
      'pathauto' => FALSE,
      'language' => 'und',
    );
    node_save($node);
  }
  if (!module_exists('blocks')) {
    $modules = array('blocks');
    module_enable($modules);
  }
}

/**
 * Our custom task.
 * Copy public files for default theme.
 *
 * @param array $install_state: An array of information about the current
 * installation state.
 */
function corporate_profile_public_files_copy($install_state) {
  $source = 'profiles/corporate_profile/uuid_features_assets/adaptivetheme/';
  $res = 'sites/default/files/adaptivetheme/';
  corporate_profile_recurse_copy($source, $res);
  $image_source = 'profiles/corporate_profile/uuid_features_assets/theme_logo.png';
  $image_res = 'sites/default/files/theme_logo.png';
  copy($image_source, $image_res);
  $image_source = 'profiles/corporate_profile/uuid_features_assets/avatar_default.png';
  $image_res = 'public://avatar_default.png';
  copy($image_source, $image_res);
}

/**
 * Recursive copy.
 *
 * @param string $src.
 * - Source folder with files.
 * @param string $dst.
 * - Destination folder.
 */
function corporate_profile_recurse_copy($src, $dst) {
  $dir = opendir($src);
  @mkdir($dst);
  while (FALSE !== ($file = readdir($dir))) {
    if (($file != '.') && ($file != '..')) {
      if (is_dir($src . '/' . $file)) {
        corporate_profile_recurse_copy($src . '/' . $file, $dst . '/' . $file);
      }
      else {
        copy($src . '/' . $file, $dst . '/' . $file);
      }
    }
  }
  closedir($dir);
}
