<?php


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function storyscopezen_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  storyscopezen_preprocess_html($variables, $hook);
  storyscopezen_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
function storyscopezen_preprocess_page(&$variables, $hook) {
  global $user;
  if ($user->uid > 0){
    $logout_string = t('You are signed in as ') . l(check_plain($user->name), 'user/' . $user->uid) . ' - ';
    $logout_string .= l(t('Sign out'), 'user/logout');
    $variables['logout_string'] = $logout_string;
  }
  // Add inline 'create new' buttons with title on certain pages.
  if (!empty($variables['page']['#views_contextual_links_info']['views_ui']['view']->name)) {
  	
    $view_name = $variables['page']['#views_contextual_links_info']['views_ui']['view']->name;
    // We only need this inline create new button on certain views, so list them here.
    $create_new_views = array(
      'dossier_stories_panel_pane',
    );
    // Create and add in the button
    if (in_array($view_name, $create_new_views)) {
    	drupal_set_message($view_name);
      $view = views_get_view($view_name);
      $view_display = $variables['page']['#views_contextual_links_info']['views_ui']['view_display_id'];
      $view->set_display($view_display);
      $button_html = array();
      $button_html = storyscope_listings_get_view_header_footer($view);
      if (!empty($button_html)) {
        $variables['title_suffix']['storyscope'] = array(
          '#children' => $button_html,
        );
      }
    }
  }
}

/**
* Overrides the default sticky header for tables because we use FooTables and it isn't supported (yet)
*/
function storyscopezen_js_alter(&$js) {
    unset($js['misc/tableheader.js']);
}
/**
* Overrides the theme_field for field_fb_tags to make it clickable and link to the Event Space (this will change).
*/
function storyscopezen_field__field_fb_tags($variables) {
	if ($node = menu_get_object()) {
	  // Get the nid
	  $nid = $node->nid;
	}
	$output = '';
	$show_all = '';
	$path = drupal_lookup_path('alias', current_path());
	
	
	if (!empty ($variables['items'][0])) {
		    
			$show_all = l('<li class="tags">' . t('Show All') . '</li>',  $path , array('html'=>'true', 'attributes' => array('target'=>'_self'), 'query' => array('story'=> $nid )));
		    $output .= $show_all;
	}
	foreach ($variables['items'] as $item) {

		$fcid = key($item['entity']['field_collection_item']);
		if (!empty($item['entity']['field_collection_item'][$fcid]['field_mid'][0]['#markup'])) {
			$mid = $item['entity']['field_collection_item'][$fcid]['field_mid'][0]['#markup'];
		}
		if (!empty($item['entity']['field_collection_item'][$fcid]['field_topic'][0]['#markup'])) {
			$topic = $item['entity']['field_collection_item'][$fcid]['field_topic'][0]['#markup'];
		}
		if (!empty($mid) && !empty($topic)) {
			$relative_mid = end(explode("/", $mid));
			$output .= l('<li class="tags">' . $topic . '</li>',  $path , array('html'=>'true', 'attributes' => array('target'=>'_self'), 'query' => array('tag'=> '/m/' . $relative_mid )));
			
			//$output .= '<div class="tags freebase-link">' . $topic . '</div>';
		}
		elseif (empty($mid) && !empty($topic)) {
      $output .= '<li class="tags freebase-link">' . $topic . '</li>';
    }

	}
	// Render the top-level UL.
	$output = '<ul class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</ul>';
	return $output;
}

/**
 * Return a themed breadcrumb trail.
 *
 * @param $variables
 *   - title: An optional string to be used as a navigational heading to give
 *     context for breadcrumb links to screen-reader users.
 *   - title_attributes_array: Array of HTML attributes for the title. It is
 *     flattened into a string within the theme function.
 *   - breadcrumb: An array containing the breadcrumb links.
 * @return
 *   A string containing the breadcrumb output.
 */
function storyscopezen_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  $output = '';

  // Determine if we are to display the breadcrumb.
  $show_breadcrumb = theme_get_setting('zen_breadcrumb');
  if ($show_breadcrumb == 'yes' || $show_breadcrumb == 'admin' && arg(0) == 'admin') {

    // Optionally get rid of the homepage link.
    $show_breadcrumb_home = theme_get_setting('zen_breadcrumb_home');
    if (!$show_breadcrumb_home) {
      array_shift($breadcrumb);
    }

    // Return the breadcrumb with separators.
    if (!empty($breadcrumb)) {
      $breadcrumb_separator = theme_get_setting('zen_breadcrumb_separator');
      $trailing_separator = $title = '';
      if (theme_get_setting('zen_breadcrumb_title')) {
        $item = menu_get_item();
        if (!empty($item['tab_parent'])) {
          // If we are on a non-default tab, use the tab's title.
          $breadcrumb[] = check_plain($item['title']);
        }
        else {
          $breadcrumb[] = drupal_get_title();
        }
      }
      elseif (theme_get_setting('zen_breadcrumb_trailing')) {
        $trailing_separator = $breadcrumb_separator;
      }

      // Provide a navigational heading to give context for breadcrumb links to
      // screen-reader users.
      if (empty($variables['title'])) {
        $variables['title'] = t('You are here');
      }
      // Unless overridden by a preprocess function, make the heading invisible.
      if (!isset($variables['title_attributes_array']['class'])) {
        $variables['title_attributes_array']['class'][] = 'element-invisible';
      }

      // Build the breadcrumb trail.
      $output = '<nav class="breadcrumb" role="navigation">';
      $output .= '<h2' . drupal_attributes($variables['title_attributes_array']) . '>' . $variables['title'] . '</h2>';
      $output .= '<ol><li>' . implode($breadcrumb_separator . '</li><li>', $breadcrumb) . $trailing_separator . '</li></ol>';
      $output .= '</nav>';
    }
    // Else return just the title
    else {
      $title = drupal_get_title();
      return '<div class="breadcrumb">' . $title . '</div>';
    }
  }

  return $output;
}

/**
* Devel hook for testing
*
*Sends Form ID to message.
*/
/*
function storyscopezen_form_alter(&$form, &$form_state, $form_id) {
  $print = '<pre>' . print_r($form, TRUE) . '</pre>';
  if (module_exists('devel')) {
    dsm($form_id); // print form ID to messages
  }
  else {
    drupal_set_message($form_id); // print form ID to messages
  }
  if (module_exists('devel')) {
    dsm($form); // pretty print array using Krumo to messages
  }
  else {
    drupal_set_message($print);  // print array to messages
  }
  if($form_id == "event_node_form"){
  	$form['field_freebase_location_title']['#type'] = 'hidden';
  }
}
*/


