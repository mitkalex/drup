<?php
/**
 * @file
 * blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home Page 3 columns of lists';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = '3_column_front_page_block';
  $fe_block_boxes->body = '<div class="column">
<strong id="ben-col-2"></strong><p>Suspendisse Potenti</p>
<ul>
<li><a href=#>Lorem ipsum dolor sit amet</a></li>
<li><a href=#>Dolor sit amet lorem ipsumsdfasdfasdfadsf</a></li>
<li><a href=#>Lorem ipsum dolor sit ametasdfasdfasdfasdfasdfasd</a></li>
<li><a href=#>Dolor sit amet lorem ipsum</a></li>
</ul>
</div>
<div class="column">
<strong id="ben-col-1"></strong><p>Molestie Magne Nunc</p>
<ul>
<li><a href=#>Lorem ipsum dolor sit amet</a></li>
<li><a href=#>Dolor sit amet lorem ipsum</a></li>
<li><a href=#>Lorem ipsum dolor sit amet</a></li>
<li><a href=#>Dolor sit amet lorem ipsum</a></li>
</ul>
</div>
<div class="column">
<strong id="ben-col-3"></strong><p>Condimentum Quam Mollis</p>
<ul>
<li><a href=#>Lorem ipsum dolor sit amet</a></li>
<li><a href=#>Dolor sit amet lorem ipsum Lorem ipsum Lorem ipsum</a></li>
<li><a href=#>Lorem ipsum dolor sit amet Lorem ipsum Lorem ipsum</a></li>
<li><a href=#>Dolor sit amet lorem ipsum Lorem ipsum</a></li>
</ul>
</div>
';

  $export['3_column_front_page_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact Us Block';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer_contact_block';
  $fe_block_boxes->body = '<ul>
<li id="fb"><a href=#>corporate_theme</a></li>
<li id="twitter"><a href=#>@corporate_theme</a></li>
<li id="linkedin"><a href=#>corporate theme</a></li>
<li id="google"><a href=#>corporate theme</a></li>
</ul>';

  $export['footer_contact_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header Login Contacts Block';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'header_contact_block';
  $fe_block_boxes->body = '<ul>
<li id="email-icon"><a href="mailto:corporate@corporate.com">corporate@corporate.com</a></li>
<li id="phone-icon"><a href="tel:8-800-123-4567">8-800-123-4567</a></li>
<li id="user-login"><a href="/user">Login</a></li>
</ul>';

  $export['header_contact_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Twitter Feed Block';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'twitter_dummy_block';
  $fe_block_boxes->body = 'Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.';

  $export['twitter_dummy_block'] = $fe_block_boxes;

  return $export;
}
