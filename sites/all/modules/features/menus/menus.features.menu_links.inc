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
  // Exported menu link: menu-navigation-pge_decretos:node/12.
  $menu_links['menu-navigation-pge_decretos:node/12'] = array(
    'menu_name' => 'menu-navigation-pge',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Decretos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navigation-pge_decretos:node/12',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-navigation-pge_ficha-insumos:node/13.
  $menu_links['menu-navigation-pge_ficha-insumos:node/13'] = array(
    'menu_name' => 'menu-navigation-pge',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Ficha insumos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navigation-pge_ficha-insumos:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-navigation-pge_ficha-tcnica:node/14.
  $menu_links['menu-navigation-pge_ficha-tcnica:node/14'] = array(
    'menu_name' => 'menu-navigation-pge',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Ficha técnica',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navigation-pge_ficha-tcnica:node/14',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-navigation-pge_informes:node/15.
  $menu_links['menu-navigation-pge_informes:node/15'] = array(
    'menu_name' => 'menu-navigation-pge',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Informes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navigation-pge_informes:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
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
  // Exported menu link: navigation_ayuda:node/5.
  $menu_links['navigation_ayuda:node/5'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Ayuda',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_ayuda:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: navigation_crditos:node/6.
  $menu_links['navigation_crditos:node/6'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Créditos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_crditos:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: navigation_enlaces-institucionales:node/4.
  $menu_links['navigation_enlaces-institucionales:node/4'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Enlaces institucionales',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_enlaces-institucionales:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ayuda');
  t('Créditos');
  t('Decretos');
  t('Enlaces institucionales');
  t('Evaluaciones');
  t('Ficha insumos');
  t('Ficha técnica');
  t('Informes');
  t('Inicio');
  t('Instancias de coordinación');
  t('Instituciones');
  t('Matriz de cumplimiento');
  t('Planes Generales de Emergencia');
  t('Sistema Nacional de Gestión del Riesgo');

  return $menu_links;
}
