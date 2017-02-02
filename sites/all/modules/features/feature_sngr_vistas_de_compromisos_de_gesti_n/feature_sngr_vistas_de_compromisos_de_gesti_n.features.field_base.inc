<?php
/**
 * @file
 * feature_sngr_vistas_de_compromisos_de_gesti_n.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function feature_sngr_vistas_de_compromisos_de_gesti_n_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_id_compromiso'.
  $field_bases['field_id_compromiso'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_id_compromiso',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_nombre_manual'.
  $field_bases['field_nombre_manual'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nombre_manual',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Código por defecto',
        1 => 'Editar código',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_porcentaje_de_avance_compr'.
  $field_bases['field_porcentaje_de_avance_compr'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_porcentaje_de_avance_compr',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  return $field_bases;
}
