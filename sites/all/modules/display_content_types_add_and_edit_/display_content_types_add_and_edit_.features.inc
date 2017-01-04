<?php
/**
 * @file
 * display_content_types_add_and_edit_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function display_content_types_add_and_edit__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function display_content_types_add_and_edit__node_info() {
  $items = array(
    'accion_estrategica_de_compromiso' => array(
      'name' => t('Acción estratégica de compromiso'),
      'base' => 'node_content',
      'description' => t('Acción estratégica de una matriz de compromiso'),
      'has_title' => '1',
      'title_label' => t('Acción Estratégica'),
      'help' => '',
    ),
    'compromiso_de_gestion' => array(
      'name' => t('Compromiso de gestión'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Compromiso de gestión'),
      'help' => '',
    ),
    'item_compromiso' => array(
      'name' => t('Item de compromiso'),
      'base' => 'node_content',
      'description' => t('Configuración de una parte del compromiso de gestión'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
