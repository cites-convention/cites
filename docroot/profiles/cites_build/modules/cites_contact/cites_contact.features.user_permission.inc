<?php
/**
 * @file
 * cites_contact.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cites_contact_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create cites_contact content'.
  $permissions['create cites_contact content'] = array(
    'name' => 'create cites_contact content',
    'roles' => array(
      'Contact Editor' => 'Contact Editor',
      'Content Editor' => 'Content Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cites_contact content'.
  $permissions['delete any cites_contact content'] = array(
    'name' => 'delete any cites_contact content',
    'roles' => array(
      'Contact Editor' => 'Contact Editor',
      'Content Editor' => 'Content Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cites_contact content'.
  $permissions['delete own cites_contact content'] = array(
    'name' => 'delete own cites_contact content',
    'roles' => array(
      'Contact Editor' => 'Contact Editor',
      'Content Editor' => 'Content Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in contact_categories'.
  $permissions['delete terms in contact_categories'] = array(
    'name' => 'delete terms in contact_categories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in contact_languages'.
  $permissions['delete terms in contact_languages'] = array(
    'name' => 'delete terms in contact_languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any cites_contact content'.
  $permissions['edit any cites_contact content'] = array(
    'name' => 'edit any cites_contact content',
    'roles' => array(
      'Contact Editor' => 'Contact Editor',
      'Content Editor' => 'Content Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cites_contact content'.
  $permissions['edit own cites_contact content'] = array(
    'name' => 'edit own cites_contact content',
    'roles' => array(
      'Contact Editor' => 'Contact Editor',
      'Content Editor' => 'Content Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in contact_categories'.
  $permissions['edit terms in contact_categories'] = array(
    'name' => 'edit terms in contact_categories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in contact_languages'.
  $permissions['edit terms in contact_languages'] = array(
    'name' => 'edit terms in contact_languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
