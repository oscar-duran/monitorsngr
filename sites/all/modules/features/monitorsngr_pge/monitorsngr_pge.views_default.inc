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
    t('Sector'),
    t('Nombre del informante'),
    t('Institución '),
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
    t('Content pane'),
    t('Formulario de Insumos'),
    t('author'),
    t('Informante'),
    t('Institución del informante'),
    t('View panes'),
  );
  $export['formularios_insumos_pge'] = $view;

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
