<?php
/**
 * @file
 * usuarios_roles_permisos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function usuarios_roles_permisos_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access PDF version'.
  $permissions['access PDF version'] = array(
    'name' => 'access PDF version',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'print_pdf',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'print',
  );

  // Exported permission: 'access printer-friendly version'.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'site_map',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add content to books'.
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer book outlines'.
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer media'.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels display styles'.
  $permissions['administer panels display styles'] = array(
    'name' => 'administer panels display styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels pane styles'.
  $permissions['administer panels pane styles'] = array(
    'name' => 'administer panels pane styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels region styles'.
  $permissions['administer panels region styles'] = array(
    'name' => 'administer panels region styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer paragraphs bundles'.
  $permissions['administer paragraphs bundles'] = array(
    'name' => 'administer paragraphs bundles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'paragraphs',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass access in place editing'.
  $permissions['bypass access in place editing'] = array(
    'name' => 'bypass access in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass paragraphs bundle content access'.
  $permissions['bypass paragraphs bundle content access'] = array(
    'name' => 'bypass paragraphs bundle content access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'paragraphs_bundle_permissions',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear instancias_coordinacion feeds'.
  $permissions['clear instancias_coordinacion feeds'] = array(
    'name' => 'clear instancias_coordinacion feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear instituciones feeds'.
  $permissions['clear instituciones feeds'] = array(
    'name' => 'clear instituciones feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear monto_ejecucion feeds'.
  $permissions['clear monto_ejecucion feeds'] = array(
    'name' => 'clear monto_ejecucion feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear paginas_basicas feeds'.
  $permissions['clear paginas_basicas feeds'] = array(
    'name' => 'clear paginas_basicas feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear usuarios feeds'.
  $permissions['clear usuarios feeds'] = array(
    'name' => 'clear usuarios feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create autoevaluacion content'.
  $permissions['create autoevaluacion content'] = array(
    'name' => 'create autoevaluacion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create bitacora_moderacion_contenido content'.
  $permissions['create bitacora_moderacion_contenido content'] = array(
    'name' => 'create bitacora_moderacion_contenido content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create book content'.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create compromiso_de_gestion content'.
  $permissions['create compromiso_de_gestion content'] = array(
    'name' => 'create compromiso_de_gestion content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create decreto_de_emergencia content'.
  $permissions['create decreto_de_emergencia content'] = array(
    'name' => 'create decreto_de_emergencia content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create instancia_coordinacion content'.
  $permissions['create instancia_coordinacion content'] = array(
    'name' => 'create instancia_coordinacion content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create institucion content'.
  $permissions['create institucion content'] = array(
    'name' => 'create institucion content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create item_compromiso content'.
  $permissions['create item_compromiso content'] = array(
    'name' => 'create item_compromiso content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create meta content'.
  $permissions['create meta content'] = array(
    'name' => 'create meta content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create new books'.
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create producto_meta content'.
  $permissions['create producto_meta content'] = array(
    'name' => 'create producto_meta content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create respuestas_autoevaluacion content'.
  $permissions['create respuestas_autoevaluacion content'] = array(
    'name' => 'create respuestas_autoevaluacion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create sngr_compromiso content'.
  $permissions['create sngr_compromiso content'] = array(
    'name' => 'create sngr_compromiso content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create sngr_compromiso_detalle content'.
  $permissions['create sngr_compromiso_detalle content'] = array(
    'name' => 'create sngr_compromiso_detalle content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any autoevaluacion content'.
  $permissions['delete any autoevaluacion content'] = array(
    'name' => 'delete any autoevaluacion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any bitacora_moderacion_contenido content'.
  $permissions['delete any bitacora_moderacion_contenido content'] = array(
    'name' => 'delete any bitacora_moderacion_contenido content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any book content'.
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any compromiso_de_gestion content'.
  $permissions['delete any compromiso_de_gestion content'] = array(
    'name' => 'delete any compromiso_de_gestion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any decreto_de_emergencia content'.
  $permissions['delete any decreto_de_emergencia content'] = array(
    'name' => 'delete any decreto_de_emergencia content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any instancia_coordinacion content'.
  $permissions['delete any instancia_coordinacion content'] = array(
    'name' => 'delete any instancia_coordinacion content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any institucion content'.
  $permissions['delete any institucion content'] = array(
    'name' => 'delete any institucion content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any item_compromiso content'.
  $permissions['delete any item_compromiso content'] = array(
    'name' => 'delete any item_compromiso content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any meta content'.
  $permissions['delete any meta content'] = array(
    'name' => 'delete any meta content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any producto_meta content'.
  $permissions['delete any producto_meta content'] = array(
    'name' => 'delete any producto_meta content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any respuestas_autoevaluacion content'.
  $permissions['delete any respuestas_autoevaluacion content'] = array(
    'name' => 'delete any respuestas_autoevaluacion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sngr_compromiso content'.
  $permissions['delete any sngr_compromiso content'] = array(
    'name' => 'delete any sngr_compromiso content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sngr_compromiso_detalle content'.
  $permissions['delete any sngr_compromiso_detalle content'] = array(
    'name' => 'delete any sngr_compromiso_detalle content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own autoevaluacion content'.
  $permissions['delete own autoevaluacion content'] = array(
    'name' => 'delete own autoevaluacion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own bitacora_moderacion_contenido content'.
  $permissions['delete own bitacora_moderacion_contenido content'] = array(
    'name' => 'delete own bitacora_moderacion_contenido content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own book content'.
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own compromiso_de_gestion content'.
  $permissions['delete own compromiso_de_gestion content'] = array(
    'name' => 'delete own compromiso_de_gestion content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own decreto_de_emergencia content'.
  $permissions['delete own decreto_de_emergencia content'] = array(
    'name' => 'delete own decreto_de_emergencia content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own instancia_coordinacion content'.
  $permissions['delete own instancia_coordinacion content'] = array(
    'name' => 'delete own instancia_coordinacion content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own institucion content'.
  $permissions['delete own institucion content'] = array(
    'name' => 'delete own institucion content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own item_compromiso content'.
  $permissions['delete own item_compromiso content'] = array(
    'name' => 'delete own item_compromiso content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own meta content'.
  $permissions['delete own meta content'] = array(
    'name' => 'delete own meta content',
    'roles' => array(
      'analista-sngr' => 'analista-sngr',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own producto_meta content'.
  $permissions['delete own producto_meta content'] = array(
    'name' => 'delete own producto_meta content',
    'roles' => array(
      'analista-sngr' => 'analista-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own respuestas_autoevaluacion content'.
  $permissions['delete own respuestas_autoevaluacion content'] = array(
    'name' => 'delete own respuestas_autoevaluacion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sngr_compromiso content'.
  $permissions['delete own sngr_compromiso content'] = array(
    'name' => 'delete own sngr_compromiso content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sngr_compromiso_detalle content'.
  $permissions['delete own sngr_compromiso_detalle content'] = array(
    'name' => 'delete own sngr_compromiso_detalle content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in accion_a_ejecutar'.
  $permissions['delete terms in accion_a_ejecutar'] = array(
    'name' => 'delete terms in accion_a_ejecutar',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in accion_estrategica'.
  $permissions['delete terms in accion_estrategica'] = array(
    'name' => 'delete terms in accion_estrategica',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ambito'.
  $permissions['delete terms in ambito'] = array(
    'name' => 'delete terms in ambito',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in ambito_eje_lineamiento_accion'.
  $permissions['delete terms in ambito_eje_lineamiento_accion'] = array(
    'name' => 'delete terms in ambito_eje_lineamiento_accion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in eje'.
  $permissions['delete terms in eje'] = array(
    'name' => 'delete terms in eje',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in lineamiento'.
  $permissions['delete terms in lineamiento'] = array(
    'name' => 'delete terms in lineamiento',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in meta'.
  $permissions['delete terms in meta'] = array(
    'name' => 'delete terms in meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in producto'.
  $permissions['delete terms in producto'] = array(
    'name' => 'delete terms in producto',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in provincia_canton_distrito'.
  $permissions['delete terms in provincia_canton_distrito'] = array(
    'name' => 'delete terms in provincia_canton_distrito',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in sector_estructural_afectado'.
  $permissions['delete terms in sector_estructural_afectado'] = array(
    'name' => 'delete terms in sector_estructural_afectado',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tipos_de_institucion'.
  $permissions['delete terms in tipos_de_institucion'] = array(
    'name' => 'delete terms in tipos_de_institucion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tipos_instancia'.
  $permissions['delete terms in tipos_instancia'] = array(
    'name' => 'delete terms in tipos_instancia',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any autoevaluacion content'.
  $permissions['edit any autoevaluacion content'] = array(
    'name' => 'edit any autoevaluacion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any bitacora_moderacion_contenido content'.
  $permissions['edit any bitacora_moderacion_contenido content'] = array(
    'name' => 'edit any bitacora_moderacion_contenido content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any book content'.
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any compromiso_de_gestion content'.
  $permissions['edit any compromiso_de_gestion content'] = array(
    'name' => 'edit any compromiso_de_gestion content',
    'roles' => array(
      'analista-sngr' => 'analista-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any decreto_de_emergencia content'.
  $permissions['edit any decreto_de_emergencia content'] = array(
    'name' => 'edit any decreto_de_emergencia content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any instancia_coordinacion content'.
  $permissions['edit any instancia_coordinacion content'] = array(
    'name' => 'edit any instancia_coordinacion content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any institucion content'.
  $permissions['edit any institucion content'] = array(
    'name' => 'edit any institucion content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any item_compromiso content'.
  $permissions['edit any item_compromiso content'] = array(
    'name' => 'edit any item_compromiso content',
    'roles' => array(
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any meta content'.
  $permissions['edit any meta content'] = array(
    'name' => 'edit any meta content',
    'roles' => array(
      'analista-sngr' => 'analista-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any producto_meta content'.
  $permissions['edit any producto_meta content'] = array(
    'name' => 'edit any producto_meta content',
    'roles' => array(
      'analista-sngr' => 'analista-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any respuestas_autoevaluacion content'.
  $permissions['edit any respuestas_autoevaluacion content'] = array(
    'name' => 'edit any respuestas_autoevaluacion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sngr_compromiso content'.
  $permissions['edit any sngr_compromiso content'] = array(
    'name' => 'edit any sngr_compromiso content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sngr_compromiso_detalle content'.
  $permissions['edit any sngr_compromiso_detalle content'] = array(
    'name' => 'edit any sngr_compromiso_detalle content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit media'.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own autoevaluacion content'.
  $permissions['edit own autoevaluacion content'] = array(
    'name' => 'edit own autoevaluacion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own bitacora_moderacion_contenido content'.
  $permissions['edit own bitacora_moderacion_contenido content'] = array(
    'name' => 'edit own bitacora_moderacion_contenido content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own book content'.
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own compromiso_de_gestion content'.
  $permissions['edit own compromiso_de_gestion content'] = array(
    'name' => 'edit own compromiso_de_gestion content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'analista-sngr' => 'analista-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own decreto_de_emergencia content'.
  $permissions['edit own decreto_de_emergencia content'] = array(
    'name' => 'edit own decreto_de_emergencia content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own instancia_coordinacion content'.
  $permissions['edit own instancia_coordinacion content'] = array(
    'name' => 'edit own instancia_coordinacion content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own institucion content'.
  $permissions['edit own institucion content'] = array(
    'name' => 'edit own institucion content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own item_compromiso content'.
  $permissions['edit own item_compromiso content'] = array(
    'name' => 'edit own item_compromiso content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own meta content'.
  $permissions['edit own meta content'] = array(
    'name' => 'edit own meta content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'analista-sngr' => 'analista-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own producto_meta content'.
  $permissions['edit own producto_meta content'] = array(
    'name' => 'edit own producto_meta content',
    'roles' => array(
      'analista-sngr' => 'analista-sngr',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own respuestas_autoevaluacion content'.
  $permissions['edit own respuestas_autoevaluacion content'] = array(
    'name' => 'edit own respuestas_autoevaluacion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sngr_compromiso content'.
  $permissions['edit own sngr_compromiso content'] = array(
    'name' => 'edit own sngr_compromiso content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sngr_compromiso_detalle content'.
  $permissions['edit own sngr_compromiso_detalle content'] = array(
    'name' => 'edit own sngr_compromiso_detalle content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in accion_a_ejecutar'.
  $permissions['edit terms in accion_a_ejecutar'] = array(
    'name' => 'edit terms in accion_a_ejecutar',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in accion_estrategica'.
  $permissions['edit terms in accion_estrategica'] = array(
    'name' => 'edit terms in accion_estrategica',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ambito'.
  $permissions['edit terms in ambito'] = array(
    'name' => 'edit terms in ambito',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ambito_eje_lineamiento_accion'.
  $permissions['edit terms in ambito_eje_lineamiento_accion'] = array(
    'name' => 'edit terms in ambito_eje_lineamiento_accion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in eje'.
  $permissions['edit terms in eje'] = array(
    'name' => 'edit terms in eje',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in lineamiento'.
  $permissions['edit terms in lineamiento'] = array(
    'name' => 'edit terms in lineamiento',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in meta'.
  $permissions['edit terms in meta'] = array(
    'name' => 'edit terms in meta',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in producto'.
  $permissions['edit terms in producto'] = array(
    'name' => 'edit terms in producto',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in provincia_canton_distrito'.
  $permissions['edit terms in provincia_canton_distrito'] = array(
    'name' => 'edit terms in provincia_canton_distrito',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in sector_estructural_afectado'.
  $permissions['edit terms in sector_estructural_afectado'] = array(
    'name' => 'edit terms in sector_estructural_afectado',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tipos_de_institucion'.
  $permissions['edit terms in tipos_de_institucion'] = array(
    'name' => 'edit terms in tipos_de_institucion',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tipos_instancia'.
  $permissions['edit terms in tipos_instancia'] = array(
    'name' => 'edit terms in tipos_instancia',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'entityconnect add button'.
  $permissions['entityconnect add button'] = array(
    'name' => 'entityconnect add button',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityconnect',
  );

  // Exported permission: 'entityconnect edit button'.
  $permissions['entityconnect edit button'] = array(
    'name' => 'entityconnect edit button',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityconnect',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'export taxonomy by csv'.
  $permissions['export taxonomy by csv'] = array(
    'name' => 'export taxonomy by csv',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_csv',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import instancias_coordinacion feeds'.
  $permissions['import instancias_coordinacion feeds'] = array(
    'name' => 'import instancias_coordinacion feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import instituciones feeds'.
  $permissions['import instituciones feeds'] = array(
    'name' => 'import instituciones feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'import monto_ejecucion feeds'.
  $permissions['import monto_ejecucion feeds'] = array(
    'name' => 'import monto_ejecucion feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import or export menu'.
  $permissions['import or export menu'] = array(
    'name' => 'import or export menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_import',
  );

  // Exported permission: 'import paginas_basicas feeds'.
  $permissions['import paginas_basicas feeds'] = array(
    'name' => 'import paginas_basicas feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import taxonomy by csv'.
  $permissions['import taxonomy by csv'] = array(
    'name' => 'import taxonomy by csv',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_csv',
  );

  // Exported permission: 'import usuarios feeds'.
  $permissions['import usuarios feeds'] = array(
    'name' => 'import usuarios feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'unlock instancias_coordinacion feeds'.
  $permissions['unlock instancias_coordinacion feeds'] = array(
    'name' => 'unlock instancias_coordinacion feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock instituciones feeds'.
  $permissions['unlock instituciones feeds'] = array(
    'name' => 'unlock instituciones feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock monto_ejecucion feeds'.
  $permissions['unlock monto_ejecucion feeds'] = array(
    'name' => 'unlock monto_ejecucion feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock paginas_basicas feeds'.
  $permissions['unlock paginas_basicas feeds'] = array(
    'name' => 'unlock paginas_basicas feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock usuarios feeds'.
  $permissions['unlock usuarios feeds'] = array(
    'name' => 'unlock usuarios feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'use PHP for title patterns'.
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'auto_nodetitle',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use bulk exporter'.
  $permissions['use bulk exporter'] = array(
    'name' => 'use bulk exporter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bulk_export',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format editor_gr_fico'.
  $permissions['use text format editor_gr_fico'] = array(
    'name' => 'use text format editor_gr_fico',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'authenticated user' => 'authenticated user',
      'user-alternativo' => 'user-alternativo',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view media'.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
      'analista-sngr' => 'analista-sngr',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'user-alternativo' => 'user-alternativo',
      'user-institucional' => 'user-institucional',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'admin-sngr' => 'admin-sngr',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
