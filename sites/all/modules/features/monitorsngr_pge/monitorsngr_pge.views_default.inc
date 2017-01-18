<?php
/**
 * @file
 * monitorsngr_pge.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function monitorsngr_pge_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'compromisos_pge';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Compromisos PGE';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'peg_ficha_tecnica_compromiso' => 'peg_ficha_tecnica_compromiso',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Compromisos';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['relationships']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Sector estructural afectado */
  $handler->display->display_options['fields']['field_sector_estructural_afectad']['id'] = 'field_sector_estructural_afectad';
  $handler->display->display_options['fields']['field_sector_estructural_afectad']['table'] = 'field_data_field_sector_estructural_afectad';
  $handler->display->display_options['fields']['field_sector_estructural_afectad']['field'] = 'field_sector_estructural_afectad';
  $handler->display->display_options['fields']['field_sector_estructural_afectad']['label'] = 'Sector';
  $handler->display->display_options['fields']['field_sector_estructural_afectad']['type'] = 'taxonomy_term_reference_plain';
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['field_nombre']['id'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['fields']['field_nombre']['field'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_nombre']['label'] = 'Nombre del informante';
  $handler->display->display_options['fields']['field_nombre']['element_label_colon'] = FALSE;
  /* Campo: Campo: Institución  */
  $handler->display->display_options['fields']['field_institucion']['id'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['fields']['field_institucion']['field'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_institucion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institucion']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contenido: Decreto de Emergencia (field_decreto_emergencia) */
  $handler->display->display_options['arguments']['field_decreto_emergencia_target_id']['id'] = 'field_decreto_emergencia_target_id';
  $handler->display->display_options['arguments']['field_decreto_emergencia_target_id']['table'] = 'field_data_field_decreto_emergencia';
  $handler->display->display_options['arguments']['field_decreto_emergencia_target_id']['field'] = 'field_decreto_emergencia_target_id';
  $handler->display->display_options['arguments']['field_decreto_emergencia_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_decreto_emergencia_target_id']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['field_decreto_emergencia_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_decreto_emergencia_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_decreto_emergencia_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_decreto_emergencia_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_decreto_emergencia_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_decreto_emergencia_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_decreto_emergencia_target_id']['validate_options']['types'] = array(
    'decreto_de_emergencia' => 'decreto_de_emergencia',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'peg_ficha_tecnica_compromiso' => 'peg_ficha_tecnica_compromiso',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Nombre Compromiso */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['ui_name'] = 'Nombre Compromiso';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Nombre del Compromiso';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: Contenido: Sector (field_sector_estructural_afectad) */
  $handler->display->display_options['filters']['field_sector_estructural_afectad_tid']['id'] = 'field_sector_estructural_afectad_tid';
  $handler->display->display_options['filters']['field_sector_estructural_afectad_tid']['table'] = 'field_data_field_sector_estructural_afectad';
  $handler->display->display_options['filters']['field_sector_estructural_afectad_tid']['field'] = 'field_sector_estructural_afectad_tid';
  $handler->display->display_options['filters']['field_sector_estructural_afectad_tid']['value'] = '';
  $handler->display->display_options['filters']['field_sector_estructural_afectad_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_estructural_afectad_tid']['expose']['operator_id'] = 'field_sector_estructural_afectad_tid_op';
  $handler->display->display_options['filters']['field_sector_estructural_afectad_tid']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_estructural_afectad_tid']['expose']['operator'] = 'field_sector_estructural_afectad_tid_op';
  $handler->display->display_options['filters']['field_sector_estructural_afectad_tid']['expose']['identifier'] = 'field_sector_estructural_afectad_tid';
  $handler->display->display_options['filters']['field_sector_estructural_afectad_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sector_estructural_afectad_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_sector_estructural_afectad_tid']['vocabulary'] = 'sector_estructural_afectado';
  /* Filter criterion: institución informante */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['filters']['title_1']['ui_name'] = 'institución informante';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Institución informante';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  $handler->display->display_options['argument_input'] = array(
    'field_decreto_emergencia_target_id' => array(
      'type' => 'user',
      'context' => 'node_edit_form.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: Decreto de Emergencia (field_decreto_emergencia)',
    ),
  );
  $translatables['compromisos_pge'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Todo'),
    t('Content pane'),
    t('Compromisos'),
    t('author'),
    t('Contenido entity referenced from field_institucion'),
    t('Sector'),
    t('Nombre del informante'),
    t('Institución '),
    t('Nombre del Compromiso'),
    t('Institución informante'),
    t('View panes'),
  );
  $export['compromisos_pge'] = $view;

  $view = new view();
  $view->name = 'formularios_insumos_pge';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Formularios insumos pge';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '2';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_decreto_emergencia_target_id']['id'] = 'field_decreto_emergencia_target_id';
  $handler->display->display_options['relationships']['field_decreto_emergencia_target_id']['table'] = 'field_data_field_decreto_emergencia';
  $handler->display->display_options['relationships']['field_decreto_emergencia_target_id']['field'] = 'field_decreto_emergencia_target_id';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Tipo de Formulario */
  $handler->display->display_options['fields']['field_tipo_formulario']['id'] = 'field_tipo_formulario';
  $handler->display->display_options['fields']['field_tipo_formulario']['table'] = 'field_data_field_tipo_formulario';
  $handler->display->display_options['fields']['field_tipo_formulario']['field'] = 'field_tipo_formulario';
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['field_nombre']['id'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['fields']['field_nombre']['field'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_nombre']['label'] = 'Nombre del informante';
  /* Campo: Contenido: Nombre del funcionario responsable */
  $handler->display->display_options['fields']['field_funcionario_responsable']['id'] = 'field_funcionario_responsable';
  $handler->display->display_options['fields']['field_funcionario_responsable']['table'] = 'field_data_field_funcionario_responsable';
  $handler->display->display_options['fields']['field_funcionario_responsable']['field'] = 'field_funcionario_responsable';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pge_formulario_insumos' => 'pge_formulario_insumos',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Nombre Form */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['ui_name'] = 'Nombre Form';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Nombre de Formulario';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: Nombre institución */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_institucion_target_id';
  $handler->display->display_options['filters']['title']['ui_name'] = 'Nombre institución';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Institución';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );
  /* Filter criterion: Contenido: Tipo de Formulario (field_tipo_formulario) */
  $handler->display->display_options['filters']['field_tipo_formulario_value']['id'] = 'field_tipo_formulario_value';
  $handler->display->display_options['filters']['field_tipo_formulario_value']['table'] = 'field_data_field_tipo_formulario';
  $handler->display->display_options['filters']['field_tipo_formulario_value']['field'] = 'field_tipo_formulario_value';
  $handler->display->display_options['filters']['field_tipo_formulario_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tipo_formulario_value']['expose']['operator_id'] = 'field_tipo_formulario_value_op';
  $handler->display->display_options['filters']['field_tipo_formulario_value']['expose']['label'] = 'Tipo de Formulario';
  $handler->display->display_options['filters']['field_tipo_formulario_value']['expose']['operator'] = 'field_tipo_formulario_value_op';
  $handler->display->display_options['filters']['field_tipo_formulario_value']['expose']['identifier'] = 'field_tipo_formulario_value';
  $handler->display->display_options['filters']['field_tipo_formulario_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tipo_formulario_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Formulario de Insumos';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_decreto_emergencia_target_id']['id'] = 'field_decreto_emergencia_target_id';
  $handler->display->display_options['relationships']['field_decreto_emergencia_target_id']['table'] = 'field_data_field_decreto_emergencia';
  $handler->display->display_options['relationships']['field_decreto_emergencia_target_id']['field'] = 'field_decreto_emergencia_target_id';
  $handler->display->display_options['relationships']['field_decreto_emergencia_target_id']['required'] = TRUE;
  /* Relationship: Contenido: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_institucion_target_id']['id'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['relationships']['field_institucion_target_id']['field'] = 'field_institucion_target_id';
  $handler->display->display_options['relationships']['field_institucion_target_id']['relationship'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Campo: Contenido: Tipo de Formulario */
  $handler->display->display_options['fields']['field_tipo_formulario']['id'] = 'field_tipo_formulario';
  $handler->display->display_options['fields']['field_tipo_formulario']['table'] = 'field_data_field_tipo_formulario';
  $handler->display->display_options['fields']['field_tipo_formulario']['field'] = 'field_tipo_formulario';
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Informante';
  /* Campo: Campo: Institución  */
  $handler->display->display_options['fields']['field_institucion']['id'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['table'] = 'field_data_field_institucion';
  $handler->display->display_options['fields']['field_institucion']['field'] = 'field_institucion';
  $handler->display->display_options['fields']['field_institucion']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_institucion']['label'] = 'Institución del informante';
  $handler->display->display_options['fields']['field_institucion']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Contenido: Nombre del funcionario responsable */
  $handler->display->display_options['fields']['field_funcionario_responsable']['id'] = 'field_funcionario_responsable';
  $handler->display->display_options['fields']['field_funcionario_responsable']['table'] = 'field_data_field_funcionario_responsable';
  $handler->display->display_options['fields']['field_funcionario_responsable']['field'] = 'field_funcionario_responsable';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_decreto_emergencia_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'decreto_de_emergencia' => 'decreto_de_emergencia',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: Nid',
    ),
  );
  $translatables['formularios_insumos_pge'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Contenido entity referenced from field_decreto_emergencia'),
    t('Tipo de Formulario'),
    t('Nombre del informante'),
    t('Nombre del funcionario responsable'),
    t('Todo'),
    t('Nombre de Formulario'),
    t('Institución'),
    t('Content pane'),
    t('Formulario de Insumos'),
    t('author'),
    t('Contenido entity referenced from field_institucion'),
    t('Informante'),
    t('Institución del informante'),
    t('View panes'),
  );
  $export['formularios_insumos_pge'] = $view;

  $view = new view();
  $view->name = 'insumos_pge';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'paragraphs_item';
  $view->human_name = 'insumos pge';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Insumos PGE';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_ubicaci_n_geogr_fica' => 'field_ubicaci_n_geogr_fica',
    'field_cantidad_alcantarillas' => 'field_cantidad_alcantarillas',
    'field_cantidad_numero_animales' => 'field_cantidad_numero_animales',
    'field_cantidades_estimadas_peso' => 'field_cantidades_estimadas_peso',
    'field_caracteristicas_alcanta' => 'field_caracteristicas_alcanta',
    'field_descripcion_obras_reque' => 'field_descripcion_obras_reque',
    'field_naturaleza_dannos_1' => 'field_naturaleza_dannos_1',
    'field_descripcion_tramo' => 'field_descripcion_tramo',
    'field_direccion' => 'field_direccion',
    'field_documento_referencia' => 'field_documento_referencia',
    'field_extension' => 'field_extension',
    'field_fase' => 'field_fase',
    'field_fuente_presa_naciente_pozo' => 'field_fuente_presa_naciente_pozo',
    'field_infraestructura_agricola' => 'field_infraestructura_agricola',
    'field_infraestructura_pecuaria' => 'field_infraestructura_pecuaria',
    'field_instituciones_involucradas' => 'field_instituciones_involucradas',
    'field_insumos' => 'field_insumos',
    'field_inversion_estimada' => 'field_inversion_estimada',
    'field_lugar_movilizacion' => 'field_lugar_movilizacion',
    'field_material_predominante' => 'field_material_predominante',
    'field_metros_cuadrados_constru' => 'field_metros_cuadrados_constru',
    'field_monto_estimado' => 'field_monto_estimado',
    'field_monto_estimado_perdidas' => 'field_monto_estimado_perdidas',
    'field_naturaleza_uso' => 'field_naturaleza_uso',
    'field_nivel_dannos' => 'field_nivel_dannos',
    'field_nivel_prioridad' => 'field_nivel_prioridad',
    'field_ruta_descripcion_tramo' => 'field_ruta_descripcion_tramo',
    'field_nombre_cuencas_subcuencas' => 'field_nombre_cuencas_subcuencas',
    'field_nombre_cauce' => 'field_nombre_cauce',
    'field_nombre_jefe_familia' => 'field_nombre_jefe_familia',
    'field_numero_cedula' => 'field_numero_cedula',
    'field_total_numero_familias' => 'field_total_numero_familias',
    'field_numero_fincas_productores' => 'field_numero_fincas_productores',
    'field_numero_integrantes' => 'field_numero_integrantes',
    'field_numero_personas' => 'field_numero_personas',
    'field_componente_afectado' => 'field_componente_afectado',
    'field_periodo_ejecucion' => 'field_periodo_ejecucion',
    'field_plazo' => 'field_plazo',
    'field_poblado' => 'field_poblado',
    'field_programas_proyectos_accion' => 'field_programas_proyectos_accion',
    'field_solucion' => 'field_solucion',
    'field_telefono_jefe_familia' => 'field_telefono_jefe_familia',
    'field_tenencia' => 'field_tenencia',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_ubicaci_n_geogr_fica' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_cantidad_alcantarillas' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_cantidad_numero_animales' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_cantidades_estimadas_peso' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_caracteristicas_alcanta' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_descripcion_obras_reque' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_naturaleza_dannos_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_descripcion_tramo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_direccion' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_documento_referencia' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_extension' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_fase' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_fuente_presa_naciente_pozo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_infraestructura_agricola' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_infraestructura_pecuaria' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_instituciones_involucradas' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_insumos' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_inversion_estimada' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_lugar_movilizacion' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_material_predominante' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_metros_cuadrados_constru' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_monto_estimado' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_monto_estimado_perdidas' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_naturaleza_uso' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_nivel_dannos' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_nivel_prioridad' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ruta_descripcion_tramo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_nombre_cuencas_subcuencas' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_nombre_cauce' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_nombre_jefe_familia' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_numero_cedula' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_total_numero_familias' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_numero_fincas_productores' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_numero_integrantes' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_numero_personas' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_componente_afectado' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_periodo_ejecucion' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_plazo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_poblado' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_programas_proyectos_accion' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_solucion' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_telefono_jefe_familia' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_tenencia' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Relationship: Paragraphs item: Entity with the Formulario (field_formulario_insumos_pge) */
  $handler->display->display_options['relationships']['field_formulario_insumos_pge_node']['id'] = 'field_formulario_insumos_pge_node';
  $handler->display->display_options['relationships']['field_formulario_insumos_pge_node']['table'] = 'paragraphs_item';
  $handler->display->display_options['relationships']['field_formulario_insumos_pge_node']['field'] = 'field_formulario_insumos_pge_node';
  $handler->display->display_options['relationships']['field_formulario_insumos_pge_node']['required'] = TRUE;
  /* Campo: Campo: Provincia, Cantón, Distrito */
  $handler->display->display_options['fields']['field_ubicaci_n_geogr_fica']['id'] = 'field_ubicaci_n_geogr_fica';
  $handler->display->display_options['fields']['field_ubicaci_n_geogr_fica']['table'] = 'field_data_field_ubicaci_n_geogr_fica';
  $handler->display->display_options['fields']['field_ubicaci_n_geogr_fica']['field'] = 'field_ubicaci_n_geogr_fica';
  $handler->display->display_options['fields']['field_ubicaci_n_geogr_fica']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ubicaci_n_geogr_fica']['delta_offset'] = '0';
  /* Campo: Paragraphs item: Cantidad */
  $handler->display->display_options['fields']['field_cantidad_alcantarillas']['id'] = 'field_cantidad_alcantarillas';
  $handler->display->display_options['fields']['field_cantidad_alcantarillas']['table'] = 'field_data_field_cantidad_alcantarillas';
  $handler->display->display_options['fields']['field_cantidad_alcantarillas']['field'] = 'field_cantidad_alcantarillas';
  $handler->display->display_options['fields']['field_cantidad_alcantarillas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Campo: Paragraphs item: Cantidad (número de animales) */
  $handler->display->display_options['fields']['field_cantidad_numero_animales']['id'] = 'field_cantidad_numero_animales';
  $handler->display->display_options['fields']['field_cantidad_numero_animales']['table'] = 'field_data_field_cantidad_numero_animales';
  $handler->display->display_options['fields']['field_cantidad_numero_animales']['field'] = 'field_cantidad_numero_animales';
  $handler->display->display_options['fields']['field_cantidad_numero_animales']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Campo: Paragraphs item: Cantidades Estimadas (Peso) */
  $handler->display->display_options['fields']['field_cantidades_estimadas_peso']['id'] = 'field_cantidades_estimadas_peso';
  $handler->display->display_options['fields']['field_cantidades_estimadas_peso']['table'] = 'field_data_field_cantidades_estimadas_peso';
  $handler->display->display_options['fields']['field_cantidades_estimadas_peso']['field'] = 'field_cantidades_estimadas_peso';
  $handler->display->display_options['fields']['field_cantidades_estimadas_peso']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Paragraphs item: Características (alcantarillas o vados) */
  $handler->display->display_options['fields']['field_caracteristicas_alcanta']['id'] = 'field_caracteristicas_alcanta';
  $handler->display->display_options['fields']['field_caracteristicas_alcanta']['table'] = 'field_data_field_caracteristicas_alcanta';
  $handler->display->display_options['fields']['field_caracteristicas_alcanta']['field'] = 'field_caracteristicas_alcanta';
  /* Campo: Paragraphs item: Descripción de las obras o labores requeridas */
  $handler->display->display_options['fields']['field_descripcion_obras_reque']['id'] = 'field_descripcion_obras_reque';
  $handler->display->display_options['fields']['field_descripcion_obras_reque']['table'] = 'field_data_field_descripcion_obras_reque';
  $handler->display->display_options['fields']['field_descripcion_obras_reque']['field'] = 'field_descripcion_obras_reque';
  /* Campo: Paragraphs item: Descripción de los daños */
  $handler->display->display_options['fields']['field_naturaleza_dannos_1']['id'] = 'field_naturaleza_dannos_1';
  $handler->display->display_options['fields']['field_naturaleza_dannos_1']['table'] = 'field_data_field_naturaleza_dannos';
  $handler->display->display_options['fields']['field_naturaleza_dannos_1']['field'] = 'field_naturaleza_dannos';
  /* Campo: Paragraphs item: Descripción del tramo */
  $handler->display->display_options['fields']['field_descripcion_tramo']['id'] = 'field_descripcion_tramo';
  $handler->display->display_options['fields']['field_descripcion_tramo']['table'] = 'field_data_field_descripcion_tramo';
  $handler->display->display_options['fields']['field_descripcion_tramo']['field'] = 'field_descripcion_tramo';
  /* Campo: Paragraphs item: Dirección (por puntos de referencia) */
  $handler->display->display_options['fields']['field_direccion']['id'] = 'field_direccion';
  $handler->display->display_options['fields']['field_direccion']['table'] = 'field_data_field_direccion';
  $handler->display->display_options['fields']['field_direccion']['field'] = 'field_direccion';
  /* Campo: Paragraphs item: Documento de referencia */
  $handler->display->display_options['fields']['field_documento_referencia']['id'] = 'field_documento_referencia';
  $handler->display->display_options['fields']['field_documento_referencia']['table'] = 'field_data_field_documento_referencia';
  $handler->display->display_options['fields']['field_documento_referencia']['field'] = 'field_documento_referencia';
  /* Campo: Paragraphs item: Extensión */
  $handler->display->display_options['fields']['field_extension']['id'] = 'field_extension';
  $handler->display->display_options['fields']['field_extension']['table'] = 'field_data_field_extension';
  $handler->display->display_options['fields']['field_extension']['field'] = 'field_extension';
  $handler->display->display_options['fields']['field_extension']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Paragraphs item: Fase */
  $handler->display->display_options['fields']['field_fase']['id'] = 'field_fase';
  $handler->display->display_options['fields']['field_fase']['table'] = 'field_data_field_fase';
  $handler->display->display_options['fields']['field_fase']['field'] = 'field_fase';
  /* Campo: Paragraphs item: Fuente: Presa, naciente o pozo */
  $handler->display->display_options['fields']['field_fuente_presa_naciente_pozo']['id'] = 'field_fuente_presa_naciente_pozo';
  $handler->display->display_options['fields']['field_fuente_presa_naciente_pozo']['table'] = 'field_data_field_fuente_presa_naciente_pozo';
  $handler->display->display_options['fields']['field_fuente_presa_naciente_pozo']['field'] = 'field_fuente_presa_naciente_pozo';
  /* Campo: Paragraphs item: Infraestructura agrícola */
  $handler->display->display_options['fields']['field_infraestructura_agricola']['id'] = 'field_infraestructura_agricola';
  $handler->display->display_options['fields']['field_infraestructura_agricola']['table'] = 'field_data_field_infraestructura_agricola';
  $handler->display->display_options['fields']['field_infraestructura_agricola']['field'] = 'field_infraestructura_agricola';
  /* Campo: Paragraphs item: Infraestructura pecuaria */
  $handler->display->display_options['fields']['field_infraestructura_pecuaria']['id'] = 'field_infraestructura_pecuaria';
  $handler->display->display_options['fields']['field_infraestructura_pecuaria']['table'] = 'field_data_field_infraestructura_pecuaria';
  $handler->display->display_options['fields']['field_infraestructura_pecuaria']['field'] = 'field_infraestructura_pecuaria';
  /* Campo: Paragraphs item: Instituciones involucradas */
  $handler->display->display_options['fields']['field_instituciones_involucradas']['id'] = 'field_instituciones_involucradas';
  $handler->display->display_options['fields']['field_instituciones_involucradas']['table'] = 'field_data_field_instituciones_involucradas';
  $handler->display->display_options['fields']['field_instituciones_involucradas']['field'] = 'field_instituciones_involucradas';
  /* Campo: Paragraphs item: Insumos */
  $handler->display->display_options['fields']['field_insumos']['id'] = 'field_insumos';
  $handler->display->display_options['fields']['field_insumos']['table'] = 'field_data_field_insumos';
  $handler->display->display_options['fields']['field_insumos']['field'] = 'field_insumos';
  /* Campo: Paragraphs item: Inversión Estimada */
  $handler->display->display_options['fields']['field_inversion_estimada']['id'] = 'field_inversion_estimada';
  $handler->display->display_options['fields']['field_inversion_estimada']['table'] = 'field_data_field_inversion_estimada';
  $handler->display->display_options['fields']['field_inversion_estimada']['field'] = 'field_inversion_estimada';
  $handler->display->display_options['fields']['field_inversion_estimada']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Paragraphs item: Lugar de movilización */
  $handler->display->display_options['fields']['field_lugar_movilizacion']['id'] = 'field_lugar_movilizacion';
  $handler->display->display_options['fields']['field_lugar_movilizacion']['table'] = 'field_data_field_lugar_movilizacion';
  $handler->display->display_options['fields']['field_lugar_movilizacion']['field'] = 'field_lugar_movilizacion';
  /* Campo: Paragraphs item: Material predominante */
  $handler->display->display_options['fields']['field_material_predominante']['id'] = 'field_material_predominante';
  $handler->display->display_options['fields']['field_material_predominante']['table'] = 'field_data_field_material_predominante';
  $handler->display->display_options['fields']['field_material_predominante']['field'] = 'field_material_predominante';
  /* Campo: Paragraphs item: Metros cuadrados de construcción */
  $handler->display->display_options['fields']['field_metros_cuadrados_constru']['id'] = 'field_metros_cuadrados_constru';
  $handler->display->display_options['fields']['field_metros_cuadrados_constru']['table'] = 'field_data_field_metros_cuadrados_constru';
  $handler->display->display_options['fields']['field_metros_cuadrados_constru']['field'] = 'field_metros_cuadrados_constru';
  $handler->display->display_options['fields']['field_metros_cuadrados_constru']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Paragraphs item: Monto estimado de costo de obras y labores */
  $handler->display->display_options['fields']['field_monto_estimado']['id'] = 'field_monto_estimado';
  $handler->display->display_options['fields']['field_monto_estimado']['table'] = 'field_data_field_monto_estimado';
  $handler->display->display_options['fields']['field_monto_estimado']['field'] = 'field_monto_estimado';
  $handler->display->display_options['fields']['field_monto_estimado']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Paragraphs item: Monto estimado de pérdidas */
  $handler->display->display_options['fields']['field_monto_estimado_perdidas']['id'] = 'field_monto_estimado_perdidas';
  $handler->display->display_options['fields']['field_monto_estimado_perdidas']['table'] = 'field_data_field_monto_estimado_perdidas';
  $handler->display->display_options['fields']['field_monto_estimado_perdidas']['field'] = 'field_monto_estimado_perdidas';
  $handler->display->display_options['fields']['field_monto_estimado_perdidas']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Paragraphs item: Naturaleza de uso */
  $handler->display->display_options['fields']['field_naturaleza_uso']['id'] = 'field_naturaleza_uso';
  $handler->display->display_options['fields']['field_naturaleza_uso']['table'] = 'field_data_field_naturaleza_uso';
  $handler->display->display_options['fields']['field_naturaleza_uso']['field'] = 'field_naturaleza_uso';
  /* Campo: Paragraphs item: Nivel de daños */
  $handler->display->display_options['fields']['field_nivel_dannos']['id'] = 'field_nivel_dannos';
  $handler->display->display_options['fields']['field_nivel_dannos']['table'] = 'field_data_field_nivel_dannos';
  $handler->display->display_options['fields']['field_nivel_dannos']['field'] = 'field_nivel_dannos';
  /* Campo: Paragraphs item: Nivel de Prioridad */
  $handler->display->display_options['fields']['field_nivel_prioridad']['id'] = 'field_nivel_prioridad';
  $handler->display->display_options['fields']['field_nivel_prioridad']['table'] = 'field_data_field_nivel_prioridad';
  $handler->display->display_options['fields']['field_nivel_prioridad']['field'] = 'field_nivel_prioridad';
  /* Campo: Paragraphs item: No. de ruta o descripción del tramo */
  $handler->display->display_options['fields']['field_ruta_descripcion_tramo']['id'] = 'field_ruta_descripcion_tramo';
  $handler->display->display_options['fields']['field_ruta_descripcion_tramo']['table'] = 'field_data_field_ruta_descripcion_tramo';
  $handler->display->display_options['fields']['field_ruta_descripcion_tramo']['field'] = 'field_ruta_descripcion_tramo';
  /* Campo: Paragraphs item: Nombre de cuencas o subcuencas */
  $handler->display->display_options['fields']['field_nombre_cuencas_subcuencas']['id'] = 'field_nombre_cuencas_subcuencas';
  $handler->display->display_options['fields']['field_nombre_cuencas_subcuencas']['table'] = 'field_data_field_nombre_cuencas_subcuencas';
  $handler->display->display_options['fields']['field_nombre_cuencas_subcuencas']['field'] = 'field_nombre_cuencas_subcuencas';
  /* Campo: Paragraphs item: Nombre del cauce */
  $handler->display->display_options['fields']['field_nombre_cauce']['id'] = 'field_nombre_cauce';
  $handler->display->display_options['fields']['field_nombre_cauce']['table'] = 'field_data_field_nombre_cauce';
  $handler->display->display_options['fields']['field_nombre_cauce']['field'] = 'field_nombre_cauce';
  /* Campo: Paragraphs item: Nombre del jefe de familia */
  $handler->display->display_options['fields']['field_nombre_jefe_familia']['id'] = 'field_nombre_jefe_familia';
  $handler->display->display_options['fields']['field_nombre_jefe_familia']['table'] = 'field_data_field_nombre_jefe_familia';
  $handler->display->display_options['fields']['field_nombre_jefe_familia']['field'] = 'field_nombre_jefe_familia';
  /* Campo: Paragraphs item: Número de cédula */
  $handler->display->display_options['fields']['field_numero_cedula']['id'] = 'field_numero_cedula';
  $handler->display->display_options['fields']['field_numero_cedula']['table'] = 'field_data_field_numero_cedula';
  $handler->display->display_options['fields']['field_numero_cedula']['field'] = 'field_numero_cedula';
  /* Campo: Paragraphs item: Número de familias */
  $handler->display->display_options['fields']['field_total_numero_familias']['id'] = 'field_total_numero_familias';
  $handler->display->display_options['fields']['field_total_numero_familias']['table'] = 'field_data_field_total_numero_familias';
  $handler->display->display_options['fields']['field_total_numero_familias']['field'] = 'field_total_numero_familias';
  $handler->display->display_options['fields']['field_total_numero_familias']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Campo: Paragraphs item: Número de fincas o productores */
  $handler->display->display_options['fields']['field_numero_fincas_productores']['id'] = 'field_numero_fincas_productores';
  $handler->display->display_options['fields']['field_numero_fincas_productores']['table'] = 'field_data_field_numero_fincas_productores';
  $handler->display->display_options['fields']['field_numero_fincas_productores']['field'] = 'field_numero_fincas_productores';
  $handler->display->display_options['fields']['field_numero_fincas_productores']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Campo: Paragraphs item: Número de integrantes */
  $handler->display->display_options['fields']['field_numero_integrantes']['id'] = 'field_numero_integrantes';
  $handler->display->display_options['fields']['field_numero_integrantes']['table'] = 'field_data_field_numero_integrantes';
  $handler->display->display_options['fields']['field_numero_integrantes']['field'] = 'field_numero_integrantes';
  $handler->display->display_options['fields']['field_numero_integrantes']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Campo: Paragraphs item: Número de personas */
  $handler->display->display_options['fields']['field_numero_personas']['id'] = 'field_numero_personas';
  $handler->display->display_options['fields']['field_numero_personas']['table'] = 'field_data_field_numero_personas';
  $handler->display->display_options['fields']['field_numero_personas']['field'] = 'field_numero_personas';
  $handler->display->display_options['fields']['field_numero_personas']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Campo: Paragraphs item: Obra o componente afectado */
  $handler->display->display_options['fields']['field_componente_afectado']['id'] = 'field_componente_afectado';
  $handler->display->display_options['fields']['field_componente_afectado']['table'] = 'field_data_field_componente_afectado';
  $handler->display->display_options['fields']['field_componente_afectado']['field'] = 'field_componente_afectado';
  /* Campo: Paragraphs item: Periodo de ejecución */
  $handler->display->display_options['fields']['field_periodo_ejecucion']['id'] = 'field_periodo_ejecucion';
  $handler->display->display_options['fields']['field_periodo_ejecucion']['table'] = 'field_data_field_periodo_ejecucion';
  $handler->display->display_options['fields']['field_periodo_ejecucion']['field'] = 'field_periodo_ejecucion';
  $handler->display->display_options['fields']['field_periodo_ejecucion']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Campo: Paragraphs item: Plazo */
  $handler->display->display_options['fields']['field_plazo']['id'] = 'field_plazo';
  $handler->display->display_options['fields']['field_plazo']['table'] = 'field_data_field_plazo';
  $handler->display->display_options['fields']['field_plazo']['field'] = 'field_plazo';
  /* Campo: Paragraphs item: Poblado */
  $handler->display->display_options['fields']['field_poblado']['id'] = 'field_poblado';
  $handler->display->display_options['fields']['field_poblado']['table'] = 'field_data_field_poblado';
  $handler->display->display_options['fields']['field_poblado']['field'] = 'field_poblado';
  /* Campo: Paragraphs item: Programas, proyectos, acciones, obras */
  $handler->display->display_options['fields']['field_programas_proyectos_accion']['id'] = 'field_programas_proyectos_accion';
  $handler->display->display_options['fields']['field_programas_proyectos_accion']['table'] = 'field_data_field_programas_proyectos_accion';
  $handler->display->display_options['fields']['field_programas_proyectos_accion']['field'] = 'field_programas_proyectos_accion';
  /* Campo: Paragraphs item: Solución */
  $handler->display->display_options['fields']['field_solucion']['id'] = 'field_solucion';
  $handler->display->display_options['fields']['field_solucion']['table'] = 'field_data_field_solucion';
  $handler->display->display_options['fields']['field_solucion']['field'] = 'field_solucion';
  /* Campo: Paragraphs item: Teléfono */
  $handler->display->display_options['fields']['field_telefono_jefe_familia']['id'] = 'field_telefono_jefe_familia';
  $handler->display->display_options['fields']['field_telefono_jefe_familia']['table'] = 'field_data_field_telefono_jefe_familia';
  $handler->display->display_options['fields']['field_telefono_jefe_familia']['field'] = 'field_telefono_jefe_familia';
  /* Campo: Paragraphs item: Tenencia */
  $handler->display->display_options['fields']['field_tenencia']['id'] = 'field_tenencia';
  $handler->display->display_options['fields']['field_tenencia']['table'] = 'field_data_field_tenencia';
  $handler->display->display_options['fields']['field_tenencia']['field'] = 'field_tenencia';
  /* Contextual filter: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_formulario_insumos_pge_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'pge_formulario_insumos' => 'pge_formulario_insumos',
  );
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'pge_insumos_agro_sub_agricola' => 'pge_insumos_agro_sub_agricola',
    'pge_insumos_agro_sub_pecuario' => 'pge_insumos_agro_sub_pecuario',
    'pge_insumos_alcantarillas_vados' => 'pge_insumos_alcantarillas_vados',
    'pge_insumos_danno_ambiental' => 'pge_insumos_danno_ambiental',
    'pge_insumos_edificios_publicos' => 'pge_insumos_edificios_publicos',
    'pge_insumos_obras_correctivas' => 'pge_insumos_obras_correctivas',
    'pge_insumos_poblacion' => 'pge_insumos_poblacion',
    'pge_insumos_puentes' => 'pge_insumos_puentes',
    'pge_insumos_rios_quebradas' => 'pge_insumos_rios_quebradas',
    'pge_insumos_sis_infocomunicacion' => 'pge_insumos_sis_infocomunicacion',
    'pge_insumos_sistema_abaste_agua' => 'pge_insumos_sistema_abaste_agua',
    'pge_insumos_sistema_electrico' => 'pge_insumos_sistema_electrico',
    'pge_insumos_vivienda' => 'pge_insumos_vivienda',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: Nid',
    ),
  );
  $translatables['insumos_pge'] = array(
    t('Master'),
    t('Insumos PGE'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('field_formulario_insumos_pge'),
    t('Provincia, Cantón, Distrito'),
    t('Cantidad'),
    t('Cantidad (número de animales)'),
    t('Cantidades Estimadas (Peso)'),
    t('Características (alcantarillas o vados)'),
    t('Descripción de las obras o labores requeridas'),
    t('Descripción de los daños'),
    t('Descripción del tramo'),
    t('Dirección (por puntos de referencia)'),
    t('Documento de referencia'),
    t('Extensión'),
    t('Fase'),
    t('Fuente: Presa, naciente o pozo'),
    t('Infraestructura agrícola'),
    t('Infraestructura pecuaria'),
    t('Instituciones involucradas'),
    t('Insumos'),
    t('Inversión Estimada'),
    t('Lugar de movilización'),
    t('Material predominante'),
    t('Metros cuadrados de construcción'),
    t('Monto estimado de costo de obras y labores'),
    t('Monto estimado de pérdidas'),
    t('Naturaleza de uso'),
    t('Nivel de daños'),
    t('Nivel de Prioridad'),
    t('No. de ruta o descripción del tramo'),
    t('Nombre de cuencas o subcuencas'),
    t('Nombre del cauce'),
    t('Nombre del jefe de familia'),
    t('Número de cédula'),
    t('Número de familias'),
    t('Número de fincas o productores'),
    t('Número de integrantes'),
    t('Número de personas'),
    t('Obra o componente afectado'),
    t('Periodo de ejecución'),
    t('Plazo'),
    t('Poblado'),
    t('Programas, proyectos, acciones, obras'),
    t('Solución'),
    t('Teléfono'),
    t('Tenencia'),
    t('Todo'),
    t('Content pane'),
    t('View panes'),
  );
  $export['insumos_pge'] = $view;

  $view = new view();
  $view->name = 'pge_compromisos_acciones_obras';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'paragraphs_item';
  $view->human_name = 'PGE Compromisos Acciones y obras';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Paragraphs item: Entity with the Acciones y obras por realizar (field_acciones_obras_realizar) */
  $handler->display->display_options['relationships']['field_acciones_obras_realizar_node']['id'] = 'field_acciones_obras_realizar_node';
  $handler->display->display_options['relationships']['field_acciones_obras_realizar_node']['table'] = 'paragraphs_item';
  $handler->display->display_options['relationships']['field_acciones_obras_realizar_node']['field'] = 'field_acciones_obras_realizar_node';
  /* Campo: Paragraphs item: Paragraphs item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'paragraphs_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  /* Campo: Paragraphs item: Cantidad */
  $handler->display->display_options['fields']['field_cantidad']['id'] = 'field_cantidad';
  $handler->display->display_options['fields']['field_cantidad']['table'] = 'field_data_field_cantidad';
  $handler->display->display_options['fields']['field_cantidad']['field'] = 'field_cantidad';
  /* Campo: Paragraphs item: Descripción */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  /* Campo: Paragraphs item: Inversión Estimada */
  $handler->display->display_options['fields']['field_inversion_estimada']['id'] = 'field_inversion_estimada';
  $handler->display->display_options['fields']['field_inversion_estimada']['table'] = 'field_data_field_inversion_estimada';
  $handler->display->display_options['fields']['field_inversion_estimada']['field'] = 'field_inversion_estimada';
  /* Campo: Paragraphs item: Periodo de ejecución */
  $handler->display->display_options['fields']['field_periodo_ejecucion']['id'] = 'field_periodo_ejecucion';
  $handler->display->display_options['fields']['field_periodo_ejecucion']['table'] = 'field_data_field_periodo_ejecucion';
  $handler->display->display_options['fields']['field_periodo_ejecucion']['field'] = 'field_periodo_ejecucion';
  /* Campo: Paragraphs item: Unidad de medida */
  $handler->display->display_options['fields']['field_unidad_medida']['id'] = 'field_unidad_medida';
  $handler->display->display_options['fields']['field_unidad_medida']['table'] = 'field_data_field_unidad_medida';
  $handler->display->display_options['fields']['field_unidad_medida']['field'] = 'field_unidad_medida';
  /* Sort criterion: Paragraphs item: Paragraphs item ID */
  $handler->display->display_options['sorts']['item_id']['id'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['table'] = 'paragraphs_item';
  $handler->display->display_options['sorts']['item_id']['field'] = 'item_id';
  /* Contextual filter: Paragraphs item: Paragraphs item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'paragraphs_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'compromiso_pge_acciones_obras' => 'compromiso_pge_acciones_obras',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Acciones y obras por realizar';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Paragraphs item: Entity with the Acciones y obras por realizar (field_acciones_obras_realizar) */
  $handler->display->display_options['relationships']['field_acciones_obras_realizar_node']['id'] = 'field_acciones_obras_realizar_node';
  $handler->display->display_options['relationships']['field_acciones_obras_realizar_node']['table'] = 'paragraphs_item';
  $handler->display->display_options['relationships']['field_acciones_obras_realizar_node']['field'] = 'field_acciones_obras_realizar_node';
  $handler->display->display_options['relationships']['field_acciones_obras_realizar_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Paragraphs item: Descripción */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['type'] = 'text_plain';
  /* Campo: Paragraphs item: Periodo de ejecución */
  $handler->display->display_options['fields']['field_periodo_ejecucion']['id'] = 'field_periodo_ejecucion';
  $handler->display->display_options['fields']['field_periodo_ejecucion']['table'] = 'field_data_field_periodo_ejecucion';
  $handler->display->display_options['fields']['field_periodo_ejecucion']['field'] = 'field_periodo_ejecucion';
  $handler->display->display_options['fields']['field_periodo_ejecucion']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Campo: Paragraphs item: Unidad de medida */
  $handler->display->display_options['fields']['field_unidad_medida']['id'] = 'field_unidad_medida';
  $handler->display->display_options['fields']['field_unidad_medida']['table'] = 'field_data_field_unidad_medida';
  $handler->display->display_options['fields']['field_unidad_medida']['field'] = 'field_unidad_medida';
  /* Campo: Paragraphs item: Cantidad */
  $handler->display->display_options['fields']['field_cantidad']['id'] = 'field_cantidad';
  $handler->display->display_options['fields']['field_cantidad']['table'] = 'field_data_field_cantidad';
  $handler->display->display_options['fields']['field_cantidad']['field'] = 'field_cantidad';
  $handler->display->display_options['fields']['field_cantidad']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Campo: Paragraphs item: Inversión Estimada */
  $handler->display->display_options['fields']['field_inversion_estimada']['id'] = 'field_inversion_estimada';
  $handler->display->display_options['fields']['field_inversion_estimada']['table'] = 'field_data_field_inversion_estimada';
  $handler->display->display_options['fields']['field_inversion_estimada']['field'] = 'field_inversion_estimada';
  $handler->display->display_options['fields']['field_inversion_estimada']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_inversion_estimada']['settings'] = array(
    'thousand_separator' => '.',
    'decimal_separator' => '.',
    'scale' => '10',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Paragraphs item: Paragraphs item ID */
  $handler->display->display_options['sorts']['item_id']['id'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['table'] = 'paragraphs_item';
  $handler->display->display_options['sorts']['item_id']['field'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Contenido: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_acciones_obras_realizar_node';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Paragraphs item: Bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'paragraphs_item';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = array(
    'compromiso_pge_acciones_obras' => 'compromiso_pge_acciones_obras',
  );
  $handler->display->display_options['filters']['bundle']['group'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'user',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: Nid',
    ),
  );
  $translatables['pge_compromisos_acciones_obras'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primero'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('field_acciones_obras_realizar'),
    t('Paragraphs item ID'),
    t('.'),
    t(','),
    t('Cantidad'),
    t('Descripción'),
    t('Inversión Estimada'),
    t('Periodo de ejecución'),
    t('Unidad de medida'),
    t('Todo'),
    t('Content pane'),
    t('Acciones y obras por realizar'),
    t('View panes'),
  );
  $export['pge_compromisos_acciones_obras'] = $view;

  return $export;
}
