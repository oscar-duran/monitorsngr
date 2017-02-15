<?php
/**
 * @file
 * sngr_field_bases.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sngr_field_bases_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_accion_a_seguir'.
  $permissions['create field_accion_a_seguir'] = array(
    'name' => 'create field_accion_a_seguir',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_anno_fin_meta'.
  $permissions['create field_anno_fin_meta'] = array(
    'name' => 'create field_anno_fin_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_anno_ini_meta'.
  $permissions['create field_anno_ini_meta'] = array(
    'name' => 'create field_anno_ini_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_aspecto_positivo'.
  $permissions['create field_aspecto_positivo'] = array(
    'name' => 'create field_aspecto_positivo',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_cod_producto_meta'.
  $permissions['create field_cod_producto_meta'] = array(
    'name' => 'create field_cod_producto_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_codigo_ambito'.
  $permissions['create field_codigo_ambito'] = array(
    'name' => 'create field_codigo_ambito',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_codigo_eje'.
  $permissions['create field_codigo_eje'] = array(
    'name' => 'create field_codigo_eje',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_codigo_lineamiento'.
  $permissions['create field_codigo_lineamiento'] = array(
    'name' => 'create field_codigo_lineamiento',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_descripc_fuente_verifica'.
  $permissions['create field_descripc_fuente_verifica'] = array(
    'name' => 'create field_descripc_fuente_verifica',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_institucion'.
  $permissions['create field_institucion'] = array(
    'name' => 'create field_institucion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_institucion_administradora'.
  $permissions['create field_institucion_administradora'] = array(
    'name' => 'create field_institucion_administradora',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_accion_a_seguir'.
  $permissions['edit field_accion_a_seguir'] = array(
    'name' => 'edit field_accion_a_seguir',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_anno_fin_meta'.
  $permissions['edit field_anno_fin_meta'] = array(
    'name' => 'edit field_anno_fin_meta',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_anno_ini_meta'.
  $permissions['edit field_anno_ini_meta'] = array(
    'name' => 'edit field_anno_ini_meta',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_aspecto_positivo'.
  $permissions['edit field_aspecto_positivo'] = array(
    'name' => 'edit field_aspecto_positivo',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_cod_producto_meta'.
  $permissions['edit field_cod_producto_meta'] = array(
    'name' => 'edit field_cod_producto_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_codigo_ambito'.
  $permissions['edit field_codigo_ambito'] = array(
    'name' => 'edit field_codigo_ambito',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_codigo_eje'.
  $permissions['edit field_codigo_eje'] = array(
    'name' => 'edit field_codigo_eje',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_codigo_lineamiento'.
  $permissions['edit field_codigo_lineamiento'] = array(
    'name' => 'edit field_codigo_lineamiento',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_descripc_fuente_verifica'.
  $permissions['edit field_descripc_fuente_verifica'] = array(
    'name' => 'edit field_descripc_fuente_verifica',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_institucion'.
  $permissions['edit field_institucion'] = array(
    'name' => 'edit field_institucion',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_institucion_administradora'.
  $permissions['edit field_institucion_administradora'] = array(
    'name' => 'edit field_institucion_administradora',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_accion_a_seguir'.
  $permissions['edit own field_accion_a_seguir'] = array(
    'name' => 'edit own field_accion_a_seguir',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_anno_fin_meta'.
  $permissions['edit own field_anno_fin_meta'] = array(
    'name' => 'edit own field_anno_fin_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_anno_ini_meta'.
  $permissions['edit own field_anno_ini_meta'] = array(
    'name' => 'edit own field_anno_ini_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_aspecto_positivo'.
  $permissions['edit own field_aspecto_positivo'] = array(
    'name' => 'edit own field_aspecto_positivo',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_cod_producto_meta'.
  $permissions['edit own field_cod_producto_meta'] = array(
    'name' => 'edit own field_cod_producto_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_codigo_ambito'.
  $permissions['edit own field_codigo_ambito'] = array(
    'name' => 'edit own field_codigo_ambito',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_codigo_eje'.
  $permissions['edit own field_codigo_eje'] = array(
    'name' => 'edit own field_codigo_eje',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_codigo_lineamiento'.
  $permissions['edit own field_codigo_lineamiento'] = array(
    'name' => 'edit own field_codigo_lineamiento',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_descripc_fuente_verifica'.
  $permissions['edit own field_descripc_fuente_verifica'] = array(
    'name' => 'edit own field_descripc_fuente_verifica',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_institucion'.
  $permissions['edit own field_institucion'] = array(
    'name' => 'edit own field_institucion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_institucion_administradora'.
  $permissions['edit own field_institucion_administradora'] = array(
    'name' => 'edit own field_institucion_administradora',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_accion_a_seguir'.
  $permissions['view field_accion_a_seguir'] = array(
    'name' => 'view field_accion_a_seguir',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_anno_fin_meta'.
  $permissions['view field_anno_fin_meta'] = array(
    'name' => 'view field_anno_fin_meta',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_anno_ini_meta'.
  $permissions['view field_anno_ini_meta'] = array(
    'name' => 'view field_anno_ini_meta',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_aspecto_positivo'.
  $permissions['view field_aspecto_positivo'] = array(
    'name' => 'view field_aspecto_positivo',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_cod_producto_meta'.
  $permissions['view field_cod_producto_meta'] = array(
    'name' => 'view field_cod_producto_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_codigo_ambito'.
  $permissions['view field_codigo_ambito'] = array(
    'name' => 'view field_codigo_ambito',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_codigo_eje'.
  $permissions['view field_codigo_eje'] = array(
    'name' => 'view field_codigo_eje',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_codigo_lineamiento'.
  $permissions['view field_codigo_lineamiento'] = array(
    'name' => 'view field_codigo_lineamiento',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_descripc_fuente_verifica'.
  $permissions['view field_descripc_fuente_verifica'] = array(
    'name' => 'view field_descripc_fuente_verifica',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_institucion'.
  $permissions['view field_institucion'] = array(
    'name' => 'view field_institucion',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_institucion_administradora'.
  $permissions['view field_institucion_administradora'] = array(
    'name' => 'view field_institucion_administradora',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_accion_a_seguir'.
  $permissions['view own field_accion_a_seguir'] = array(
    'name' => 'view own field_accion_a_seguir',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_anno_fin_meta'.
  $permissions['view own field_anno_fin_meta'] = array(
    'name' => 'view own field_anno_fin_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_anno_ini_meta'.
  $permissions['view own field_anno_ini_meta'] = array(
    'name' => 'view own field_anno_ini_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_aspecto_positivo'.
  $permissions['view own field_aspecto_positivo'] = array(
    'name' => 'view own field_aspecto_positivo',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_cod_producto_meta'.
  $permissions['view own field_cod_producto_meta'] = array(
    'name' => 'view own field_cod_producto_meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_codigo_ambito'.
  $permissions['view own field_codigo_ambito'] = array(
    'name' => 'view own field_codigo_ambito',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_codigo_eje'.
  $permissions['view own field_codigo_eje'] = array(
    'name' => 'view own field_codigo_eje',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_codigo_lineamiento'.
  $permissions['view own field_codigo_lineamiento'] = array(
    'name' => 'view own field_codigo_lineamiento',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_descripc_fuente_verifica'.
  $permissions['view own field_descripc_fuente_verifica'] = array(
    'name' => 'view own field_descripc_fuente_verifica',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_institucion'.
  $permissions['view own field_institucion'] = array(
    'name' => 'view own field_institucion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_institucion_administradora'.
  $permissions['view own field_institucion_administradora'] = array(
    'name' => 'view own field_institucion_administradora',
    'roles' => array(
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
