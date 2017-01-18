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
    'module' => 'serial',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'serial',
  );

  return $field_bases;
}
