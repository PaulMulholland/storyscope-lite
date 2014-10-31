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
    $pane->pid = 'new-e9a8224c-fdb2-42bf-98eb-17dfa626fe63';
    $pane->panel = 'bottom';
    $pane->type = 'block';
    $pane->subtype = 'installation_theme-installation_theme_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'e9a8224c-fdb2-42bf-98eb-17dfa626fe63';
    $display->content['new-e9a8224c-fdb2-42bf-98eb-17dfa626fe63'] = $pane;
    $display->panels['bottom'][0] = 'new-e9a8224c-fdb2-42bf-98eb-17dfa626fe63';
    $pane = new stdClass();
    $pane->pid = 'new-24210847-5004-46f8-9aa9-6fd83a935d32';
    $pane->panel = 'middle_1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Custom Home Page Text',
      'title' => '',
      'body' => '<p class="custom_front_text" >Storyscope is a software tool for exploring and creating stories.</p>
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
    $display->panels['middle_1'][0] = 'new-24210847-5004-46f8-9aa9-6fd83a935d32';
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
      'override_title' => 1,
      'override_title_text' => '<i class="fa fa-folder-open fa-lg"></i>&nbsp;Dossiers',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ec9bd614-e188-4554-8d8d-9cf0ec3c52fb';
    $display->content['new-ec9bd614-e188-4554-8d8d-9cf0ec3c52fb'] = $pane;
    $display->panels['middle_3'][0] = 'new-ec9bd614-e188-4554-8d8d-9cf0ec3c52fb';
    $pane = new stdClass();
    $pane->pid = 'new-d835ec32-4543-46d5-a997-f844aeb4492f';
    $pane->panel = 'middle_3';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'create dossier content',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Add Dossier Button',
      'title' => '',
      'body' => '<div class="button float_right"><a href="node/add/dossier">Add a Dossier</a></div>',
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
    $pane->uuid = 'd835ec32-4543-46d5-a997-f844aeb4492f';
    $display->content['new-d835ec32-4543-46d5-a997-f844aeb4492f'] = $pane;
    $display->panels['middle_3'][1] = 'new-d835ec32-4543-46d5-a997-f844aeb4492f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-24210847-5004-46f8-9aa9-6fd83a935d32';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['storyscope_front_page'] = $page;

  return $pages;

}
