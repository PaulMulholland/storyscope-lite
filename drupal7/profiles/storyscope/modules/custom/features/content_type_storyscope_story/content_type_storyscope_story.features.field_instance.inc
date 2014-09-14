<?php
/**
 * @file
 * content_type_storyscope_story.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_type_storyscope_story_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_fb_tags-field_mid'
  $field_instances['field_collection_item-field_fb_tags-field_mid'] = array(
    'bundle' => 'field_fb_tags',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_mid',
    'label' => 'MID',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_fb_tags-field_topic'
  $field_instances['field_collection_item-field_fb_tags-field_topic'] = array(
    'bundle' => 'field_fb_tags',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_topic',
    'label' => 'Topic',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'jquery_freebase',
      'settings' => array(
        'autocomplete_arguments' => '{"key" : "AIzaSyBd2HkCKxgBgFeXlp54EMJ0wGmgSMqgOAg"}',
      ),
      'type' => 'jquery_freebase_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-story-body'
  $field_instances['node-story-body'] = array(
    'bundle' => 'story',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-story-field_fb_tags'
  $field_instances['node-story-field_fb_tags'] = array(
    'bundle' => 'story',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fb_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-story-field_media'
  $field_instances['node-story-field_media'] = array(
    'bundle' => 'story',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'media_colorbox',
        'settings' => array(
          'audio_playlist' => 0,
          'colorbox_caption' => 'title',
          'colorbox_gallery' => 'none',
          'colorbox_gallery_custom' => '',
          'colorbox_view_mode' => 'colorbox',
          'file_view_mode' => 'media_small',
          'fixed_height' => '',
          'fixed_width' => '',
        ),
        'type' => 'media_colorbox',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_media',
    'label' => 'Media',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt jpg jpeg png',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('MID');
  t('Media');
  t('Tags');
  t('Topic');

  return $field_instances;
}
