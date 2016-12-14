<?php

/**
 * @file
 * Pluing to render the button to add PGE compromises to one Emergency decree.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Add Compromise to Emergency decree button'),
  'content_types' => 'add_compro_button',
  'description' => t('Allow to the institucional user to add compromises to an existing Emergency decree'),
  'render callback' => 'add_compro_button_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('PGE'),
);

/**
 * Render callback for add_compro_button content type.
 */
function add_compro_button_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  global $language;
  $wrapper = entity_metadata_wrapper('node', $context->data);
  $block = new stdClass();
  $block->title = '';
  $block->content = array();
  $url_options = array(
    'query' => array(
      'decree' => $wrapper->getIdentifier(),
    ),
    'attributes' => array(
      'class' => array(
        'cta',
        'pge-add-compromise-cta',
      ),
      'absolute' => TRUE,
    ),
  );
  $block->content['#markup'] = l(t('Add PGE Compromise'), 'node/add/peg-ficha-tecnica-compromiso', $url_options);
  return $block;
}
