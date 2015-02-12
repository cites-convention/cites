<?php
/**
 * @file
 * cites_reports.features.inc
 */

/**
 * Implements hook_views_api().
 */
function cites_reports_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cites_reports_node_info() {
  $items = array(
    'biennial_report' => array(
      'name' => t('Biennial report'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
