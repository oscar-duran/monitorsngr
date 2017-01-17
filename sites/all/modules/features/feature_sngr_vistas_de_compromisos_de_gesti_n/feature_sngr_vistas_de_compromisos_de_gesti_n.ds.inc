<?php
/**
 * @file
 * feature_sngr_vistas_de_compromisos_de_gesti_n.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_sngr_vistas_de_compromisos_de_gesti_n_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|decreto_de_emergencia|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'decreto_de_emergencia';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_nombre_declaratoria_emerge',
        1 => 'field_numero_de_decreto',
        2 => 'field_fecha',
        3 => 'field_monto_total_asigando',
        4 => 'field_acuerdo_de_junta_directiva',
        5 => 'field_numero_de_decreto_del_fini',
        6 => 'field_ubicaci_n_geogr_fica',
        7 => 'field_sector_estructural_afectad',
        8 => 'field_documento_adjunto',
      ),
    ),
    'fields' => array(
      'field_nombre_declaratoria_emerge' => 'left',
      'field_numero_de_decreto' => 'left',
      'field_fecha' => 'left',
      'field_monto_total_asigando' => 'left',
      'field_acuerdo_de_junta_directiva' => 'left',
      'field_numero_de_decreto_del_fini' => 'left',
      'field_ubicaci_n_geogr_fica' => 'left',
      'field_sector_estructural_afectad' => 'left',
      'field_documento_adjunto' => 'left',
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
  $export['node|decreto_de_emergencia|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|institucion|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'institucion';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_enlace_institucional',
        1 => 'field_telefono',
        2 => 'field_correo_electronico',
        3 => 'field_sitio_web',
        4 => 'field_nombre_jerarca',
        5 => 'field_cargo',
        6 => 'field_direccion_exacta',
        7 => 'field_montos_ejecucion_view',
      ),
    ),
    'fields' => array(
      'field_enlace_institucional' => 'left',
      'field_telefono' => 'left',
      'field_correo_electronico' => 'left',
      'field_sitio_web' => 'left',
      'field_nombre_jerarca' => 'left',
      'field_cargo' => 'left',
      'field_direccion_exacta' => 'left',
      'field_montos_ejecucion_view' => 'left',
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
  $export['node|institucion|default'] = $ds_layout;

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
        0 => 'field_anno_ini_meta',
        1 => 'field_anno_fin_meta',
        2 => 'field_meta_descripcion',
        3 => 'field_porcentaje_avance',
        4 => 'field_aspecto_positivo',
        5 => 'field_obstaculo',
        6 => 'field_porcentaje_avance_coment',
        7 => 'field_organizacion_capacitadora',
        8 => 'field_recibio_asesoria_meta',
        9 => 'field_producto',
        10 => 'field_su_org_requiere_asesoria',
        11 => 'field_tema_necesidad_meta',
        12 => 'field_estado',
        13 => 'field_observacion_del_analista',
      ),
    ),
    'fields' => array(
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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|monto_ejecucion|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'monto_ejecucion';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_anno',
        1 => 'field_monto_ejecucion',
        2 => 'field_monto_presupuestario',
        3 => 'field_institucion',
      ),
    ),
    'fields' => array(
      'field_anno' => 'left',
      'field_monto_ejecucion' => 'left',
      'field_monto_presupuestario' => 'left',
      'field_institucion' => 'left',
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
  $export['node|monto_ejecucion|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_4col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 1,
    'regions' => array(
      'first' => array(
        0 => 'webform',
      ),
    ),
    'fields' => array(
      'webform' => 'first',
    ),
  );
  $export['node|webform|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_3col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'comments',
        1 => 'webform',
      ),
    ),
    'fields' => array(
      'comments' => 'left',
      'webform' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|webform|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|ambito_eje_lineamiento_accion|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'ambito_eje_lineamiento_accion';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_codigo',
        1 => 'field_tipo_aela',
        2 => 'description',
      ),
    ),
    'fields' => array(
      'field_codigo' => 'left',
      'field_tipo_aela' => 'left',
      'description' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['taxonomy_term|ambito_eje_lineamiento_accion|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_institucion',
        1 => 'field_cargo',
        2 => 'field_departamento',
        3 => 'field_nombre',
        4 => 'field_apellido1',
        5 => 'field_apellido2',
        6 => 'field_telefono',
        7 => 'field_genero',
        8 => 'field_tratamiento',
      ),
    ),
    'fields' => array(
      'field_institucion' => 'left',
      'field_cargo' => 'left',
      'field_departamento' => 'left',
      'field_nombre' => 'left',
      'field_apellido1' => 'left',
      'field_apellido2' => 'left',
      'field_telefono' => 'left',
      'field_genero' => 'left',
      'field_tratamiento' => 'left',
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
  $export['user|user|default'] = $ds_layout;

  return $export;
}
