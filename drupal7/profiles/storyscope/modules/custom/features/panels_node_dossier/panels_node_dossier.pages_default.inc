<?php
/**
 * @file
 * panels_node_dossier.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panels_node_dossier_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Dossiers',
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
              'dossier' => 'dossier',
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
    $pane->pid = 'new-0e937958-f084-4d48-9a31-77caa59d2566';
    $pane->panel = 'middle_2_2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="button"><a href="%node:nid/story/add">Add a Story</a></div>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0e937958-f084-4d48-9a31-77caa59d2566';
    $display->content['new-0e937958-f084-4d48-9a31-77caa59d2566'] = $pane;
    $display->panels['middle_2_2'][0] = 'new-0e937958-f084-4d48-9a31-77caa59d2566';
    $pane = new stdClass();
    $pane->pid = 'new-14a4f189-d6c1-455f-81f8-97ea82c8a2c2';
    $pane->panel = 'middle_3';
    $pane->type = 'views';
    $pane->subtype = 'dossier_stories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'dossier_stories_panel_pane',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Dossier Stories',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '14a4f189-d6c1-455f-81f8-97ea82c8a2c2';
    $display->content['new-14a4f189-d6c1-455f-81f8-97ea82c8a2c2'] = $pane;
    $display->panels['middle_3'][0] = 'new-14a4f189-d6c1-455f-81f8-97ea82c8a2c2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
