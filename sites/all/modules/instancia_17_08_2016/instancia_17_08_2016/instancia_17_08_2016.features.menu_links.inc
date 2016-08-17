<?php
/**
 * @file
 * instancia_17_08_2016.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function instancia_17_08_2016_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_inicio:http://localhost/sngr/inicio.
  $menu_links['main-menu_inicio:http://localhost/sngr/inicio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://localhost/sngr/inicio',
    'router_path' => '',
    'link_title' => 'Inicio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_inicio:http://localhost/sngr/inicio',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_planes-generales-de-emergencia:http://localhost/sngr/pge.
  $menu_links['main-menu_planes-generales-de-emergencia:http://localhost/sngr/pge'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://localhost/sngr/pge',
    'router_path' => '',
    'link_title' => 'Planes Generales de Emergencia',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_planes-generales-de-emergencia:http://localhost/sngr/pge',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sistema-nacional-de-gestin-del-riesgo:http://localhost/sngr/sngr.
  $menu_links['main-menu_sistema-nacional-de-gestin-del-riesgo:http://localhost/sngr/sngr'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://localhost/sngr/sngr',
    'router_path' => '',
    'link_title' => 'Sistema Nacional de Gestión del Riesgo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sistema-nacional-de-gestin-del-riesgo:http://localhost/sngr/sngr',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu.
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_navegacin-pge:admin/structure/menu/manage/menu-navegaci-n-pge.
  $menu_links['management_navegacin-pge:admin/structure/menu/manage/menu-navegaci-n-pge'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-navegaci-n-pge',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navegación PGE',
    'options' => array(
      'identifier' => 'management_navegacin-pge:admin/structure/menu/manage/menu-navegaci-n-pge',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_navegacin-sngr:admin/structure/menu/manage/menu-navegaci-n-sngr.
  $menu_links['management_navegacin-sngr:admin/structure/menu/manage/menu-navegaci-n-sngr'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-navegaci-n-sngr',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navegación SNGR',
    'options' => array(
      'identifier' => 'management_navegacin-sngr:admin/structure/menu/manage/menu-navegaci-n-sngr',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_navigation:admin/structure/menu/manage/navigation.
  $menu_links['management_navigation:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(
      'identifier' => 'management_navigation:admin/structure/menu/manage/navigation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: menu-navegaci-n-pge_decretos:http://localhost/sngr/pge/decretos.
  $menu_links['menu-navegaci-n-pge_decretos:http://localhost/sngr/pge/decretos'] = array(
    'menu_name' => 'menu-navegaci-n-pge',
    'link_path' => 'http://localhost/sngr/pge/decretos',
    'router_path' => '',
    'link_title' => 'Decretos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navegaci-n-pge_decretos:http://localhost/sngr/pge/decretos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-navegaci-n-pge_ficha-insumos:http://localhost/sngr/pge/fichainsumos.
  $menu_links['menu-navegaci-n-pge_ficha-insumos:http://localhost/sngr/pge/fichainsumos'] = array(
    'menu_name' => 'menu-navegaci-n-pge',
    'link_path' => 'http://localhost/sngr/pge/fichainsumos',
    'router_path' => '',
    'link_title' => 'Ficha insumos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navegaci-n-pge_ficha-insumos:http://localhost/sngr/pge/fichainsumos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-navegaci-n-pge_ficha-tecnica:http://localhost/sngr/pge/fichatecnica.
  $menu_links['menu-navegaci-n-pge_ficha-tecnica:http://localhost/sngr/pge/fichatecnica'] = array(
    'menu_name' => 'menu-navegaci-n-pge',
    'link_path' => 'http://localhost/sngr/pge/fichatecnica',
    'router_path' => '',
    'link_title' => 'Ficha tecnica',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navegaci-n-pge_ficha-tecnica:http://localhost/sngr/pge/fichatecnica',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-navegaci-n-pge_informes:http://localhost/sngr/pge/informes.
  $menu_links['menu-navegaci-n-pge_informes:http://localhost/sngr/pge/informes'] = array(
    'menu_name' => 'menu-navegaci-n-pge',
    'link_path' => 'http://localhost/sngr/pge/informes',
    'router_path' => '',
    'link_title' => 'Informes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navegaci-n-pge_informes:http://localhost/sngr/pge/informes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-navegaci-n-sngr_evaluaciones-:http://localhost/sngr/sngr2/evaluaciones.
  $menu_links['menu-navegaci-n-sngr_evaluaciones-:http://localhost/sngr/sngr2/evaluaciones'] = array(
    'menu_name' => 'menu-navegaci-n-sngr',
    'link_path' => 'http://localhost/sngr/sngr2/evaluaciones',
    'router_path' => '',
    'link_title' => 'Evaluaciones ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navegaci-n-sngr_evaluaciones-:http://localhost/sngr/sngr2/evaluaciones',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-navegaci-n-sngr_informes:http://localhost/sngr/sngr2/informes.
  $menu_links['menu-navegaci-n-sngr_informes:http://localhost/sngr/sngr2/informes'] = array(
    'menu_name' => 'menu-navegaci-n-sngr',
    'link_path' => 'http://localhost/sngr/sngr2/informes',
    'router_path' => '',
    'link_title' => 'Informes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navegaci-n-sngr_informes:http://localhost/sngr/sngr2/informes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-navegaci-n-sngr_instancias-de-coordinacin:http://localhost/sngr/sngr/instancias-de-coordinacion.
  $menu_links['menu-navegaci-n-sngr_instancias-de-coordinacin:http://localhost/sngr/sngr/instancias-de-coordinacion'] = array(
    'menu_name' => 'menu-navegaci-n-sngr',
    'link_path' => 'http://localhost/sngr/sngr/instancias-de-coordinacion',
    'router_path' => '',
    'link_title' => 'Instancias de coordinación',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navegaci-n-sngr_instancias-de-coordinacin:http://localhost/sngr/sngr/instancias-de-coordinacion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-navegaci-n-sngr_instituciones:http://localhost/sngr/sngr2/instituciones.
  $menu_links['menu-navegaci-n-sngr_instituciones:http://localhost/sngr/sngr2/instituciones'] = array(
    'menu_name' => 'menu-navegaci-n-sngr',
    'link_path' => 'http://localhost/sngr/sngr2/instituciones',
    'router_path' => '',
    'link_title' => 'Instituciones',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navegaci-n-sngr_instituciones:http://localhost/sngr/sngr2/instituciones',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-navegaci-n-sngr_matriz-de-cumplimiento:http://localhost/sngr/sngr2/matrizdecumplimiento.
  $menu_links['menu-navegaci-n-sngr_matriz-de-cumplimiento:http://localhost/sngr/sngr2/matrizdecumplimiento'] = array(
    'menu_name' => 'menu-navegaci-n-sngr',
    'link_path' => 'http://localhost/sngr/sngr2/matrizdecumplimiento',
    'router_path' => '',
    'link_title' => 'Matriz de cumplimiento',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-navegaci-n-sngr_matriz-de-cumplimiento:http://localhost/sngr/sngr2/matrizdecumplimiento',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: navigation_ayuda:http://localhost/sngr/inicio/ayuda.
  $menu_links['navigation_ayuda:http://localhost/sngr/inicio/ayuda'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'http://localhost/sngr/inicio/ayuda',
    'router_path' => '',
    'link_title' => 'Ayuda',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_ayuda:http://localhost/sngr/inicio/ayuda',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: navigation_creditos:http://localhost/sngr/inicio/creditos.
  $menu_links['navigation_creditos:http://localhost/sngr/inicio/creditos'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'http://localhost/sngr/inicio/creditos',
    'router_path' => '',
    'link_title' => 'Creditos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_creditos:http://localhost/sngr/inicio/creditos',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: navigation_detalle-de-instancia-de-coordinacin:node/add/detalle-de-instancia-de-coordina.
  $menu_links['navigation_detalle-de-instancia-de-coordinacin:node/add/detalle-de-instancia-de-coordina'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/detalle-de-instancia-de-coordina',
    'router_path' => 'node/add/detalle-de-instancia-de-coordina',
    'link_title' => 'Detalle de Instancia de Coordinación',
    'options' => array(
      'identifier' => 'navigation_detalle-de-instancia-de-coordinacin:node/add/detalle-de-instancia-de-coordina',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_enlaces-institucionales:http://localhost/sngr/inicio/enlacesinstitucionales.
  $menu_links['navigation_enlaces-institucionales:http://localhost/sngr/inicio/enlacesinstitucionales'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'http://localhost/sngr/inicio/enlacesinstitucionales',
    'router_path' => '',
    'link_title' => 'Enlaces institucionales',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_enlaces-institucionales:http://localhost/sngr/inicio/enlacesinstitucionales',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: navigation_instancia-de-coordinacin:node/add/instancia-de-coordinaci-n-.
  $menu_links['navigation_instancia-de-coordinacin:node/add/instancia-de-coordinaci-n-'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/instancia-de-coordinaci-n-',
    'router_path' => 'node/add/instancia-de-coordinaci-n-',
    'link_title' => 'Instancia de Coordinación',
    'options' => array(
      'attributes' => array(
        'title' => 'El Sistema Nacional de Gestión del Riesgo se estructura por medio de las siguientes "instancias de coordinación". ',
      ),
      'identifier' => 'navigation_instancia-de-coordinacin:node/add/instancia-de-coordinaci-n-',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_montos-ejecucin:node/add/montos-ejecuci-n.
  $menu_links['navigation_montos-ejecucin:node/add/montos-ejecuci-n'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/montos-ejecuci-n',
    'router_path' => 'node/add/montos-ejecuci-n',
    'link_title' => 'Montos Ejecución',
    'options' => array(
      'identifier' => 'navigation_montos-ejecucin:node/add/montos-ejecuci-n',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ayuda');
  t('Creditos');
  t('Decretos');
  t('Detalle de Instancia de Coordinación');
  t('Enlaces institucionales');
  t('Evaluaciones ');
  t('Ficha insumos');
  t('Ficha tecnica');
  t('Informes');
  t('Inicio');
  t('Instancia de Coordinación');
  t('Instancias de coordinación');
  t('Instituciones');
  t('Main menu');
  t('Matriz de cumplimiento');
  t('Montos Ejecución');
  t('Navegación PGE');
  t('Navegación SNGR');
  t('Navigation');
  t('Planes Generales de Emergencia');
  t('Sistema Nacional de Gestión del Riesgo');

  return $menu_links;
}
