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
      "REQUIRES" : [ "webform_rules", "rules" ],
      "ON" : { "webform_rules_submit" : [] },
      "IF" : [
        { "webform_has_id" : {
            "form_id" : [ "form_id" ],
            "selected_webform" : { "value" : { "webform-client-form-150" : "webform-client-form-150" } }
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "Solicitud de cuenta.",
            "message" : "Se ha hecho una nueva solicitud de cuenta para el Sistema Nacional de Gesti\\u00f3n de Riesgos, para poder visualizarla puede ingresar al siguiente link: [node:url]\\/webform-results"
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
