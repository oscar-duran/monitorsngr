<?php
/**
 * @file
 * compromiso_de_geston_edit_views.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function compromiso_de_geston_edit_views_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_acciones|field_collection_item|field_accion_collect|form';
  $field_group->group_name = 'group_acciones';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_accion_collect';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Acciones Estratégicas',
    'weight' => '0',
    'children' => array(
      0 => 'field_meta',
      1 => 'field_codigo_accion_estrategica',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Acciones Estratégicas',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'action-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_acciones|field_collection_item|field_accion_collect|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_items|field_collection_item|field_item_compromiso|form';
  $field_group->group_name = 'group_items';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_item_compromiso';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Item',
    'weight' => '1',
    'children' => array(
      0 => 'field_id_item',
      1 => 'field_codigo_eje',
      2 => 'field_codigo_ambito',
      3 => 'field_codigo_lineamiento',
      4 => 'field_accion_collect',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Item',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'item-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_items|field_collection_item|field_item_compromiso|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_asesorias|node|meta|form';
  $field_group->group_name = 'group_meta_asesorias';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'meta';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Asesorías',
    'weight' => '10',
    'children' => array(
      0 => 'field_organizacion_capacitadora',
      1 => 'field_su_org_requiere_asesoria',
      2 => 'field_recibio_asesoria_meta',
      3 => 'field_tema_necesidad_meta',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta-asesorias field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_meta_asesorias|node|meta|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_avance|node|meta|form';
  $field_group->group_name = 'group_meta_avance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'meta';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Avance',
    'weight' => '8',
    'children' => array(
      0 => 'field_porcentaje_avance',
      1 => 'field_porcentaje_avance_coment',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta-avance field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_meta_avance|node|meta|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_estado|node|meta|form';
  $field_group->group_name = 'group_meta_estado';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'meta';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Estado',
    'weight' => '11',
    'children' => array(
      0 => 'field_estado',
      1 => 'field_observacion_del_analista',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta-estado field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_meta_estado|node|meta|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_obsevaciones|node|meta|form';
  $field_group->group_name = 'group_meta_obsevaciones';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'meta';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Observaciones',
    'weight' => '9',
    'children' => array(
      0 => 'field_obstaculo',
      1 => 'field_aspecto_positivo',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta-obsevaciones field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_meta_obsevaciones|node|meta|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_productos|node|meta|form';
  $field_group->group_name = 'group_meta_productos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'meta';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Productos',
    'weight' => '12',
    'children' => array(
      0 => 'field_producto',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta-productos field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_meta_productos|node|meta|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_periodo|node|meta|form';
  $field_group->group_name = 'group_periodo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'meta';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Periodo',
    'weight' => '2',
    'children' => array(
      0 => 'field_anno_ini_meta',
      1 => 'field_anno_fin_meta',
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
  $field_groups['group_periodo|node|meta|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Acciones Estratégicas');
  t('Asesorías');
  t('Avance');
  t('Estado');
  t('Item');
  t('Observaciones');
  t('Periodo');
  t('Productos');

  return $field_groups;
}
