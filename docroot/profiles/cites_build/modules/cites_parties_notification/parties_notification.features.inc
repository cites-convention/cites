<?php
/**
 * @file
 * parties_notification.features.inc
 */

/**
 * Implements hook_views_api().
 */
function parties_notification_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function parties_notification_node_info() {
  $items = array(
    'parties_notification' => array(
      'name' => t('Notification to the parties'),
      'base' => 'node_content',
      'description' => t('Notifications to the parties'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
