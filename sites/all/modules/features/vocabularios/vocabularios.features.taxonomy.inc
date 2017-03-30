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
    'accion_a_ejecutar' => array(
      'name' => 'Accion a ejecutar',
      'machine_name' => 'accion_a_ejecutar',
      'description' => 'Accion a llevar a cabo',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 1,
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
    'producto' => array(
      'name' => 'Producto',
      'machine_name' => 'producto',
      'description' => 'Taxonomia de productos',
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
    'tipos_de_institucion' => array(
      'name' => 'Tipos de institución',
      'machine_name' => 'tipos_de_institucion',
      'description' => 'Tipos de institución',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -1,
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
      'weight' => -2,
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
