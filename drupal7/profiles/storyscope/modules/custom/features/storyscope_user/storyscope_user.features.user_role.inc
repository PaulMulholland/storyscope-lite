<?php
/**
 * @file
 * storyscope_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function storyscope_user_user_default_roles() {
  $roles = array();

  // Exported role: storyscope user.
  $roles['storyscope user'] = array(
    'name' => 'storyscope user',
    'weight' => 3,
  );

  return $roles;
}
