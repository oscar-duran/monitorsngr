<?php
/**
 * @file
 * p_gina_de_edici_n_y_de_vista_de_los_compromisos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function p_gina_de_edici_n_y_de_vista_de_los_compromisos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function p_gina_de_edici_n_y_de_vista_de_los_compromisos_node_info() {
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
  );
  drupal_alter('node_info', $items);
  return $items;
}
