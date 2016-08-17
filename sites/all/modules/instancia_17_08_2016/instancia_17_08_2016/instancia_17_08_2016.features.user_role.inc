<?php
/**
 * @file
 * instancia_17_08_2016.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function instancia_17_08_2016_user_default_roles() {
  $roles = array();

  // Exported role: admin-sngr.
  $roles['admin-sngr'] = array(
    'name' => 'admin-sngr',
    'weight' => 3,
  );

  // Exported role: analista-sngr.
  $roles['analista-sngr'] = array(
    'name' => 'analista-sngr',
    'weight' => 4,
  );

  // Exported role: user-alternativo.
  $roles['user-alternativo'] = array(
    'name' => 'user-alternativo',
    'weight' => 6,
  );

  // Exported role: user-institucional.
  $roles['user-institucional'] = array(
    'name' => 'user-institucional',
    'weight' => 5,
  );

  return $roles;
}
