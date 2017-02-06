<?php
/**
 * @file
 * feature_sngr_vistas_de_compromisos_de_gesti_n.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_sngr_vistas_de_compromisos_de_gesti_n_field_group_info() {
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
    'label' => 'Acciones',
    'weight' => '0',
    'children' => array(
      0 => 'field_meta',
      1 => 'group_action_information',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Acciones',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'action-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_acciones|field_collection_item|field_accion_collect|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_action_information|field_collection_item|field_accion_collect|form';
  $field_group->group_name = 'group_action_information';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_accion_collect';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_acciones';
  $field_group->data = array(
    'label' => 'Information',
    'weight' => '6',
    'children' => array(
      0 => 'field_codigo_accion_estrategica',
      1 => 'field_descripcion_accion',
      2 => 'field_nombre_manual',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-action-information field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_action_information|field_collection_item|field_accion_collect|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_compromiso_h_tab|node|compromiso_de_gestion|form';
  $field_group->group_name = 'group_compromiso_h_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'compromiso_de_gestion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Horizontal Tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_compromiso_info_tab',
      1 => 'group_compromiso_items_tab',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-compromiso-h-tab field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_compromiso_h_tab|node|compromiso_de_gestion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_compromiso_info_tab|node|compromiso_de_gestion|form';
  $field_group->group_name = 'group_compromiso_info_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'compromiso_de_gestion';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_compromiso_h_tab';
  $field_group->data = array(
    'label' => 'Información Básica',
    'weight' => '7',
    'children' => array(
      0 => 'field_estado',
      1 => 'field_accion_a_seguir',
      2 => 'field_id_compromiso',
      3 => 'field_accion_ejecutar',
      4 => 'field_institucion',
      5 => 'field_notificar_analista',
      6 => 'field_notificar_institucional',
      7 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-compromiso-info-tab field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_compromiso_info_tab|node|compromiso_de_gestion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_compromiso_items_tab|node|compromiso_de_gestion|form';
  $field_group->group_name = 'group_compromiso_items_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'compromiso_de_gestion';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_compromiso_h_tab';
  $field_group->data = array(
    'label' => 'Items de Compromiso',
    'weight' => '8',
    'children' => array(
      0 => 'field_item_compromiso',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Items de Compromiso',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-compromiso-items-tab field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_compromiso_items_tab|node|compromiso_de_gestion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item_v_tab|field_collection_item|field_item_compromiso|form';
  $field_group->group_name = 'group_muy_loco';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_item_compromiso';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_items_v_tabs';
  $field_group->data = array(
    'label' => 'Item V tab',
    'weight' => '2',
    'children' => array(
      0 => 'field_accion_collect',
      1 => 'field_codigo_ambito',
      2 => 'field_codigo_eje',
      3 => 'field_codigo_lineamiento',
      4 => 'field_id_item',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-item-v-tab field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_item_v_tab|field_collection_item|field_item_compromiso|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_items_v_tabs|field_collection_item|field_item_compromiso|form';
  $field_group->group_name = 'group_items_v_tabs';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_item_compromiso';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Item V tabs',
    'weight' => '0',
    'children' => array(
      0 => 'group_muy_loco',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-items-v-tabs field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_items_v_tabs|field_collection_item|field_item_compromiso|form'] = $field_group;

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
    'label' => 'items',
    'weight' => '1',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'items',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-items field-group-fieldset item-tab',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'weight' => '5',
    'children' => array(
      0 => 'field_tema_necesidad_meta',
      1 => 'field_su_org_requiere_asesoria',
      2 => 'field_recibio_asesoria_meta',
      3 => 'field_organizacion_capacitadora',
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
    'weight' => '3',
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
    'weight' => '7',
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
    'weight' => '4',
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
    'weight' => '8',
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
    'weight' => '3',
    'children' => array(
      0 => 'field_anno_ini_meta',
      1 => 'field_anno_fin_meta',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_periodo|node|meta|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Acciones');
  t('Asesorías');
  t('Avance');
  t('Estado');
  t('Horizontal Tabs');
  t('Información Básica');
  t('Information');
  t('Item V tab');
  t('Item V tabs');
  t('Items de Compromiso');
  t('Observaciones');
  t('Periodo');
  t('Productos');
  t('items');

  return $field_groups;
}
