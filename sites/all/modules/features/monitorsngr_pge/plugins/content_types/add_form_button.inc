<?php

/**
 * @file
 * Pluing to render the button to add PGE Supplies to one Emergency decree.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Add Supplies forms to Emergency decree button'),
  'content_types' => 'add_form_button',
  'description' => t('Allow to the institucional user to add Supplies Forms to an existing Emergency decree'),
  'render callback' => 'add_form_button_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('PGE'),
);

/**
 * Render callback for add_form_button content type.
 */
function add_form_button_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  global $user;
  $user_wrapper = entity_metadata_wrapper('user', $user);
  $node_wrapper = entity_metadata_wrapper('node', $context->data);
  $institucional_role = user_role_load_by_name('user-institucional');
  $block = new stdClass();
  $block->title = '';
  $block->content = array();
  if (in_array($institucional_role->rid, $user_wrapper->roles->value())) {
    $url_options = array(
      'query' => array(
        'decree' => $node_wrapper->getIdentifier(),
      ),
      'attributes' => array(
        'class' => array(
          'cta',
          'pge-add-form-cta',
        ),
        'absolute' => TRUE,
      ),
    );
    $block->content['#markup'] = l(t('Add PGE Supplie'), 'node/add/pge-formulario-insumos', $url_options);
  }
  return $block;
}
