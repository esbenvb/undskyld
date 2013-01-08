<?php
/**
 * @file
 * undskyld_apology.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function undskyld_apology_user_default_permissions() {
  $permissions = array();

  // Exported permission: create apology content.
  $permissions['create apology content'] = array(
    'name' => 'create apology content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any apology content.
  $permissions['delete any apology content'] = array(
    'name' => 'delete any apology content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own apology content.
  $permissions['delete own apology content'] = array(
    'name' => 'delete own apology content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any apology content.
  $permissions['edit any apology content'] = array(
    'name' => 'edit any apology content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own apology content.
  $permissions['edit own apology content'] = array(
    'name' => 'edit own apology content',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
