<?php
/**
 * @file
 * content_type_storyscope_dossier.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_storyscope_dossier_node_info() {
  $items = array(
    'dossier' => array(
      'name' => t('Dossier'),
      'base' => 'node_content',
      'description' => t('Container for Storyscope Stories'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Give Your Dossier a Title and Description which will remind you and guide readers about the general theme.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
