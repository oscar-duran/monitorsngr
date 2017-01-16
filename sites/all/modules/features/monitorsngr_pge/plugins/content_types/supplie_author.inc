<?php

/**
 * @file
 * Pluing to render related information of the Supplie form author.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Show related information of the Supplie form author'),
  'content_types' => 'supplie_author',
  'description' => t('render related information of the Supplie form author.'),
  'render callback' => 'supplie_author_render',
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'category' => t('PGE'),
);

/**
 * Render callback for supplie_author content type.
 */
function supplie_author_render($subtype, $conf, $panel_args, $context) {
  // Build the content type block.
  $node_wrapper = entity_metadata_wrapper('node', $context->data);
  $block = new stdClass();
  $block->title = t('Reporting Officer');
  $block->content = array();
  $variables = array(
    'name' => array(
      'value' => $node_wrapper->author->field_nombre->value() . ' ' . $node_wrapper->author->field_apellido1->value() . ' ' . $node_wrapper->author->field_apellido2->value(),
      'label' => t('Name'),
    ),
    'position' => array(
      'value' => $node_wrapper->author->field_cargo->value(),
      'label' => t('Position'),
    ),
    'phone' => array(
      'value' => $node_wrapper->author->field_telefono->value(),
      'label' => t('Phone number'),
    ),
    'mail' => array(
      'value' => $node_wrapper->author->mail->value(),
      'label' => t('mail'),
    ),
  );
  $block->content['#markup'] = theme('monitorsngr_pge_supplie_form_author_info', $variables);
  return $block;
}
