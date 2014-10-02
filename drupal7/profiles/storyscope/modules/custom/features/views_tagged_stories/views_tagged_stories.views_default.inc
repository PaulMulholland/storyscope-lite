<?php
/**
 * @file
 * views_tagged_stories.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_tagged_stories_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tagged_stories';
  $view->description = 'Stories which have an entity reference which has this MID value';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tagged Stories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Stories Tagged "%3"';
  $handler->display->display_options['css_class'] = 'resource-container container-full wide-items';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Stories with this Tag';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There appear to be no stories with this tag yet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Tags (field_fb_tags) */
  $handler->display->display_options['relationships']['field_fb_tags_value']['id'] = 'field_fb_tags_value';
  $handler->display->display_options['relationships']['field_fb_tags_value']['table'] = 'field_data_field_fb_tags';
  $handler->display->display_options['relationships']['field_fb_tags_value']['field'] = 'field_fb_tags_value';
  $handler->display->display_options['relationships']['field_fb_tags_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_fb_tags_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null_1']['id'] = 'null_1';
  $handler->display->display_options['arguments']['null_1']['table'] = 'views';
  $handler->display->display_options['arguments']['null_1']['field'] = 'null';
  $handler->display->display_options['arguments']['null_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null_1']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field collection item: Topic (field_topic) */
  $handler->display->display_options['arguments']['field_topic_value']['id'] = 'field_topic_value';
  $handler->display->display_options['arguments']['field_topic_value']['table'] = 'field_data_field_topic';
  $handler->display->display_options['arguments']['field_topic_value']['field'] = 'field_topic_value';
  $handler->display->display_options['arguments']['field_topic_value']['relationship'] = 'field_fb_tags_value';
  $handler->display->display_options['arguments']['field_topic_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_topic_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_topic_value']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_topic_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_topic_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_topic_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_topic_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'story' => 'story',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'dossier/%/story/%/tag/%';
  $export['tagged_stories'] = $view;

  return $export;
}
