<?php
/**
 * @file
 * compromiso_de_geston_edit_views.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function compromiso_de_geston_edit_views_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_compromiso_id'.
  $field_bases['field_compromiso_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_compromiso_id',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'serial',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'serial',
  );

  // Exported field_base: 'field_computed_article'.
  $field_bases['field_computed_article'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_computed_article',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$title_b = field_get_items($entity_type, $entity, "title");
$entity_field[0][\'value\'] = $title_b[0]["value"] . $title_b[1]["value"];',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 128,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'recalculate' => 0,
      'store' => 1,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  return $field_bases;
}
