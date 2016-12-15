<?php
/**
 * @file
 * feature_modals.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_modals_node_info() {
  $items = array(
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
