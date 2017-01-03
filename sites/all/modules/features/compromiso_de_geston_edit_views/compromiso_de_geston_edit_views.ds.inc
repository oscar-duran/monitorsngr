<?php
/**
 * @file
 * compromiso_de_geston_edit_views.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function compromiso_de_geston_edit_views_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|item_compromiso|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'item_compromiso';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_eje',
        1 => 'field_ambito',
        2 => 'field_lineamiento',
        3 => 'field_accion_estrategica',
      ),
    ),
    'fields' => array(
      'field_eje' => 'left',
      'field_ambito' => 'left',
      'field_lineamiento' => 'left',
      'field_accion_estrategica' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|item_compromiso|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|meta|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'meta';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_anno_ini_meta',
        2 => 'field_anno_fin_meta',
        3 => 'field_meta_descripcion',
        4 => 'field_porcentaje_avance',
        5 => 'field_aspecto_positivo',
        6 => 'field_obstaculo',
        7 => 'field_porcentaje_avance_coment',
        8 => 'field_organizacion_capacitadora',
        9 => 'field_recibio_asesoria_meta',
        10 => 'field_producto',
        11 => 'field_su_org_requiere_asesoria',
        12 => 'field_tema_necesidad_meta',
        13 => 'field_estado',
        14 => 'field_observacion_del_analista',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_anno_ini_meta' => 'left',
      'field_anno_fin_meta' => 'left',
      'field_meta_descripcion' => 'left',
      'field_porcentaje_avance' => 'left',
      'field_aspecto_positivo' => 'left',
      'field_obstaculo' => 'left',
      'field_porcentaje_avance_coment' => 'left',
      'field_organizacion_capacitadora' => 'left',
      'field_recibio_asesoria_meta' => 'left',
      'field_producto' => 'left',
      'field_su_org_requiere_asesoria' => 'left',
      'field_tema_necesidad_meta' => 'left',
      'field_estado' => 'left',
      'field_observacion_del_analista' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|meta|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function compromiso_de_geston_edit_views_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'editable';
  $ds_view_mode->label = 'Editable';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
    'node' => 'node',
  );
  $export['editable'] = $ds_view_mode;

  return $export;
}
