<?php
/**
 * @file
 * menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-navigation-pge.
  $menus['menu-navigation-pge'] = array(
    'menu_name' => 'menu-navigation-pge',
    'title' => 'Navegación PGE',
    'description' => '',
  );
  // Exported menu: menu-navigation-sngr.
  $menus['menu-navigation-sngr'] = array(
    'menu_name' => 'menu-navigation-sngr',
    'title' => 'Navegación SNGR',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Navegación PGE');
  t('Navegación SNGR');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
