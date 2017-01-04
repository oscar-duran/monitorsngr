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
  $field_group->identifier = 'group_afectaccion|paragraphs_item|pge_insumos_alcantarillas_vados|form';
  $field_group->group_name = 'group_afectaccion';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_alcantarillas_vados';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Afectación',
    'weight' => '11',
    'children' => array(
      0 => 'field_naturaleza_dannos',
      1 => 'field_monto_estimado_perdidas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Afectación',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-afectaccion field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_afectaccion|paragraphs_item|pge_insumos_alcantarillas_vados|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_afectacion|paragraphs_item|pge_insumos_agro_sub_agricola|form';
  $field_group->group_name = 'group_afectacion';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_agro_sub_agricola';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Afectacción',
    'weight' => '6',
    'children' => array(
      0 => 'field_monto_estimado_perdidas',
      1 => 'field_numero_fincas_productores',
      2 => 'field_afecta_actividad_productos',
      3 => 'field_insumos',
      4 => 'field_naturaleza_dannos',
      5 => 'field_cantidades_estimadas_peso',
      6 => 'field_infraestructura_agricola',
      7 => 'field_area_afectada',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-afectacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_afectacion|paragraphs_item|pge_insumos_agro_sub_agricola|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_afectacion|paragraphs_item|pge_insumos_agro_sub_pecuario|form';
  $field_group->group_name = 'group_afectacion';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_agro_sub_pecuario';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Afectación',
    'weight' => '2',
    'children' => array(
      0 => 'field_afecta_actividad_productos',
      1 => 'field_numero_fincas_productores',
      2 => 'field_cantidad_numero_animales',
      3 => 'field_naturaleza_dannos',
      4 => 'field_monto_estimado_perdidas',
      5 => 'field_insumos',
      6 => 'field_area_afectada',
      7 => 'field_infraestructura_pecuaria',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Afectación',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-afectacion field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_afectacion|paragraphs_item|pge_insumos_agro_sub_pecuario|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_afectacion|paragraphs_item|pge_insumos_danno_ambiental|form';
  $field_group->group_name = 'group_afectacion';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_danno_ambiental';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Afectacción',
    'weight' => '10',
    'children' => array(
      0 => 'field_monto_estimado_perdidas',
      1 => 'field_naturaleza_dannos',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-afectacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_afectacion|paragraphs_item|pge_insumos_danno_ambiental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_afectacion|paragraphs_item|pge_insumos_edificios_publicos|form';
  $field_group->group_name = 'group_afectacion';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_edificios_publicos';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Afectacción',
    'weight' => '4',
    'children' => array(
      0 => 'field_nivel_dannos',
      1 => 'field_naturaleza_dannos',
      2 => 'field_monto_estimado_perdidas',
      3 => 'field_documento_referencia',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-afectacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_afectacion|paragraphs_item|pge_insumos_edificios_publicos|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_afectacion|paragraphs_item|pge_insumos_obras_correctivas|form';
  $field_group->group_name = 'group_afectacion';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_obras_correctivas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Afectacción',
    'weight' => '4',
    'children' => array(
      0 => 'field_naturaleza_dannos',
      1 => 'field_monto_estimado_perdidas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-afectacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_afectacion|paragraphs_item|pge_insumos_obras_correctivas|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_afectacion|paragraphs_item|pge_insumos_puentes|form';
  $field_group->group_name = 'group_afectacion';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_puentes';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Afectacción',
    'weight' => '2',
    'children' => array(
      0 => 'field_naturaleza_dannos',
      1 => 'field_monto_estimado_perdidas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-afectacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_afectacion|paragraphs_item|pge_insumos_puentes|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_afectacion|paragraphs_item|pge_insumos_rios_quebradas|form';
  $field_group->group_name = 'group_afectacion';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_rios_quebradas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Afectacción',
    'weight' => '2',
    'children' => array(
      0 => 'field_naturaleza_dannos',
      1 => 'field_monto_estimado_perdidas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-afectacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_afectacion|paragraphs_item|pge_insumos_rios_quebradas|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_caracteristicas_edificio|paragraphs_item|pge_insumos_edificios_publicos|form';
  $field_group->group_name = 'group_caracteristicas_edificio';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_edificios_publicos';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Características del edificio',
    'weight' => '3',
    'children' => array(
      0 => 'field_metros_cuadrados_constru',
      1 => 'field_material_predominante',
      2 => 'field_tenencia',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-caracteristicas-edificio field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_caracteristicas_edificio|paragraphs_item|pge_insumos_edificios_publicos|form'] = $field_group;

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
  $field_group->identifier = 'group_movilizados|paragraphs_item|pge_insumos_poblacion|form';
  $field_group->group_name = 'group_movilizados';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_poblacion';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_personas_afectadas';
  $field_group->data = array(
    'label' => 'Movilizados',
    'weight' => '9',
    'children' => array(
      0 => 'field_numero_personas',
      1 => 'field_numero_familias',
      2 => 'field_lugar_movilizacion',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-movilizados field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_movilizados|paragraphs_item|pge_insumos_poblacion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personas_afectadas|paragraphs_item|pge_insumos_poblacion|form';
  $field_group->group_name = 'group_personas_afectadas';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_poblacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personas afectadas',
    'weight' => '3',
    'children' => array(
      0 => 'group_movilizados',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-personas-afectadas field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_personas_afectadas|paragraphs_item|pge_insumos_poblacion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_propuesta|paragraphs_item|pge_insumos_agro_sub_agricola|form';
  $field_group->group_name = 'group_propuesta';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_agro_sub_agricola';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Propuesta',
    'weight' => '14',
    'children' => array(
      0 => 'field_fase',
      1 => 'field_nivel_prioridad',
      2 => 'field_programas_proyectos_accion',
      3 => 'field_instituciones_involucradas',
      4 => 'field_plazo',
      5 => 'field_monto_estimado',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-propuesta field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_propuesta|paragraphs_item|pge_insumos_agro_sub_agricola|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_propuesta|paragraphs_item|pge_insumos_agro_sub_pecuario|form';
  $field_group->group_name = 'group_propuesta';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_agro_sub_pecuario';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Propuesta',
    'weight' => '3',
    'children' => array(
      0 => 'field_nivel_prioridad',
      1 => 'field_plazo',
      2 => 'field_programas_proyectos_accion',
      3 => 'field_monto_estimado',
      4 => 'field_fase',
      5 => 'field_instituciones_involucradas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-propuesta field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_propuesta|paragraphs_item|pge_insumos_agro_sub_pecuario|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_propuesta|paragraphs_item|pge_insumos_alcantarillas_vados|form';
  $field_group->group_name = 'group_propuesta';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_alcantarillas_vados';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Propuesta',
    'weight' => '15',
    'children' => array(
      0 => 'field_nivel_prioridad',
      1 => 'field_descripcion_obras_reque',
      2 => 'field_monto_estimado',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-propuesta field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_propuesta|paragraphs_item|pge_insumos_alcantarillas_vados|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_propuesta|paragraphs_item|pge_insumos_danno_ambiental|form';
  $field_group->group_name = 'group_propuesta';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_danno_ambiental';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Propuesta',
    'weight' => '10',
    'children' => array(
      0 => 'field_nivel_prioridad',
      1 => 'field_descripcion_obras_reque',
      2 => 'field_monto_estimado',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-propuesta field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_propuesta|paragraphs_item|pge_insumos_danno_ambiental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_propuesta|paragraphs_item|pge_insumos_edificios_publicos|form';
  $field_group->group_name = 'group_propuesta';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_edificios_publicos';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Propuesta',
    'weight' => '5',
    'children' => array(
      0 => 'field_solucion',
      1 => 'field_nivel_prioridad',
      2 => 'field_monto_estimado',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-propuesta field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_propuesta|paragraphs_item|pge_insumos_edificios_publicos|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_propuesta|paragraphs_item|pge_insumos_obras_correctivas|form';
  $field_group->group_name = 'group_propuesta';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_obras_correctivas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Propuesta',
    'weight' => '5',
    'children' => array(
      0 => 'field_descripcion_obras_reque',
      1 => 'field_monto_estimado',
      2 => 'field_nivel_prioridad',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-propuesta field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_propuesta|paragraphs_item|pge_insumos_obras_correctivas|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_propuesta|paragraphs_item|pge_insumos_puentes|form';
  $field_group->group_name = 'group_propuesta';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_puentes';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Propuesta',
    'weight' => '4',
    'children' => array(
      0 => 'field_descripcion_obras_reque',
      1 => 'field_nivel_prioridad',
      2 => 'field_monto_estimado',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-propuesta field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_propuesta|paragraphs_item|pge_insumos_puentes|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_propuesta|paragraphs_item|pge_insumos_rios_quebradas|form';
  $field_group->group_name = 'group_propuesta';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_rios_quebradas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Propuesta',
    'weight' => '3',
    'children' => array(
      0 => 'field_nivel_prioridad',
      1 => 'field_descripcion_obras_reque',
      2 => 'field_monto_estimado',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-propuesta field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_propuesta|paragraphs_item|pge_insumos_rios_quebradas|form'] = $field_group;

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
  $field_group->identifier = 'group_responsable|node|pge_formulario_insumos|form';
  $field_group->group_name = 'group_responsable';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'pge_formulario_insumos';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Funcionario Responsable',
    'weight' => '4',
    'children' => array(
      0 => 'field_cargo_fun_responsable',
      1 => 'field_funcionario_responsable',
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
  $field_groups['group_responsable|node|pge_formulario_insumos|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_total|paragraphs_item|pge_insumos_poblacion|form';
  $field_group->group_name = 'group_total';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_poblacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Total de personas',
    'weight' => '5',
    'children' => array(
      0 => 'field_total_numero_personas',
      1 => 'field_total_numero_familias',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-total field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_total|paragraphs_item|pge_insumos_poblacion|form'] = $field_group;

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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ubicacion|paragraphs_item|pge_insumos_alcantarillas_vados|form';
  $field_group->group_name = 'group_ubicacion';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_alcantarillas_vados';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ubicación',
    'weight' => '5',
    'children' => array(
      0 => 'field_ruta_descripcion_tramo',
      1 => 'field_poblado',
      2 => 'field_nombre_cauce',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ubicacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ubicacion|paragraphs_item|pge_insumos_alcantarillas_vados|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ubicacion|paragraphs_item|pge_insumos_danno_ambiental|form';
  $field_group->group_name = 'group_ubicacion';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_danno_ambiental';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ubicación',
    'weight' => '5',
    'children' => array(
      0 => 'field_poblado',
      1 => 'field_nombre_cuencas_subcuencas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ubicacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ubicacion|paragraphs_item|pge_insumos_danno_ambiental|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ubicacion|paragraphs_item|pge_insumos_edificios_publicos|form';
  $field_group->group_name = 'group_ubicacion';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_edificios_publicos';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ubicación',
    'weight' => '1',
    'children' => array(
      0 => 'field_poblado',
      1 => 'field_direccion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ubicacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ubicacion|paragraphs_item|pge_insumos_edificios_publicos|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ubicacion|paragraphs_item|pge_insumos_obras_correctivas|form';
  $field_group->group_name = 'group_ubicacion';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_obras_correctivas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ubicación',
    'weight' => '1',
    'children' => array(
      0 => 'field_poblado',
      1 => 'field_nombre_cauce',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ubicacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ubicacion|paragraphs_item|pge_insumos_obras_correctivas|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ubicacion|paragraphs_item|pge_insumos_poblacion|form';
  $field_group->group_name = 'group_ubicacion';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_poblacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ubicación',
    'weight' => '1',
    'children' => array(
      0 => 'field_poblado',
      1 => 'field_barrio_localidad',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ubicacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ubicacion|paragraphs_item|pge_insumos_poblacion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ubicacion|paragraphs_item|pge_insumos_puentes|form';
  $field_group->group_name = 'group_ubicacion';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_puentes';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ubicación',
    'weight' => '1',
    'children' => array(
      0 => 'field_extension',
      1 => 'field_descripcion_tramo',
      2 => 'field_poblado',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ubicacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ubicacion|paragraphs_item|pge_insumos_puentes|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ubicacion|paragraphs_item|pge_insumos_rios_quebradas|form';
  $field_group->group_name = 'group_ubicacion';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'pge_insumos_rios_quebradas';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ubicación',
    'weight' => '1',
    'children' => array(
      0 => 'field_poblado',
      1 => 'field_extension',
      2 => 'field_nombre_cauce',
      3 => 'field_componente_afectado',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ubicacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ubicacion|paragraphs_item|pge_insumos_rios_quebradas|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Afectacción');
  t('Afectación');
  t('Características del edificio');
  t('Cobertura');
  t('Competencias');
  t('Funcionario Responsable');
  t('Movilizados');
  t('Personas afectadas');
  t('Propuesta');
  t('Total de personas');
  t('Ubicación');
  t('Ubicación ');

  return $field_groups;
}
