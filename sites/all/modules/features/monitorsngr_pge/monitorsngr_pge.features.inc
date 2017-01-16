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
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function monitorsngr_pge_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
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
    'pge_formulario_insumos' => array(
      'name' => t('Formulario de insumos PGE'),
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

/**
 * Implements hook_paragraphs_info().
 */
function monitorsngr_pge_paragraphs_info() {
  $items = array(
    'compromiso_pge_acciones_obras' => array(
      'name' => 'Compromiso PGE - Acciones y Obras',
      'bundle' => 'compromiso_pge_acciones_obras',
      'locked' => '1',
    ),
    'pge_insumos_agro_sub_agricola' => array(
      'name' => 'PGE Insumos: Agropecuario: subsector agrícola',
      'bundle' => 'pge_insumos_agro_sub_agricola',
      'locked' => '1',
    ),
    'pge_insumos_agro_sub_pecuario' => array(
      'name' => 'PGE Insumos: Agropecuario: subsector pecuario',
      'bundle' => 'pge_insumos_agro_sub_pecuario',
      'locked' => '1',
    ),
    'pge_insumos_alcantarillas_vados' => array(
      'name' => 'PGE Insumos: Alcantarillas y vados',
      'bundle' => 'pge_insumos_alcantarillas_vados',
      'locked' => '1',
    ),
    'pge_insumos_danno_ambiental' => array(
      'name' => 'PGE Insumos: Descripción de daño ambiental',
      'bundle' => 'pge_insumos_danno_ambiental',
      'locked' => '1',
    ),
    'pge_insumos_edificios_publicos' => array(
      'name' => 'PGE Insumos: Edificios públicos',
      'bundle' => 'pge_insumos_edificios_publicos',
      'locked' => '1',
    ),
    'pge_insumos_obras_correctivas' => array(
      'name' => 'PGE Insumos: Obras correctivas',
      'bundle' => 'pge_insumos_obras_correctivas',
      'locked' => '1',
    ),
    'pge_insumos_poblacion' => array(
      'name' => 'PGE Insumos: Población',
      'bundle' => 'pge_insumos_poblacion',
      'locked' => '1',
    ),
    'pge_insumos_puentes' => array(
      'name' => 'PGE Insumos: Puentes',
      'bundle' => 'pge_insumos_puentes',
      'locked' => '1',
    ),
    'pge_insumos_rios_quebradas' => array(
      'name' => 'PGE Insumos: Ríos y quebradas',
      'bundle' => 'pge_insumos_rios_quebradas',
      'locked' => '1',
    ),
    'pge_insumos_sis_infocomunicacion' => array(
      'name' => 'PGE Insumos: Sistema de infocomunicación',
      'bundle' => 'pge_insumos_sis_infocomunicacion',
      'locked' => '1',
    ),
    'pge_insumos_sistema_abaste_agua' => array(
      'name' => 'PGE Insumos: Sistemas de abastecimiento de agua',
      'bundle' => 'pge_insumos_sistema_abaste_agua',
      'locked' => '1',
    ),
    'pge_insumos_sistema_electrico' => array(
      'name' => 'PGE Insumos: Sistema eléctrico',
      'bundle' => 'pge_insumos_sistema_electrico',
      'locked' => '1',
    ),
    'pge_insumos_vivienda' => array(
      'name' => 'PGE Insumos: Vivienda',
      'bundle' => 'pge_insumos_vivienda',
      'locked' => '1',
    ),
  );
  return $items;
}
