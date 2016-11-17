<?php
/**
 * @file
 * blocks.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function blocks_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'responsive_slideshow_mapping';
  $picture_mapping->machine_name = 'responsive_slideshow_mapping';
  $picture_mapping->breakpoint_group = 'slideshow_image_group';
  $picture_mapping->mapping = array(
    'custom.user.desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slideshow_responsive_stylecustom_user_desktop_1x',
      ),
    ),
    'custom.user.landscape_tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slideshow_responsive_stylecustom_user_landscape_tablet_1x',
      ),
    ),
    'custom.user.portrait_tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slideshow_responsive_stylecustom_user_portrait_tablet_1x',
      ),
    ),
    'custom.user.landscape_smalltouch' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slideshow_responsive_stylecustom_user_landscape_smalltouch_1x',
      ),
    ),
    'custom.user.portrait_smalltouch' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slideshow_responsive_stylecustom_user_portrait_smalltouch_1x',
      ),
    ),
  );
  $export['responsive_slideshow_mapping'] = $picture_mapping;

  return $export;
}
