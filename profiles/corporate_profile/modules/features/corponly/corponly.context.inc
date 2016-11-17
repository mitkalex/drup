<?php
/**
 * @file
 * corponly.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function corponly_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'blog' => 'blog',
        'features' => 'features',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recent_portfolio_items-block' => array(
          'module' => 'views',
          'delta' => 'recent_portfolio_items-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-feature_archive-block' => array(
          'module' => 'views',
          'delta' => 'feature_archive-block',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'views-categories-block' => array(
          'module' => 'views',
          'delta' => 'categories-block',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-comments_recent-block' => array(
          'module' => 'views',
          'delta' => 'comments_recent-block',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['blog_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contacts_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact' => 'contact',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;
  $export['contacts_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home_page_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-front_carousel-block' => array(
          'module' => 'views',
          'delta' => 'front_carousel-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-testimonials-block' => array(
          'module' => 'views',
          'delta' => 'testimonials-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-recent_articles-block' => array(
          'module' => 'views',
          'delta' => 'recent_articles-block',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-partners_carousel-block' => array(
          'module' => 'views',
          'delta' => 'partners_carousel-block',
          'region' => 'content',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['home_page_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'superfish-2' => array(
          'module' => 'superfish',
          'delta' => '2',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'views-recent_blog_posts-block' => array(
          'module' => 'views',
          'delta' => 'recent_blog_posts-block',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'logintoboggan-logintoboggan_logged_in' => array(
          'module' => 'logintoboggan',
          'delta' => 'logintoboggan_logged_in',
          'region' => 'header',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '9',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'menu_bar',
          'weight' => '-10',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['sitewide_context'] = $context;

  return $export;
}
