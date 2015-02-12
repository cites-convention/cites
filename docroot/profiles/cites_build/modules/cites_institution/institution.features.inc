<?php
/**
 * @file
 * institution.features.inc
 */

/**
 * Implements hook_views_api().
 */
function institution_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function institution_node_info() {
  $items = array(
    'institution' => array(
      'name' => t('Institution'),
      'base' => 'node_content',
      'description' => t('Institution content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
