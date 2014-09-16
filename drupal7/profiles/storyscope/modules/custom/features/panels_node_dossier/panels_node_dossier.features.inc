<?php
/**
 * @file
 * panels_node_dossier.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panels_node_dossier_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
