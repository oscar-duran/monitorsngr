<?php
/**
 * @file
 * compromiso_de_geston_edit_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function compromiso_de_geston_edit_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lista_compromisos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lista Compromisos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lista Compromisos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_editable' => 'title_editable',
    'field_accion_a_seguir_editable' => 'field_accion_a_seguir_editable',
    'field_estado_editable' => 'field_estado_editable',
    'field_meta' => 'field_meta',
    'field_anno_fin_meta' => 'field_anno_fin_meta',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_accion_a_seguir_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_estado_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meta' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_anno_fin_meta' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  /* Relationship: Contenido: Item de Compromiso (field_item_compromiso) */
  $handler->display->display_options['relationships']['field_item_compromiso_value']['id'] = 'field_item_compromiso_value';
  $handler->display->display_options['relationships']['field_item_compromiso_value']['table'] = 'field_data_field_item_compromiso';
  $handler->display->display_options['relationships']['field_item_compromiso_value']['field'] = 'field_item_compromiso_value';
  $handler->display->display_options['relationships']['field_item_compromiso_value']['delta'] = '-1';
  /* Relationship: Field collection item: Acción Estratégica (field_accion_collect) */
  $handler->display->display_options['relationships']['field_accion_collect_value']['id'] = 'field_accion_collect_value';
  $handler->display->display_options['relationships']['field_accion_collect_value']['table'] = 'field_data_field_accion_collect';
  $handler->display->display_options['relationships']['field_accion_collect_value']['field'] = 'field_accion_collect_value';
  $handler->display->display_options['relationships']['field_accion_collect_value']['relationship'] = 'field_item_compromiso_value';
  $handler->display->display_options['relationships']['field_accion_collect_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_meta_target_id']['id'] = 'field_meta_target_id';
  $handler->display->display_options['relationships']['field_meta_target_id']['table'] = 'field_data_field_meta';
  $handler->display->display_options['relationships']['field_meta_target_id']['field'] = 'field_meta_target_id';
  $handler->display->display_options['relationships']['field_meta_target_id']['relationship'] = 'field_accion_collect_value';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_producto_target_id']['id'] = 'field_producto_target_id';
  $handler->display->display_options['relationships']['field_producto_target_id']['table'] = 'field_data_field_producto';
  $handler->display->display_options['relationships']['field_producto_target_id']['field'] = 'field_producto_target_id';
  $handler->display->display_options['relationships']['field_producto_target_id']['relationship'] = 'field_meta_target_id';
  /* Campo: Contenido: Título (editable) */
  $handler->display->display_options['fields']['title_editable']['id'] = 'title_editable';
  $handler->display->display_options['fields']['title_editable']['table'] = 'node';
  $handler->display->display_options['fields']['title_editable']['field'] = 'title_editable';
  $handler->display->display_options['fields']['title_editable']['label'] = 'Título';
  $handler->display->display_options['fields']['title_editable']['textfield_size'] = '';
  /* Campo: Contenido: Acción a seguir (editable) */
  $handler->display->display_options['fields']['field_accion_a_seguir_editable']['id'] = 'field_accion_a_seguir_editable';
  $handler->display->display_options['fields']['field_accion_a_seguir_editable']['table'] = 'field_data_field_accion_a_seguir';
  $handler->display->display_options['fields']['field_accion_a_seguir_editable']['field'] = 'field_accion_a_seguir_editable';
  $handler->display->display_options['fields']['field_accion_a_seguir_editable']['label'] = 'Acción a seguir';
  $handler->display->display_options['fields']['field_accion_a_seguir_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_accion_a_seguir_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_accion_a_seguir_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_accion_a_seguir_editable']['suppress_description'] = 0;
  /* Campo: Contenido: Estado (editable) */
  $handler->display->display_options['fields']['field_estado_editable']['id'] = 'field_estado_editable';
  $handler->display->display_options['fields']['field_estado_editable']['table'] = 'field_data_field_estado';
  $handler->display->display_options['fields']['field_estado_editable']['field'] = 'field_estado_editable';
  $handler->display->display_options['fields']['field_estado_editable']['label'] = 'Estado';
  $handler->display->display_options['fields']['field_estado_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_estado_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_estado_editable']['suppress_description'] = 0;
  /* Campo: Campo: Meta */
  $handler->display->display_options['fields']['field_meta']['id'] = 'field_meta';
  $handler->display->display_options['fields']['field_meta']['table'] = 'field_data_field_meta';
  $handler->display->display_options['fields']['field_meta']['field'] = 'field_meta';
  $handler->display->display_options['fields']['field_meta']['relationship'] = 'field_accion_collect_value';
  $handler->display->display_options['fields']['field_meta']['settings'] = array(
    'link' => 0,
  );
  /* Campo: Contenido: Descripción Fuente Verificación */
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['id'] = 'field_descripc_fuente_verifica';
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['table'] = 'field_data_field_descripc_fuente_verifica';
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['field'] = 'field_descripc_fuente_verifica';
  $handler->display->display_options['fields']['field_descripc_fuente_verifica']['relationship'] = 'field_producto_target_id';
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'compromiso_de_gestion' => 'compromiso_de_gestion',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lista-compromisos';
  $translatables['lista_compromisos'] = array(
    t('Master'),
    t('Lista Compromisos'),
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
    t('field collection item from field_item_compromiso'),
    t('field collection item from field_accion_collect'),
    t('Contenido entity referenced from field_meta'),
    t('Contenido entity referenced from field_producto'),
    t('Título'),
    t('Acción a seguir'),
    t('Estado'),
    t('Meta'),
    t('Descripción Fuente Verificación'),
    t('Page'),
  );
  $export['lista_compromisos'] = $view;

  return $export;
}
