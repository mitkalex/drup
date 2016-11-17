<?php
/**
 * @file
 * node_exp.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function node_exp_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Category Three',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '2db04435-b369-45d2-8bd2-4881759d2e97',
    'vocabulary_machine_name' => 'portfolio_categories',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Category Blog Five',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '4d7888ea-be58-4b5a-b6d6-2c8ec10ad37c',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Category Blog One',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4f770467-3231-446d-b23b-69e424906531',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Category Blog Two',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '8241ceb6-f571-4b00-a0a8-de504e678d0c',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Category Blog Four',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '8f667d63-ffa5-486b-b7dd-2a47c67c4425',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Category One',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9b8af35b-e43d-4147-8c76-215c254cc5c1',
    'vocabulary_machine_name' => 'portfolio_categories',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Category Blog Three',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'ebc9cf79-77ba-4997-b898-1a8697249915',
    'vocabulary_machine_name' => 'blog_categories',
    'url_alias' => array(),
  );
  $terms[] = array(
    'name' => 'Category Two',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'f24281c0-0a38-44ac-92a7-e10ff25399b7',
    'vocabulary_machine_name' => 'portfolio_categories',
    'url_alias' => array(),
  );
  return $terms;
}
