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
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-navegaci-n-pge.
  $menus['menu-navegaci-n-pge'] = array(
    'menu_name' => 'menu-navegaci-n-pge',
    'title' => 'Navegación PGE',
    'description' => '',
  );
  // Exported menu: menu-navegaci-n-sngr.
  $menus['menu-navegaci-n-sngr'] = array(
    'menu_name' => 'menu-navegaci-n-sngr',
    'title' => 'Navegación SNGR',
    'description' => '',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Management');
  t('Navegación PGE');
  t('Navegación SNGR');
  t('Navigation');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');

  return $menus;
}
