<?php
/**
 * @file
 * monitorsngr_pge.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function monitorsngr_pge_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_decreto_de_emergencia';
  $strongarm->value = 0;
  $export['comment_anonymous_decreto_de_emergencia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_peg_ficha_tecnica_compromiso';
  $strongarm->value = 0;
  $export['comment_anonymous_peg_ficha_tecnica_compromiso'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_decreto_de_emergencia';
  $strongarm->value = '1';
  $export['comment_decreto_de_emergencia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_decreto_de_emergencia';
  $strongarm->value = 0;
  $export['comment_default_mode_decreto_de_emergencia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_peg_ficha_tecnica_compromiso';
  $strongarm->value = 0;
  $export['comment_default_mode_peg_ficha_tecnica_compromiso'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_decreto_de_emergencia';
  $strongarm->value = '50';
  $export['comment_default_per_page_decreto_de_emergencia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_peg_ficha_tecnica_compromiso';
  $strongarm->value = '50';
  $export['comment_default_per_page_peg_ficha_tecnica_compromiso'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_decreto_de_emergencia';
  $strongarm->value = 0;
  $export['comment_form_location_decreto_de_emergencia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_peg_ficha_tecnica_compromiso';
  $strongarm->value = 0;
  $export['comment_form_location_peg_ficha_tecnica_compromiso'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_peg_ficha_tecnica_compromiso';
  $strongarm->value = '0';
  $export['comment_peg_ficha_tecnica_compromiso'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_decreto_de_emergencia';
  $strongarm->value = '0';
  $export['comment_preview_decreto_de_emergencia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_peg_ficha_tecnica_compromiso';
  $strongarm->value = '0';
  $export['comment_preview_peg_ficha_tecnica_compromiso'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_decreto_de_emergencia';
  $strongarm->value = 0;
  $export['comment_subject_field_decreto_de_emergencia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_peg_ficha_tecnica_compromiso';
  $strongarm->value = 0;
  $export['comment_subject_field_peg_ficha_tecnica_compromiso'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__decreto_de_emergencia';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__decreto_de_emergencia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__peg_ficha_tecnica_compromiso';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__peg_ficha_tecnica_compromiso'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_decreto_de_emergencia';
  $strongarm->value = '0';
  $export['language_content_type_decreto_de_emergencia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_peg_ficha_tecnica_compromiso';
  $strongarm->value = '0';
  $export['language_content_type_peg_ficha_tecnica_compromiso'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_decreto_de_emergencia';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_decreto_de_emergencia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_peg_ficha_tecnica_compromiso';
  $strongarm->value = array();
  $export['menu_options_peg_ficha_tecnica_compromiso'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_decreto_de_emergencia';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_decreto_de_emergencia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_peg_ficha_tecnica_compromiso';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_peg_ficha_tecnica_compromiso'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_decreto_de_emergencia';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_decreto_de_emergencia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_peg_ficha_tecnica_compromiso';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_peg_ficha_tecnica_compromiso'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_decreto_de_emergencia';
  $strongarm->value = '1';
  $export['node_preview_decreto_de_emergencia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_peg_ficha_tecnica_compromiso';
  $strongarm->value = '1';
  $export['node_preview_peg_ficha_tecnica_compromiso'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_decreto_de_emergencia';
  $strongarm->value = 1;
  $export['node_submitted_decreto_de_emergencia'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_peg_ficha_tecnica_compromiso';
  $strongarm->value = 1;
  $export['node_submitted_peg_ficha_tecnica_compromiso'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_view_disabled'] = $strongarm;

  return $export;
}
