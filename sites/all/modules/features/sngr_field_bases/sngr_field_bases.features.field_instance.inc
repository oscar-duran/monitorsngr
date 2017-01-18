<?php
/**
 * @file
 * sngr_field_bases.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sngr_field_bases_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-ambito-field_auto_inc_ambito'.
  $field_instances['taxonomy_term-ambito-field_auto_inc_ambito'] = array(
    'bundle' => 'ambito',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'serial',
        'settings' => array(),
        'type' => 'serial_formatter_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_auto_inc_ambito',
    'label' => 'auto-inc-ambito',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'serial',
      'settings' => array(),
      'type' => 'serial_widget_default',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-eje-field_auto_inc_eje'.
  $field_instances['taxonomy_term-eje-field_auto_inc_eje'] = array(
    'bundle' => 'eje',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'serial',
        'settings' => array(),
        'type' => 'serial_formatter_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_auto_inc_eje',
    'label' => 'auto-inc-eje',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'serial',
      'settings' => array(),
      'type' => 'serial_widget_default',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-lineamiento-field_auto_inc_lin'.
  $field_instances['taxonomy_term-lineamiento-field_auto_inc_lin'] = array(
    'bundle' => 'lineamiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'serial',
        'settings' => array(),
        'type' => 'serial_formatter_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_auto_inc_lin',
    'label' => 'auto-inc-lin',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'serial',
      'settings' => array(),
      'type' => 'serial_widget_default',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('auto-inc-ambito');
  t('auto-inc-eje');
  t('auto-inc-lin');

  return $field_instances;
}
