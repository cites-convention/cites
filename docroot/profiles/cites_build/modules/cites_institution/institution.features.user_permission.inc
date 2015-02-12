<?php
/**
 * @file
 * institution.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function institution_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'create institution content'.
  $permissions['create institution content'] = array(
    'name' => 'create institution content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any institution content'.
  $permissions['delete any institution content'] = array(
    'name' => 'delete any institution content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own institution content'.
  $permissions['delete own institution content'] = array(
    'name' => 'delete own institution content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in institution_type'.
  $permissions['delete terms in institution_type'] = array(
    'name' => 'delete terms in institution_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in prefered_language'.
  $permissions['delete terms in prefered_language'] = array(
    'name' => 'delete terms in prefered_language',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any institution content'.
  $permissions['edit any institution content'] = array(
    'name' => 'edit any institution content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own institution content'.
  $permissions['edit own institution content'] = array(
    'name' => 'edit own institution content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in institution_type'.
  $permissions['edit terms in institution_type'] = array(
    'name' => 'edit terms in institution_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in prefered_language'.
  $permissions['edit terms in prefered_language'] = array(
    'name' => 'edit terms in prefered_language',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
