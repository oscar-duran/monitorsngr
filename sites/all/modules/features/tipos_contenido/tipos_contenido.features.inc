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
    'montos_ejecucion' => array(
      'name' => t('Montos de Ejecución'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Código interno'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
