<?php
/**
 * @file
 * tipos_de_contenido_monitor.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function tipos_de_contenido_monitor_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-instancia_de_coordinaci_n_-body'.
  $field_instances['node-instancia_de_coordinaci_n_-body'] = array(
    'bundle' => 'instancia_de_coordinaci_n_',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'node-instancia_de_coordinaci_n_-field_atributostipoinstancia'.
  $field_instances['node-instancia_de_coordinaci_n_-field_atributostipoinstancia'] = array(
    'bundle' => 'instancia_de_coordinaci_n_',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Atributos tipo de instancia',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_atributostipoinstancia',
    'label' => 'AtributosTipoInstancia',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'node-instancia_de_coordinaci_n_-field_instancia_'.
  $field_instances['node-instancia_de_coordinaci_n_-field_instancia_'] = array(
    'bundle' => 'instancia_de_coordinaci_n_',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Nombre de la instancia',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_instancia_',
    'label' => 'Instancia ',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => -2,
    ),
  );

  // Exported field_instance:
  // 'node-instancia_de_coordinaci_n_-field_instituci_n_'.
  $field_instances['node-instancia_de_coordinaci_n_-field_instituci_n_'] = array(
    'bundle' => 'instancia_de_coordinaci_n_',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Nombre de la institución',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_instituci_n_',
    'label' => 'Institución ',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => -3,
    ),
  );

  // Exported field_instance:
  // 'node-instancia_de_coordinaci_n_-field_tipoinstancia'.
  $field_instances['node-instancia_de_coordinaci_n_-field_tipoinstancia'] = array(
    'bundle' => 'instancia_de_coordinaci_n_',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Tipo de instancia',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_tipoinstancia',
    'label' => 'TipoInstancia',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 100,
      ),
      'type' => 'text_textfield',
      'weight' => -1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Atributos tipo de instancia');
  t('AtributosTipoInstancia');
  t('Body');
  t('Instancia ');
  t('Institución ');
  t('Nombre de la instancia');
  t('Nombre de la institución');
  t('Tipo de instancia');
  t('TipoInstancia');

  return $field_instances;
}
