<?php
/**
 * @file
 * tipos_contenido.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tipos_contenido_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vigencia|node|miembros|form';
  $field_group->group_name = 'group_vigencia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'miembros';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vigencia',
    'weight' => '5',
    'children' => array(
      0 => 'field_fecha_fin',
      1 => 'field_fecha',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vigencia field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_vigencia|node|miembros|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Vigencia');

  return $field_groups;
}
