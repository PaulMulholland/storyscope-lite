<?php
/**
 * @file
 * panels_node_story.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panels_node_story_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Stories',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'story' => 'story',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'sectioned';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'middle_1' => array(
        'grid_setting' => 'grid',
      ),
      'middle_2_1' => NULL,
      'middle_2_2' => NULL,
      'middle_3' => NULL,
      'bottom' => NULL,
      'middle_4_1' => NULL,
      'middle_4_2' => NULL,
    ),
    'middle_1' => array(
      'style' => 'grid',
    ),
    'style' => 'default',
    'middle_3' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1c92e558-d518-4881-b4be-3e6de7be91e0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1307a31a-a9b0-4fc3-b7d2-a59f6d17ee2f';
    $pane->panel = 'bottom';
    $pane->type = 'story_event_space';
    $pane->subtype = 'story_event_space';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'username' => 'acdde',
      'override_title' => 1,
      'override_title_text' => 'Story Events',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1307a31a-a9b0-4fc3-b7d2-a59f6d17ee2f';
    $display->content['new-1307a31a-a9b0-4fc3-b7d2-a59f6d17ee2f'] = $pane;
    $display->panels['bottom'][0] = 'new-1307a31a-a9b0-4fc3-b7d2-a59f6d17ee2f';
    $pane = new stdClass();
    $pane->pid = 'new-db01f179-5a13-41d4-b6a8-89eddf9c3e2d';
    $pane->panel = 'middle_2_1';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '1000',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'db01f179-5a13-41d4-b6a8-89eddf9c3e2d';
    $display->content['new-db01f179-5a13-41d4-b6a8-89eddf9c3e2d'] = $pane;
    $display->panels['middle_2_1'][0] = 'new-db01f179-5a13-41d4-b6a8-89eddf9c3e2d';
    $pane = new stdClass();
    $pane->pid = 'new-345df191-fb76-46a3-9fb0-a4fd3e0aed49';
    $pane->panel = 'middle_2_2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_fb_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'field_collection_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'full',
        'edit' => '',
        'delete' => 'Delete',
        'add' => 'Add',
        'description' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Story Tags',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'resource-container container-full wide-items',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '345df191-fb76-46a3-9fb0-a4fd3e0aed49';
    $display->content['new-345df191-fb76-46a3-9fb0-a4fd3e0aed49'] = $pane;
    $display->panels['middle_2_2'][0] = 'new-345df191-fb76-46a3-9fb0-a4fd3e0aed49';
    $pane = new stdClass();
    $pane->pid = 'new-f5501261-ef8b-4f87-b70f-124d5fdc32cf';
    $pane->panel = 'middle_2_2';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'media_colorbox',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'media_preview',
        'colorbox_view_mode' => 'colorbox',
        'fixed_width' => '',
        'fixed_height' => '',
        'colorbox_gallery' => 'post',
        'colorbox_gallery_custom' => '',
        'colorbox_caption' => 'title',
        'audio_playlist' => 0,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Story Gallery',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'resource-container container-full wide-items',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f5501261-ef8b-4f87-b70f-124d5fdc32cf';
    $display->content['new-f5501261-ef8b-4f87-b70f-124d5fdc32cf'] = $pane;
    $display->panels['middle_2_2'][1] = 'new-f5501261-ef8b-4f87-b70f-124d5fdc32cf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
