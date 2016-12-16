<?php
/**
 * @file
 * monitorsngr_pge.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function monitorsngr_pge_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_89a5b626-7348-40bd-a205-09a312cbf161';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Compromiso PGE',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'peg_ficha_tecnica_compromiso' => 'peg_ficha_tecnica_compromiso',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'be3b5158-0ec6-4d29-b741-c6e5f86730de';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_89a5b626-7348-40bd-a205-09a312cbf161';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-344e0f76-4670-4e35-90b3-7f2ef2d9da2f';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_decreto_emergencia';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '344e0f76-4670-4e35-90b3-7f2ef2d9da2f';
  $display->content['new-344e0f76-4670-4e35-90b3-7f2ef2d9da2f'] = $pane;
  $display->panels['middle'][0] = 'new-344e0f76-4670-4e35-90b3-7f2ef2d9da2f';
  $pane = new stdClass();
  $pane->pid = 'new-fbb31ff4-823b-4ff5-9045-1d140229867e';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_naturaleza_actividades';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fbb31ff4-823b-4ff5-9045-1d140229867e';
  $display->content['new-fbb31ff4-823b-4ff5-9045-1d140229867e'] = $pane;
  $display->panels['middle'][1] = 'new-fbb31ff4-823b-4ff5-9045-1d140229867e';
  $pane = new stdClass();
  $pane->pid = 'new-1af3f2ad-a54f-41fa-8fe1-15039afc4bdb';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_zona_intervencion';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1af3f2ad-a54f-41fa-8fe1-15039afc4bdb';
  $display->content['new-1af3f2ad-a54f-41fa-8fe1-15039afc4bdb'] = $pane;
  $display->panels['middle'][2] = 'new-1af3f2ad-a54f-41fa-8fe1-15039afc4bdb';
  $pane = new stdClass();
  $pane->pid = 'new-078476c9-8342-46a7-b7ee-db7ff8bd7b21';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_poblacion_meta';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '078476c9-8342-46a7-b7ee-db7ff8bd7b21';
  $display->content['new-078476c9-8342-46a7-b7ee-db7ff8bd7b21'] = $pane;
  $display->panels['middle'][3] = 'new-078476c9-8342-46a7-b7ee-db7ff8bd7b21';
  $pane = new stdClass();
  $pane->pid = 'new-62ae9c74-73f0-41ef-bade-966515061a2c';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_unidad_resposable';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '62ae9c74-73f0-41ef-bade-966515061a2c';
  $display->content['new-62ae9c74-73f0-41ef-bade-966515061a2c'] = $pane;
  $display->panels['middle'][4] = 'new-62ae9c74-73f0-41ef-bade-966515061a2c';
  $pane = new stdClass();
  $pane->pid = 'new-cd8ab8a1-f471-4d5a-ac09-42b377042bbd';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_mecanismos_ejecucion';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'list_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'cd8ab8a1-f471-4d5a-ac09-42b377042bbd';
  $display->content['new-cd8ab8a1-f471-4d5a-ac09-42b377042bbd'] = $pane;
  $display->panels['middle'][5] = 'new-cd8ab8a1-f471-4d5a-ac09-42b377042bbd';
  $pane = new stdClass();
  $pane->pid = 'new-d28888fc-5478-4f8a-8c87-bbeda75dea14';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'pge_compromisos_acciones_obras-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'arguments' => array(
      'nid' => '%node:nid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'd28888fc-5478-4f8a-8c87-bbeda75dea14';
  $display->content['new-d28888fc-5478-4f8a-8c87-bbeda75dea14'] = $pane;
  $display->panels['middle'][6] = 'new-d28888fc-5478-4f8a-8c87-bbeda75dea14';
  $pane = new stdClass();
  $pane->pid = 'new-fe2898ac-005e-49f1-af1c-8862dba8384a';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_resultado_esperado';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'fe2898ac-005e-49f1-af1c-8862dba8384a';
  $display->content['new-fe2898ac-005e-49f1-af1c-8862dba8384a'] = $pane;
  $display->panels['middle'][7] = 'new-fe2898ac-005e-49f1-af1c-8862dba8384a';
  $pane = new stdClass();
  $pane->pid = 'new-0df0d2af-8cc4-420f-9703-fcfa37814f34';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_funcionario_responsable';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '0df0d2af-8cc4-420f-9703-fcfa37814f34';
  $display->content['new-0df0d2af-8cc4-420f-9703-fcfa37814f34'] = $pane;
  $display->panels['middle'][8] = 'new-0df0d2af-8cc4-420f-9703-fcfa37814f34';
  $pane = new stdClass();
  $pane->pid = 'new-fd24810e-c318-49b7-97e3-307c076a9779';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cargo_fun_responsable';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'fd24810e-c318-49b7-97e3-307c076a9779';
  $display->content['new-fd24810e-c318-49b7-97e3-307c076a9779'] = $pane;
  $display->panels['middle'][9] = 'new-fd24810e-c318-49b7-97e3-307c076a9779';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_89a5b626-7348-40bd-a205-09a312cbf161'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_c49dbda0-a1a8-416b-8c38-bd8d0246a1c6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Decreto de Emergencia',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'decreto_de_emergencia' => 'decreto_de_emergencia',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '59807177-b730-44a5-8478-12eac6bcee9b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_c49dbda0-a1a8-416b-8c38-bd8d0246a1c6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-54929c30-b44b-4fbd-82c9-d473c506e0d8';
  $pane->panel = 'middle';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'none',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '54929c30-b44b-4fbd-82c9-d473c506e0d8';
  $display->content['new-54929c30-b44b-4fbd-82c9-d473c506e0d8'] = $pane;
  $display->panels['middle'][0] = 'new-54929c30-b44b-4fbd-82c9-d473c506e0d8';
  $pane = new stdClass();
  $pane->pid = 'new-6528022d-bc12-4504-b74b-19e6f7c4b54b';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_numero_de_decreto';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6528022d-bc12-4504-b74b-19e6f7c4b54b';
  $display->content['new-6528022d-bc12-4504-b74b-19e6f7c4b54b'] = $pane;
  $display->panels['middle'][1] = 'new-6528022d-bc12-4504-b74b-19e6f7c4b54b';
  $pane = new stdClass();
  $pane->pid = 'new-cfc6c763-8b3d-4a19-bf36-2cdb5437d4d5';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_monto_total_asigando';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'number_decimal',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'thousand_separator' => '',
      'decimal_separator' => '.',
      'scale' => '2',
      'prefix_suffix' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'cfc6c763-8b3d-4a19-bf36-2cdb5437d4d5';
  $display->content['new-cfc6c763-8b3d-4a19-bf36-2cdb5437d4d5'] = $pane;
  $display->panels['middle'][2] = 'new-cfc6c763-8b3d-4a19-bf36-2cdb5437d4d5';
  $pane = new stdClass();
  $pane->pid = 'new-29115c13-ed27-42d1-a5e4-eda08ec08670';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_acuerdo_de_junta_directiva';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '29115c13-ed27-42d1-a5e4-eda08ec08670';
  $display->content['new-29115c13-ed27-42d1-a5e4-eda08ec08670'] = $pane;
  $display->panels['middle'][3] = 'new-29115c13-ed27-42d1-a5e4-eda08ec08670';
  $pane = new stdClass();
  $pane->pid = 'new-8356fe7c-7c21-47b2-ada8-7ffaa1a19186';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_numero_de_decreto_del_fini';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '8356fe7c-7c21-47b2-ada8-7ffaa1a19186';
  $display->content['new-8356fe7c-7c21-47b2-ada8-7ffaa1a19186'] = $pane;
  $display->panels['middle'][4] = 'new-8356fe7c-7c21-47b2-ada8-7ffaa1a19186';
  $pane = new stdClass();
  $pane->pid = 'new-cc7c3456-af4d-44c0-855e-266aec00bea1';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_ubicaci_n_geogr_fica';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'cc7c3456-af4d-44c0-855e-266aec00bea1';
  $display->content['new-cc7c3456-af4d-44c0-855e-266aec00bea1'] = $pane;
  $display->panels['middle'][5] = 'new-cc7c3456-af4d-44c0-855e-266aec00bea1';
  $pane = new stdClass();
  $pane->pid = 'new-fb1b8a81-8b74-4ca4-a26e-2832e1e7332c';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sector_estructural_afectad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'fb1b8a81-8b74-4ca4-a26e-2832e1e7332c';
  $display->content['new-fb1b8a81-8b74-4ca4-a26e-2832e1e7332c'] = $pane;
  $display->panels['middle'][6] = 'new-fb1b8a81-8b74-4ca4-a26e-2832e1e7332c';
  $pane = new stdClass();
  $pane->pid = 'new-69a6b3ba-2483-4ea6-adf7-c2866182903a';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_documento_adjunto';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'media',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'file_view_mode' => 'default',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '69a6b3ba-2483-4ea6-adf7-c2866182903a';
  $display->content['new-69a6b3ba-2483-4ea6-adf7-c2866182903a'] = $pane;
  $display->panels['middle'][7] = 'new-69a6b3ba-2483-4ea6-adf7-c2866182903a';
  $pane = new stdClass();
  $pane->pid = 'new-f7958d78-831d-46bd-8f19-4efbab01d4e7';
  $pane->panel = 'middle';
  $pane->type = 'add_compro_button';
  $pane->subtype = 'add_compro_button';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'f7958d78-831d-46bd-8f19-4efbab01d4e7';
  $display->content['new-f7958d78-831d-46bd-8f19-4efbab01d4e7'] = $pane;
  $display->panels['middle'][8] = 'new-f7958d78-831d-46bd-8f19-4efbab01d4e7';
  $pane = new stdClass();
  $pane->pid = 'new-0df71b7a-4a46-4b2e-b8c3-b01b52ce016c';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'compromisos_pge-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '0df71b7a-4a46-4b2e-b8c3-b01b52ce016c';
  $display->content['new-0df71b7a-4a46-4b2e-b8c3-b01b52ce016c'] = $pane;
  $display->panels['middle'][9] = 'new-0df71b7a-4a46-4b2e-b8c3-b01b52ce016c';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-54929c30-b44b-4fbd-82c9-d473c506e0d8';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_c49dbda0-a1a8-416b-8c38-bd8d0246a1c6'] = $handler;

  return $export;
}
