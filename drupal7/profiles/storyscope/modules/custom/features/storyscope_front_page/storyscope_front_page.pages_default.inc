<?php
/**
 * @file
 * storyscope_front_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function storyscope_front_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'storyscope_front_page';
  $page->task = 'page';
  $page->admin_title = 'Storyscope Front Page';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_storyscope_front_page_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'storyscope_front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Landing page 2',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'sectioned';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle_1' => NULL,
      'middle_2_1' => NULL,
      'middle_2_2' => NULL,
      'middle_3' => NULL,
      'middle_4_1' => NULL,
      'middle_4_2' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '<none>';
  $display->uuid = '524bd719-2d90-4328-92bf-d3a75d715c81';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-24210847-5004-46f8-9aa9-6fd83a935d32';
    $pane->panel = 'middle_2_1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Custom Home Page Text',
      'title' => '',
      'body' => '<p style="margin-bottom: 1.5em; color: #4e4e4e; font-family: Arial, Helvetica, \'Nimbus Sans L\', sans-serif; line-height: 1.42em; font-size: 120%;">Storyscope is a software tool for exploring and creating stories.</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '24210847-5004-46f8-9aa9-6fd83a935d32';
    $display->content['new-24210847-5004-46f8-9aa9-6fd83a935d32'] = $pane;
    $display->panels['middle_2_1'][0] = 'new-24210847-5004-46f8-9aa9-6fd83a935d32';
    $pane = new stdClass();
    $pane->pid = 'new-b4651534-df60-42df-bad0-ca44d1f4f755';
    $pane->panel = 'middle_2_1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><img src="profiles/storyscope/themes/storyscopezen/images/all_hawaii_entrees_press_release_imma_2006.png" alt="" /></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b4651534-df60-42df-bad0-ca44d1f4f755';
    $display->content['new-b4651534-df60-42df-bad0-ca44d1f4f755'] = $pane;
    $display->panels['middle_2_1'][1] = 'new-b4651534-df60-42df-bad0-ca44d1f4f755';
    $pane = new stdClass();
    $pane->pid = 'new-84e35a3a-0f9a-44e7-893f-c802b8e8320f';
    $pane->panel = 'middle_2_2';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:user',
          'settings' => array(
            'type' => array(),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'float_left',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '84e35a3a-0f9a-44e7-893f-c802b8e8320f';
    $display->content['new-84e35a3a-0f9a-44e7-893f-c802b8e8320f'] = $pane;
    $display->panels['middle_2_2'][0] = 'new-84e35a3a-0f9a-44e7-893f-c802b8e8320f';
    $pane = new stdClass();
    $pane->pid = 'new-d835ec32-4543-46d5-a997-f844aeb4492f';
    $pane->panel = 'middle_3';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:user',
          'settings' => array(
            'type' => array(),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Add Dossier Button',
      'title' => '',
      'body' => '<a href="node/add/dossier"><p>Add a Dossier</p></a>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd835ec32-4543-46d5-a997-f844aeb4492f';
    $display->content['new-d835ec32-4543-46d5-a997-f844aeb4492f'] = $pane;
    $display->panels['middle_3'][0] = 'new-d835ec32-4543-46d5-a997-f844aeb4492f';
    $pane = new stdClass();
    $pane->pid = 'new-ec9bd614-e188-4554-8d8d-9cf0ec3c52fb';
    $pane->panel = 'middle_3';
    $pane->type = 'views';
    $pane->subtype = 'dossiers';
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
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ec9bd614-e188-4554-8d8d-9cf0ec3c52fb';
    $display->content['new-ec9bd614-e188-4554-8d8d-9cf0ec3c52fb'] = $pane;
    $display->panels['middle_3'][1] = 'new-ec9bd614-e188-4554-8d8d-9cf0ec3c52fb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-24210847-5004-46f8-9aa9-6fd83a935d32';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['storyscope_front_page'] = $page;

  return $pages;

}
