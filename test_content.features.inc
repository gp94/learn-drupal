<?php

/**
 * Implementation of hook_node_info().
 */
function test_content_node_info() {
  $items = array(
    'test_content' => array(
      'name' => t('test content'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function test_content_views_api() {
  return array(
    'api' => '2',
  );
}
