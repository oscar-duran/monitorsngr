<?php
/**
 * @file
 * monitorsngr_pge.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function monitorsngr_pge_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function monitorsngr_pge_node_info() {
  $items = array(
    'decreto_de_emergencia' => array(
      'name' => t('Decreto de Emergencia'),
      'base' => 'node_content',
      'description' => t('Estructura para administrar un Perfil de un Decreto de Emergencia'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'peg_ficha_tecnica_compromiso' => array(
      'name' => t('Ficha Técnica de compromiso PGE'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
