<?php
/**
 * @file
 * content_type_storyscope_story.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_storyscope_story_node_info() {
  $items = array(
    'story' => array(
      'name' => t('Story'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
