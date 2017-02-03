<?php
/**
 * @file
 * rules_feature.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rules_feature_default_rules_configuration() {
  $items = array();
  $items['rules_rule_regla_3'] = entity_import('rules_config', '{ "rules_rule_regla_3" : {
      "LABEL" : "Regla de Moderaci\\u00f3n 3: Nuevo Compromiso",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "message_notify" ],
      "ON" : { "node_insert--compromiso_de_gestion" : { "bundle" : "compromiso_de_gestion" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-institucion:type" ], "value" : "institucion" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "message",
              "param_type" : "regla_3",
              "param_user" : [ "site:current-user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-mss-nombre-compromiso" ],
            "value" : "[node:title]"
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-link" ], "value" : "[node:url]" } },
        { "message_notify_process" : {
            "message" : [ "entity-created" ],
            "mail" : [ "node:field-institucion:field-enlace-institucional:mail" ]
          }
        }
      ]
    }
  }');
  return $items;
}
