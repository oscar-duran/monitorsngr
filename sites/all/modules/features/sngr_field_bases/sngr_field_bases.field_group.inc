<?php
/**
 * @file
 * sngr_field_bases.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function sngr_field_bases_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_miembros|node|instancia_coordinacion|form';
  $field_group->group_name = 'group_miembros';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'instancia_coordinacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Agregar Miembros Comités',
    'weight' => '6',
    'children' => array(
      0 => 'field_agregar_integrantes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_miembros|node|instancia_coordinacion|form'] = $field_group;

    $field_group = new stdClass();
    $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
    $field_group->api_version = 1;
    $field_group->identifier = 'group_meta_status_auto|node|meta|form';
    $field_group->group_name = 'group_meta_status_auto';
    $field_group->entity_type = 'node';
    $field_group->bundle = 'meta';
    $field_group->mode = 'form';
    $field_group->parent_name = '';
    $field_group->data = array(
        'label' => 'Status autoevaluacion',
        'weight' => '6',
        'children' => array(
            0 => 'field_status_autoevaluacion',
        ),
        'format_type' => 'tab',
        'format_settings' => array(
            'formatter' => 'closed',
            'instance_settings' => array(
                'description' => '',
                'classes' => 'group-meta-status-auto field-group-tab',
                'required_fields' => 1,
                'id' => '',
            ),
        ),
    );
    $field_groups['group_meta_status_auto|node|meta|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Agregar Miembros Comités');
  t('Status autoevaluacion');

  return $field_groups;
}
