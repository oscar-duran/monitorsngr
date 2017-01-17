<?php
/**
 * @file
 * vocabularios.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vocabularios_taxonomy_default_vocabularies() {
  return array(
    'tipos_de_institucion' => array(
      'name' => 'Tipos de institución',
      'machine_name' => 'tipos_de_institucion',
      'description' => 'Tipos de institución',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'tipos_instancia' => array(
      'name' => 'Tipos de instancia',
      'machine_name' => 'tipos_instancia',
      'description' => 'Tipos de instancia',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
