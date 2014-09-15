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
      'dossier_stories',
    );
    // Create and add in the button
    if (in_array($view_name, $create_new_views)) {
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
* Overrides the theme_field for field_fb_tags to make it clickable.
*/
function storyscopezen_field__field_fb_tags($variables) {
	$output = '';

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
			$output .= '<li class="tags">';
			$tags_link = l($topic, "tag/m/" . $relative_mid, array('attributes' => array('target'=>'_self')));
			$output .= $tags_link . '</li>';
			//$output .= '<div class="tags freebase-link">' . $topic . '</div>';
		}
		elseif (empty($mid) && !empty($topic)) {
      $output .= '<li class="tags freebase-link">' . $topic . '</li>';
    }

	}
	// Render the top-level DIV.
	$output = '<ul class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</ul>';
	return $output;
}
/**
* Devel hook for testing
*
*Sends Form ID to message.
*/
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



