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
  $field_group->identifier = 'group_meta_asesorias|node|evaluacion_de_metas|form';
  $field_group->group_name = 'group_meta_asesorias';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evaluacion_de_metas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Asesorias',
    'weight' => '13',
    'children' => array(
      0 => 'field_su_org_requiere_asesoria',
      1 => 'field_organizacion_capacitadora',
      2 => 'field_recibio_asesoria_meta',
      3 => 'field_tema_necesidad_meta',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta-asesorias field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_meta_asesorias|node|evaluacion_de_metas|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_avance|node|evaluacion_de_metas|form';
  $field_group->group_name = 'group_meta_avance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evaluacion_de_metas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Avance',
    'weight' => '4',
    'children' => array(
      0 => 'field_porcentaje_avance',
      1 => 'field_porcentaje_avance_coment',
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
  $field_groups['group_meta_avance|node|evaluacion_de_metas|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_estado|node|evaluacion_de_metas|form';
  $field_group->group_name = 'group_meta_estado';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evaluacion_de_metas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Estado',
    'weight' => '19',
    'children' => array(
      0 => 'field_estado',
      1 => 'field_observacion_del_analista',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta-estado field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_meta_estado|node|evaluacion_de_metas|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_obsevaciones|node|evaluacion_de_metas|form';
  $field_group->group_name = 'group_meta_obsevaciones';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'evaluacion_de_metas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Observaciones',
    'weight' => '10',
    'children' => array(
      0 => 'field_obstaculo',
      1 => 'field_aspecto_positivo',
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
  $field_groups['group_meta_obsevaciones|node|evaluacion_de_metas|form'] = $field_group;

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
  t('Asesorias');
  t('Avance');
  t('Estado');
  t('Observaciones');
  t('Vigencia');

  return $field_groups;
}
