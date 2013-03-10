<?php
/**
 * @file
 * pro_101_answers_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_answers_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer specialties vocabulary terms.
  $permissions['administer specialties vocabulary terms'] = array(
    'name' => 'administer specialties vocabulary terms',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'vppr',
  );

  // Exported permission: delete terms in specialties.
  $permissions['delete terms in specialties'] = array(
    'name' => 'delete terms in specialties',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in specialties.
  $permissions['edit terms in specialties'] = array(
    'name' => 'edit terms in specialties',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
