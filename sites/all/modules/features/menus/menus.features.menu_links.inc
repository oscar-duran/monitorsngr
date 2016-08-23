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

  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Decretos');
  t('Evaluaciones ');
  t('Ficha insumos');
  t('Ficha tecnica');
  t('Home');
  t('Informes');
  t('Inicio');
  t('Instancias de coordinación');
  t('Instituciones');
  t('Matriz de cumplimiento');
  t('Planes Generales de Emergencia');
  t('Sistema Nacional de Gestión del Riesgo');

  return $menu_links;
}
