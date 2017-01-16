<?php
/**
 * @file
 * feature_sngr_vistas_de_compromisos_de_gesti_n.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_sngr_vistas_de_compromisos_de_gesti_n_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit media'.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'media',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'media',
  );

  return $permissions;
}
