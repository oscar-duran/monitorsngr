<?php
/**
 * @file
 * monitorsngr_pge.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function monitorsngr_pge_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ubicacion|node|decreto_de_emergencia|form';
  $field_group->group_name = 'group_ubicacion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'decreto_de_emergencia';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ubicación ',
    'weight' => '6',
    'children' => array(
      0 => 'field_ubicaci_n_geogr_fica',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => 'group-ubicacion field-group-accordion',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ubicacion|node|decreto_de_emergencia|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Ubicación ');

  return $field_groups;
}
