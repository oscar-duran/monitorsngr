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
  $field_group->identifier = 'group_cobertura|node|peg_ficha_tecnica_compromiso|form';
  $field_group->group_name = 'group_cobertura';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'peg_ficha_tecnica_compromiso';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cobertura',
    'weight' => '4',
    'children' => array(
      0 => 'field_zona_intervencion',
      1 => 'field_poblacion_meta',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Cobertura',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-cobertura field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_cobertura|node|peg_ficha_tecnica_compromiso|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_competencias|node|peg_ficha_tecnica_compromiso|form';
  $field_group->group_name = 'group_competencias';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'peg_ficha_tecnica_compromiso';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Competencias',
    'weight' => '5',
    'children' => array(
      0 => 'field_unidad_responsable',
      1 => 'field_mecanismos_ejecucion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-competencias field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_competencias|node|peg_ficha_tecnica_compromiso|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_responsable|node|peg_ficha_tecnica_compromiso|form';
  $field_group->group_name = 'group_responsable';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'peg_ficha_tecnica_compromiso';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Funcionario Responsable',
    'weight' => '9',
    'children' => array(
      0 => 'field_funcionario_responsable',
      1 => 'field_cargo_fun_responsable',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-responsable field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_responsable|node|peg_ficha_tecnica_compromiso|form'] = $field_group;

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
  t('Cobertura');
  t('Competencias');
  t('Funcionario Responsable');
  t('Ubicación ');

  return $field_groups;
}
