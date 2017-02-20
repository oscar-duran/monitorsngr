<?php
/**
 * @file
 * vocabularios.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vocabularios_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_lista_2_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_lista_2_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_lista_3_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_lista_3_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_rol_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_rol_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_tipo_instancia_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_tipo_instancia_pattern'] = $strongarm;

  return $export;
}
