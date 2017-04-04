<?php
/**
 * @file
 * vocabularios.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function vocabularios_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_periodo|taxonomy_term|producto|form';
  $field_group->group_name = 'group_periodo';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'producto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Periodo',
    'weight' => '6',
    'children' => array(
      0 => 'field_anno_fin_meta',
      1 => 'field_anno_ini_meta',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-periodo field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_periodo|taxonomy_term|producto|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Periodo');

  return $field_groups;
}
