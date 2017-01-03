<?php
/**
 * @file
 * compromiso_de_geston_edit_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function compromiso_de_geston_edit_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function compromiso_de_geston_edit_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function compromiso_de_geston_edit_views_node_info() {
  $items = array(
    'compromiso_gestion' => array(
      'name' => t('Compromiso de gestión'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
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
