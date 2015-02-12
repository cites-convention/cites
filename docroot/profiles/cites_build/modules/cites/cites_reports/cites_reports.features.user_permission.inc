<?php
/**
 * @file
 * cites_reports.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cites_reports_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create biennial_report content'.
  $permissions['create biennial_report content'] = array(
    'name' => 'create biennial_report content',
    'roles' => array(
      'Biennial Report Editor' => 'Biennial Report Editor',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any biennial_report content'.
  $permissions['delete any biennial_report content'] = array(
    'name' => 'delete any biennial_report content',
    'roles' => array(
      'Biennial Report Editor' => 'Biennial Report Editor',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own biennial_report content'.
  $permissions['delete own biennial_report content'] = array(
    'name' => 'delete own biennial_report content',
    'roles' => array(
      'Biennial Report Editor' => 'Biennial Report Editor',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any biennial_report content'.
  $permissions['edit any biennial_report content'] = array(
    'name' => 'edit any biennial_report content',
    'roles' => array(
      'Biennial Report Editor' => 'Biennial Report Editor',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own biennial_report content'.
  $permissions['edit own biennial_report content'] = array(
    'name' => 'edit own biennial_report content',
    'roles' => array(
      'Biennial Report Editor' => 'Biennial Report Editor',
      'Content Editor' => 'Content Editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
