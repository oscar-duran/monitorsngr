<?php
/**
 * @file
 * messages_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function messages_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_message_type().
 */
function messages_type_default_message_type() {
  $items = array();
  $items['regla_3'] = entity_import('message_type', '{
    "name" : "regla_3",
    "description" : "Regla de Moderaci\\u00f3n 3: Nuevo Compromiso de Gesti\\u00f3n",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "es",
    "arguments" : null,
    "message_text" : { "es" : [
        {
          "value" : "Compromiso institucional asignado",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003ECompromiso institucional asignado\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Estimado(a) [message:field_mss_dirigido_a]. \\r\\nEnlace institucional \\r\\n[message:field_mss_nombre_institucion]\\r\\n\\r\\nLe invitamos a revisar los compromisos institucioales que han sido asignados a su instituci\\u00f3n, para el cumplimiento del Plan Nacional de Gestion del Riesgo [current-date:custom:Y]. Una vez dentro del Sistema, deber\\u00e1 realizar el proceso de autoevaluaci\\u00f3n de cada compromiso.                                                                      Recuerde ingresar al Sistema Monitor, con el nombre de usuario y contrase\\u00f1a proporcionados anteriormente.  \\r\\n\\r\\nAtentamente,  \\r\\nUnidad de Desarrollo Estrat\\u00e9gico del Sistema Nacional de Gesti\\u00f3n del Riesgo \\r\\nComisi\\u00f3n Nacional de Prevenci\\u00f3n de Riesgos y Atenci\\u00f3n de Emergencias.",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003EEstimado(a) [message:field_mss_dirigido_a].\\u003Cbr \\/\\u003E\\nEnlace institucional\\u003Cbr \\/\\u003E\\n[message:field_mss_nombre_institucion]\\u003C\\/p\\u003E\\n\\u003Cp\\u003ELe invitamos a revisar los compromisos institucioales que han sido asignados a su instituci\\u00f3n, para el cumplimiento del Plan Nacional de Gestion del Riesgo [current-date:custom:Y]. Una vez dentro del Sistema, deber\\u00e1 realizar el proceso de autoevaluaci\\u00f3n de cada compromiso.                                                                      Recuerde ingresar al Sistema Monitor, con el nombre de usuario y contrase\\u00f1a proporcionados anteriormente.  \\u003C\\/p\\u003E\\n\\u003Cp\\u003EAtentamente,\\u003Cbr \\/\\u003E\\nUnidad de Desarrollo Estrat\\u00e9gico del Sistema Nacional de Gesti\\u00f3n del Riesgo\\u003Cbr \\/\\u003E\\nComisi\\u00f3n Nacional de Prevenci\\u00f3n de Riesgos y Atenci\\u00f3n de Emergencias.\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
