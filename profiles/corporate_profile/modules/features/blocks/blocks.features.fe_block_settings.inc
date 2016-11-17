<?php
/**
 * @file
 * blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['backup_migrate-quick_backup'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'quick_backup',
    'module' => 'backup_migrate',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-3_column_front_page_block'] = array(
    'cache' => -1,
    'css_class' => 'columns-front-page',
    'custom' => 0,
    'machine_name' => '3_column_front_page_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'corporate_theme',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-footer_contact_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'footer_contact_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'corporate_theme',
        'weight' => -7,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Contact Us',
    'visibility' => 0,
  );

  $export['block-header_contact_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'header_contact_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'corporate_theme',
        'weight' => -28,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-twitter_dummy_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'twitter_dummy_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'corporate_theme',
        'weight' => -8,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Twitter Feed',
    'visibility' => 0,
  );

  $export['blog-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'blog',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['comment-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['context_ui-devel'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'context_ui',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['context_ui-editor'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'editor',
    'module' => 'context_ui',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-action-links'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'action-links',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-branding'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'branding',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-breadcrumb'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'breadcrumb',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-feed-icons'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'feed-icons',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-logo'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'logo',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-messages'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'messages',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-page-title'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'page-title',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-site-name'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'site-name',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-site-slogan'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'site-slogan',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-tabs'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'tabs',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'execute_php',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'superbread',
    'visibility' => 0,
  );

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'switch_user',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['logintoboggan-logintoboggan_logged_in'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'logintoboggan_logged_in',
    'module' => 'logintoboggan',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => -29,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'adaptivetheme',
        'weight' => -1,
      ),
      'adaptivetheme_admin' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'adaptivetheme_admin',
        'weight' => -1,
      ),
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => -27,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shortcuts',
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-1'] = array(
    'cache' => -1,
    'css_class' => 'superfish-menu-bar',
    'custom' => 0,
    'delta' => 1,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Menu',
    'visibility' => 0,
  );

  $export['superfish-2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 2,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => -29,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Navigation',
    'visibility' => 0,
  );

  $export['superfish-3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 3,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 1,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 4,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 1,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'corporate_theme',
        'weight' => -28,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'adaptivetheme',
        'weight' => 10,
      ),
      'adaptivetheme_admin' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'adaptivetheme_admin',
        'weight' => 10,
      ),
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(
      0 => 'blog',
    ),
    'pages' => 'blog
features',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-archive-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'archive-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'blog',
    ),
    'pages' => 'blog
features',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-blog_post_published_date-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blog_post_published_date-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'blog',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-categories-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'categories-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'blog',
    ),
    'pages' => 'blog
features',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-comments_recent-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'comments_recent-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'blog',
    ),
    'pages' => 'blog
features',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-front_carousel-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'front_carousel-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => -29,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-home_page_slideshow-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'home_page_slideshow-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-partners_carousel-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'partners_carousel-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => -24,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-portfolio_categories-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'portfolio_categories-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-recent_articles-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent_articles-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => -25,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-recent_blog_posts-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent_blog_posts-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => -28,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-recent_portfolio_items-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent_portfolio_items-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'blog',
    ),
    'pages' => 'blog
features',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-tags-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'tags-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-teset-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'teset-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-testimonials-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'testimonials-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporate_theme',
        'weight' => -26,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['webform-client-block-3'] = array(
    'cache' => -1,
    'css_class' => 'custom-contact-webform',
    'custom' => 0,
    'delta' => 'client-block-3',
    'module' => 'webform',
    'node_types' => array(),
    'pages' => 'contact',
    'roles' => array(),
    'themes' => array(
      'adaptivetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme',
        'weight' => 0,
      ),
      'adaptivetheme_admin' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adaptivetheme_admin',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corporate_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Complete the form',
    'visibility' => 1,
  );

  return $export;
}
