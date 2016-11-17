<?php
/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "adaptivetheme_subtheme" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "adaptivetheme_subtheme".
 * 2. Uncomment the required function to use.
 */
  
/**
 * Override or insert variables for the page templates.
 */
function corporate_theme_preprocess_page(&$vars) {
  global $header;
}

/**
 * Override or insert variables for the html templates.
 */
function corporate_theme_preprocess_html(&$vars) {
  $normal_path = trim($_GET['q'], '/');
  $path_alias = drupal_get_path_alias($normal_path);
  if ($path_alias == 'contact') {
    $vars['classes_array'][] = 'contact';
  }
  $meta_ie_render_engine = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
      'content' =>  'IE=edge,chrome=1',
      'http-equiv' => 'X-UA-Compatible',
    )
  );  
  // Add header meta tag for IE to head
  drupal_add_html_head($meta_ie_render_engine, 'meta_ie_render_engine');
}

function corporate_theme_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'comment_node_blog_form') {
    $form['actions']['submit']['#value'] = 'Comments';
  }
}
/**
 * Override or insert variables into the node templates.
 */
function corporate_theme_preprocess_node(&$vars) {
  if ($vars['type'] == "blog") {
    if ($vars['comment_count'] && in_array('comment-comments',
     $vars['content']['links']['comment']['#links'])) {
      $href = $vars['content']['links']['comment']['#links']['comment-comments']['href'];
    }
    else {
      $href = $vars['node_url'];
    }
    $comments_title = $vars['comment_count'];
    $vars['submitted'] = t('<span class="post-time-node">!datetime </span>
      <span class="username-wrapper"> by !username </span>
      <a href="!nid#comments"><span class="comments-amount">
      comment_count comments</span></a>',
      array(
        '!username' => $vars['name'],
        '!datetime' => format_date($vars['node']->created, 'custom', 'jS \of F, Y'),
        '!nid' => $href,
        'comment_count' => $comments_title,
      )
    );
  }
}

/**
 * Override or insert variables into the comment templates.
 */
function corporate_theme_preprocess_comment(&$vars) {
  $vars['submitted'] = t('!date at !time',
    array(
      '!date' => format_date($vars['comment']->created, 'custom', 'jS \of F, Y'),
      '!time' => format_date($vars['comment']->created, 'custom', 'g:s a'),
    )
  );
}

/**
 * Implements hook_block_view_alter().
 * @param array $data.
 * @param array $block.
 */
function corporate_theme_block_view_alter(&$data, $block) {
  if ($block->delta == 'breadcrumb' && arg(0) == 'portfolio') {
    if (arg(1) == 6) {
      $data['content'] = str_replace('class="active">Portfolio</a>', 'class="active">Category One</a>', $data['content']);
    }
    if (arg(1) == 8) {
      $data['content'] = str_replace('class="active">Portfolio</a>', 'class="active">Category Two</a>', $data['content']);
    }
    if (arg(1) == 1) {
      $data['content'] = str_replace('class="active">Portfolio</a>', 'class="active">Category Three</a>', $data['content']);
    }
  }
  if ($block->delta == 'breadcrumb' && arg(0) == 'search') {
    $new_data = substr($data['content'], 0, 116);
    $new_data .= substr($data['content'], 174);
    $data['content'] = $new_data;
  }
}
