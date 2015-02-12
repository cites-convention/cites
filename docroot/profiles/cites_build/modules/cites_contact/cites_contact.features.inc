<?php
/**
 * @file
 * cites_contact.features.inc
 */

/**
 * Implements hook_node_info().
 */
function cites_contact_node_info() {
  $items = array(
    'cites_contact' => array(
      'name' => t('Contact'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
