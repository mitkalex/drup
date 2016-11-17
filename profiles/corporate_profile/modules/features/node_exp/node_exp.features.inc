<?php
/**
 * @file
 * node_exp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function node_exp_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function node_exp_image_default_styles() {
  $styles = array();

  // Exported image style: 1000x400_slideshow_.
  $styles['1000x400_slideshow_'] = array(
    'name' => '1000x400_slideshow_',
    'label' => '1000x400(slideshow)',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1000,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 190x100.
  $styles['190x100'] = array(
    'name' => '190x100',
    'label' => '190x100',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 190,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 190x100partner.
  $styles['190x100partner'] = array(
    'name' => '190x100partner',
    'label' => '190x100(partners)',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 195,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 220x135.
  $styles['220x135'] = array(
    'name' => '220x135',
    'label' => '220x135',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 135,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 220x155_portfolio_.
  $styles['220x155_portfolio_'] = array(
    'name' => '220x155_portfolio_',
    'label' => '220x155(portfolio)',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 155,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 460x280.
  $styles['460x280'] = array(
    'name' => '460x280',
    'label' => '460x280',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 460,
          'height' => 280,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 66x67_blog-thumbnails_.
  $styles['66x67_blog-thumbnails_'] = array(
    'name' => '66x67_blog-thumbnails_',
    'label' => '56x56(blog-thumbnails)',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 56,
          'height' => 56,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 940x662_portfolio-item_.
  $styles['940x662_portfolio-item_'] = array(
    'name' => '940x662_portfolio-item_',
    'label' => '940x662(portfolio-item)',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 940,
          'height' => 662,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slideshow_responsive_stylecustom_user_desktop_1x.
  $styles['slideshow_responsive_stylecustom_user_desktop_1x'] = array(
    'name' => 'slideshow_responsive_stylecustom_user_desktop_1x',
    'label' => 'slideshow_responsive_stylecustom_user_desktop_1x',
    'effects' => array(
      10 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1000,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slideshow_responsive_stylecustom_user_landscape_smalltouch_1x.
  $styles['slideshow_responsive_stylecustom_user_landscape_smalltouch_1x'] = array(
    'name' => 'slideshow_responsive_stylecustom_user_landscape_smalltouch_1x',
    'label' => 'slideshow_responsive_stylecustom_user_landscape_smalltouch_1x',
    'effects' => array(
      25 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 723,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slideshow_responsive_stylecustom_user_landscape_tablet_1x.
  $styles['slideshow_responsive_stylecustom_user_landscape_tablet_1x'] = array(
    'name' => 'slideshow_responsive_stylecustom_user_landscape_tablet_1x',
    'label' => 'slideshow_responsive_stylecustom_user_landscape_tablet_1x',
    'effects' => array(
      11 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1000,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slideshow_responsive_stylecustom_user_portrait_smalltouch_1x.
  $styles['slideshow_responsive_stylecustom_user_portrait_smalltouch_1x'] = array(
    'name' => 'slideshow_responsive_stylecustom_user_portrait_smalltouch_1x',
    'label' => 'slideshow_responsive_stylecustom_user_portrait_smalltouch_1x',
    'effects' => array(
      24 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: slideshow_responsive_stylecustom_user_portrait_tablet_1x.
  $styles['slideshow_responsive_stylecustom_user_portrait_tablet_1x'] = array(
    'name' => 'slideshow_responsive_stylecustom_user_portrait_tablet_1x',
    'label' => 'slideshow_responsive_stylecustom_user_portrait_tablet_1x',
    'effects' => array(
      12 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1000,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: user_default_icon_thumbnail_80_80.
  $styles['user_default_icon_thumbnail_80_80'] = array(
    'name' => 'user_default_icon_thumbnail_80_80',
    'label' => 'user_default_icon_thumbnail_80_80',
    'effects' => array(
      9 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 80,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function node_exp_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'part' => array(
      'name' => t('Partner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'portfolio_project' => array(
      'name' => t('Portfolio project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slideshow_item' => array(
      'name' => t('Slideshow item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
