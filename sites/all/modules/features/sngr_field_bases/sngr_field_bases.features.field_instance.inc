<?php
/**
 * @file
 * sngr_field_bases.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sngr_field_bases_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-compromiso_de_gestion-field_accion_ejecutar'.
  $field_instances['node-compromiso_de_gestion-field_accion_ejecutar'] = array(
    'bundle' => 'compromiso_de_gestion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_accion_ejecutar',
    'label' => 'Acción a seguir',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-instancia_coordinacion-field_agregar_integrantes'.
  $field_instances['node-instancia_coordinacion-field_agregar_integrantes'] = array(
    'bundle' => 'instancia_coordinacion',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'entityconnect' => array(
      'button' => array(
        'unload_add_button' => 1,
        'unload_edit_button' => 1,
      ),
      'icon' => array(
        'show_add_icon' => 0,
        'show_edit_icon' => 0,
      ),
    ),
    'field_name' => 'field_agregar_integrantes',
    'label' => 'Integrantes',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_clone' => 0,
          'allow_existing' => 0,
          'allow_new' => 1,
          'delete_references' => 0,
          'label_plural' => 'nodes',
          'label_singular' => 'nodo',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-instancia_coordinacion-field_primera_lista'.
  $field_instances['node-instancia_coordinacion-field_primera_lista'] = array(
    'bundle' => 'instancia_coordinacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_primera_lista',
    'label' => 'Tipo de instancia',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-instancia_coordinacion-field_subinstancia2'.
  $field_instances['node-instancia_coordinacion-field_subinstancia2'] = array(
    'bundle' => 'instancia_coordinacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_subinstancia2',
    'label' => 'Subtipo instancia',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-instancia_coordinacion-field_subtipo_instancia'.
  $field_instances['node-instancia_coordinacion-field_subtipo_instancia'] = array(
    'bundle' => 'instancia_coordinacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_subtipo_instancia',
    'label' => 'Subtipo instancia',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-instancia_coordinacion-field_subtipo_instancia3'.
  $field_instances['node-instancia_coordinacion-field_subtipo_instancia3'] = array(
    'bundle' => 'instancia_coordinacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_subtipo_instancia3',
    'label' => 'Subtipo instancia',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-instancia_coordinacion-field_ubicaci_n_geogr_fica'.
  $field_instances['node-instancia_coordinacion-field_ubicaci_n_geogr_fica'] = array(
    'bundle' => 'instancia_coordinacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'shs',
        'settings' => array(
          'linked' => FALSE,
        ),
        'type' => 'shs_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ubicaci_n_geogr_fica',
    'label' => 'Provincia, Cantón, Distrito',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'shs',
      'settings' => array(
        'shs' => array(
          'create_new_levels' => 0,
          'create_new_terms' => 0,
          'force_deepest' => 1,
          'node_count' => 0,
        ),
      ),
      'type' => 'taxonomy_shs',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-meta-field_status_autoevaluacion'.
  $field_instances['node-meta-field_status_autoevaluacion'] = array(
    'bundle' => 'meta',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_status_autoevaluacion',
    'label' => 'Estado autoevaluación',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-producto_meta-field_institucion_administradora'.
  $field_instances['node-producto_meta-field_institucion_administradora'] = array(
    'bundle' => 'producto_meta',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'entityconnect' => array(
      'button' => array(
        'unload_add_button' => 1,
        'unload_edit_button' => 1,
      ),
      'icon' => array(
        'show_add_icon' => 0,
        'show_edit_icon' => 0,
      ),
    ),
    'field_name' => 'field_institucion_administradora',
    'label' => 'Instituciones Involucradas',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'taxonomy_term-ambito-field_auto_inc_ambito'.
  $field_instances['taxonomy_term-ambito-field_auto_inc_ambito'] = array(
    'bundle' => 'ambito',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'serial',
        'settings' => array(),
        'type' => 'serial_formatter_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_auto_inc_ambito',
    'label' => 'Auto inc ambito',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'serial',
      'settings' => array(),
      'type' => 'serial_widget_default',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-eje-field_auto_inc_eje'.
  $field_instances['taxonomy_term-eje-field_auto_inc_eje'] = array(
    'bundle' => 'eje',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'serial',
        'settings' => array(),
        'type' => 'serial_formatter_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_auto_inc_eje',
    'label' => 'Auto inc eje',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'serial',
      'settings' => array(),
      'type' => 'serial_widget_default',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-lineamiento-field_auto_inc_lin'.
  $field_instances['taxonomy_term-lineamiento-field_auto_inc_lin'] = array(
    'bundle' => 'lineamiento',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'serial',
        'settings' => array(),
        'type' => 'serial_formatter_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_auto_inc_lin',
    'label' => 'Auto inc lineamiento',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'serial',
      'settings' => array(),
      'type' => 'serial_widget_default',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Acción a seguir');
  t('Auto inc ambito');
  t('Auto inc eje');
  t('Auto inc lineamiento');
  t('Estado autoevaluación');
  t('Instituciones Involucradas');
  t('Integrantes');
  t('Provincia, Cantón, Distrito');
  t('Status autoevaluacion');
  t('Subtipo instancia');
  t('Tipo de instancia');

  return $field_instances;
}
