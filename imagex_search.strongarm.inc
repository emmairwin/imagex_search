<?php
/**
 * @file
 * imagex_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function imagex_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'default_node_index' => array(
      'search_api_views:imagex_search_node:panel_pane_1' => 'search_api_views:imagex_search_node:panel_pane_1',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  return $export;
}
