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
          "value" : "Nuevo Compromiso de Gesti\\u00f3n",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003ENuevo Compromiso de Gesti\\u00f3n\\u003C\\/p\\u003E\\n"
        },
        {
          "value" : "Buenas se\\u00f1or(a) encargada de la instituci\\u00f3n [message:field-mss-nombre-institucion], se le comunica por este medio que a su instituci\\u00f3n se le asignado un nuevo compromiso de gesti\\u00f3n con el nombre de [message:field-mss-nombre-compromiso], por lo cual la invitamos a continuar con el proceso de autoevaluaci\\u00f3n y viste nuestro sistema lo antes posible. Puese ver el nuevo compromiso en el siguiente link: [message:field-link]",
          "format" : "filtered_html",
          "safe_value" : "\\u003Cp\\u003EBuenas se\\u00f1or(a) encargada de la instituci\\u00f3n [message:field-mss-nombre-institucion], se le comunica por este medio que a su instituci\\u00f3n se le asignado un nuevo compromiso de gesti\\u00f3n con el nombre de [message:field-mss-nombre-compromiso], por lo cual la invitamos a continuar con el proceso de autoevaluaci\\u00f3n y viste nuestro sistema lo antes posible. Puese ver el nuevo compromiso en el siguiente link: [message:field-link]\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}
