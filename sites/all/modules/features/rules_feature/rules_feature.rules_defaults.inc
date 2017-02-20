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
  $items['rules_regla_4'] = entity_import('rules_config', '{ "rules_regla_4" : {
      "LABEL" : "Regla de moderacion 4",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--compromiso_de_gestion" : { "bundle" : "compromiso_de_gestion" } },
      "IF" : [
        { "data_is" : {
            "data" : [ "node:field-notificar-analista" ],
            "value" : "Autoevaluacion lista"
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "8" : "8" } },
            "subject" : "Compromiso listo para autoevaluacion \\r\\n[site:name]",
            "message" : "El compromiso ya se encuentra en estado listo para revision."
          }
        }
      ]
    }
  }');
  $items['rules_regla_de_moderaci_n_1'] = entity_import('rules_config', '{ "rules_regla_de_moderaci_n_1" : {
      "LABEL" : "Regla de Moderaci\\u00f3n 1",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "Solicitud de cuenta de Usuario Institucional.",
            "message" : "Estimado equipo de la Unidad de Desarrollo Estrat\\u00e9gico del Sistema Nacional de Gesti\\u00f3n del Riesgo, \\r\\nComisi\\u00f3n Nacional de Prevenci\\u00f3n de Riesgos y Atenci\\u00f3n de Emergencias.\\r\\n  \\r\\nEl usuario [account:name], ha solicitado permisos para ingresar al Sistema Monitor de Compromisos de Gesti\\u00f3n como Usuario Institucional (Enlace institucional). \\r\\n\\r\\n Atentamente,  \\r\\n[account:name]\\r\\nEnlace institucional \\r\\n[account:field_institucion]"
          }
        }
      ]
    }
  }');
  $items['rules_rule_5'] = entity_import('rules_config', '{ "rules_rule_5" : {
      "LABEL" : "Regla de moderacion 5",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--compromiso_de_gestion" : { "bundle" : "compromiso_de_gestion" } },
      "IF" : [
        { "OR" : [
            { "data_is" : {
                "data" : [ "node:field-notificar-institucional" ],
                "value" : "Aprobado"
              }
            },
            { "data_is" : {
                "data" : [ "node:field-notificar-institucional" ],
                "value" : "Sin aprobacion"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "8" : "8" } },
            "subject" : "Autoevaluacion revisada",
            "message" : "Su autoevaluacion ha sido revisada.\\r\\nEstado: [node:field-notificar-institucional]"
          }
        }
      ]
    }
  }');
  $items['rules_rule_regla_3'] = entity_import('rules_config', '{ "rules_rule_regla_3" : {
      "LABEL" : "Regla de Moderaci\\u00f3n 3",
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
        { "data_set" : {
            "data" : [ "entity-created:field-mss-nombre-institucion" ],
            "value" : [ "node:field-institucion:title" ]
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-link" ], "value" : "[node:url]" } },
        { "data_set" : {
            "data" : [ "entity-created:field-mss-dirigido-a" ],
            "value" : [ "node:field-institucion:field-enlace-institucional:name" ]
          }
        },
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
