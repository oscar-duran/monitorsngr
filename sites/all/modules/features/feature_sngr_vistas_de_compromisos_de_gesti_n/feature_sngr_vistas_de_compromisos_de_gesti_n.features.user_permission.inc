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

  // Exported permission: 'create field_descripcion_accion'.
  $permissions['create field_descripcion_accion'] = array(
    'name' => 'create field_descripcion_accion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_nombre_manual'.
  $permissions['create field_nombre_manual'] = array(
    'name' => 'create field_nombre_manual',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_descripcion_accion'.
  $permissions['edit field_descripcion_accion'] = array(
    'name' => 'edit field_descripcion_accion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_nombre_manual'.
  $permissions['edit field_nombre_manual'] = array(
    'name' => 'edit field_nombre_manual',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_descripcion_accion'.
  $permissions['edit own field_descripcion_accion'] = array(
    'name' => 'edit own field_descripcion_accion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_nombre_manual'.
  $permissions['edit own field_nombre_manual'] = array(
    'name' => 'edit own field_nombre_manual',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_descripcion_accion'.
  $permissions['view field_descripcion_accion'] = array(
    'name' => 'view field_descripcion_accion',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_nombre_manual'.
  $permissions['view field_nombre_manual'] = array(
    'name' => 'view field_nombre_manual',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_descripcion_accion'.
  $permissions['view own field_descripcion_accion'] = array(
    'name' => 'view own field_descripcion_accion',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_nombre_manual'.
  $permissions['view own field_nombre_manual'] = array(
    'name' => 'view own field_nombre_manual',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
