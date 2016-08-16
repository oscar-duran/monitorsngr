<?php
/**
 * @file
 * tipos_de_contenido_monitor.features.inc
 */

/**
 * Implements hook_node_info().
 */
function tipos_de_contenido_monitor_node_info() {
  $items = array(
    'detalle_de_instancia_de_coordina' => array(
      'name' => t('Detalle de Instancia de Coordinación'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'instancia_de_coordinaci_n_' => array(
      'name' => t('Instancia de Coordinación'),
      'base' => 'node_content',
      'description' => t('El Sistema Nacional de Gestión del Riesgo se estructura por medio de las siguientes "instancias de coordinación". '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'montos_ejecuci_n' => array(
      'name' => t('Montos Ejecución'),
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
