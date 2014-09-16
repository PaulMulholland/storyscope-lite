<?php

class views_handler_filter_rdf_predicate extends views_handler_filter_in_operator {
  function get_value_options() {
    $options = array();
    foreach (rdf_db_get_repository_names() as $name => $table) {
      $result = db_query('SELECT DISTINCT p.uri FROM {' . db_escape_table($table) . '} d INNER JOIN {rdf_resources} p ON d.pid = p.rid');
      while ($row = db_fetch_object($result)) {
        $options[$row->uri] = rdf_uri_to_qname($row->uri);
      }
    }
    $this->value_options = $options;
  }
}
