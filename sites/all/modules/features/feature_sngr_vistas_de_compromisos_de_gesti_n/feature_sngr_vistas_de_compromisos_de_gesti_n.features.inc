<?php
/**
 * @file
 * feature_sngr_vistas_de_compromisos_de_gesti_n.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_sngr_vistas_de_compromisos_de_gesti_n_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_sngr_vistas_de_compromisos_de_gesti_n_node_info() {
  $items = array(
    'compromiso_de_gestion' => array(
      'name' => t('Compromiso de gestión'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Compromiso de gestión'),
      'help' => '',
    ),
    'meta' => array(
      'name' => t('Meta'),
      'base' => 'node_content',
      'description' => t('Meta de un compromiso de gestión.'),
      'has_title' => '1',
      'title_label' => t('Código - Nombre de Meta'),
      'help' => '',
    ),
    'producto_meta' => array(
      'name' => t('Producto meta'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Producto esperado'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
