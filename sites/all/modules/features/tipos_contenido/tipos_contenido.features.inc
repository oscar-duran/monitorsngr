<?php
/**
 * @file
 * tipos_contenido.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tipos_contenido_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tipos_contenido_node_info() {
  $items = array(
    'instancia_coordinacion' => array(
      'name' => t('Instancia de Coordinación'),
      'base' => 'node_content',
      'description' => t('El Sistema Nacional de Gestión del Riesgo se estructura por medio de las siguientes "instancias de coordinación". '),
      'has_title' => '1',
      'title_label' => t('Nombre de la instancia '),
      'help' => '',
    ),
    'institucion' => array(
      'name' => t('Institución'),
      'base' => 'node_content',
      'description' => t('Institución'),
      'has_title' => '1',
      'title_label' => t('Nombre de la institución'),
      'help' => '',
    ),
    'monto_ejecucion' => array(
      'name' => t('Monto ejecución'),
      'base' => 'node_content',
      'description' => t('Montos de ejecución total por institución por año'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}