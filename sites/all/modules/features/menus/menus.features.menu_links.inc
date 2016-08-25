<?php
/**
 * @file
 * menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_inicio:<front>.
  $menu_links['main-menu_inicio:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Inicio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_inicio:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: main-menu_planes-generales-de-emergencia:node/3.
  $menu_links['main-menu_planes-generales-de-emergencia:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Planes Generales de Emergencia',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_planes-generales-de-emergencia:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sistema-nacional-de-gestin-del-riesgo:node/2.
  $menu_links['main-menu_sistema-nacional-de-gestin-del-riesgo:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Sistema Nacional de Gestión del Riesgo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sistema-nacional-de-gestin-del-riesgo:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-navigation-sngr_evaluaciones:node/9.
  $menu_links['menu-navigation-sngr_evaluaciones:node/9'] = array(
    'menu_name' => 'menu-navigation-sngr',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Evaluaciones',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navigation-sngr_evaluaciones:node/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-navigation-sngr_informes:node/11.
  $menu_links['menu-navigation-sngr_informes:node/11'] = array(
    'menu_name' => 'menu-navigation-sngr',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Informes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navigation-sngr_informes:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-navigation-sngr_instancias-de-coordinacin:node/8.
  $menu_links['menu-navigation-sngr_instancias-de-coordinacin:node/8'] = array(
    'menu_name' => 'menu-navigation-sngr',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Instancias de coordinación',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navigation-sngr_instancias-de-coordinacin:node/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-navigation-sngr_instituciones:node/7.
  $menu_links['menu-navigation-sngr_instituciones:node/7'] = array(
    'menu_name' => 'menu-navigation-sngr',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Instituciones',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navigation-sngr_instituciones:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-navigation-sngr_matriz-de-cumplimiento:node/10.
  $menu_links['menu-navigation-sngr_matriz-de-cumplimiento:node/10'] = array(
    'menu_name' => 'menu-navigation-sngr',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Matriz de cumplimiento',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navigation-sngr_matriz-de-cumplimiento:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Evaluaciones');
  t('Informes');
  t('Inicio');
  t('Instancias de coordinación');
  t('Instituciones');
  t('Matriz de cumplimiento');
  t('Planes Generales de Emergencia');
  t('Sistema Nacional de Gestión del Riesgo');

  return $menu_links;
}
