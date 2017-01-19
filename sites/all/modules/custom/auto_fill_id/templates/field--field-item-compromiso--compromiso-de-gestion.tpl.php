<?php
/**
 * @file field--field-item-compromiso--compromiso-de-gestion.tpl.php
 * Default template implementation to display the value of a field.
 *
 * This file is not used and is here as a starting point for customization only.
 * @see theme_field()
 *
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 *
 * @ingroup themeable
 */
drupal_add_css(drupal_get_path('module', 'auto_fill_id') . '/css/compromisos_table.css');
?>



<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
   
  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>

  <div class="field-items"<?php print $content_attributes; ?>>
    <table id="single-compromiso-table" class="compromisos_table">
      <thead>
        <th>Eje</th>
        <th>Ambito</th>
        <th>Lineamiento</th>
        <th>Acción Estratégica</th>
        <th>Meta</th>
        <th>Productos</th>
      </thead>
      <tbody>
      <?php foreach ($items as $delta => $item): ?>
        <?php $fields_item_compromiso = $item['entity']['field_collection_item']; ?>
        <?php
            $row_id = 'row-item-' . $delta;
            dpm($item);
        ?>
        <?php foreach ($fields_item_compromiso as $element): ?>
        <tr id="<?php print $row_id ?>">
          <?php

            $accion_id = $element['field_accion_collect']['#items'][0]['value'];
            $accion_estrategica = $element['field_accion_collect'][0]['entity']['field_collection_item'][$accion_id];

            $acciones_cant = sizeof($element['field_accion_collect']['#items']);
            $meta_cant = 0;
            $productos_cant = 0;
            foreach($element['field_accion_collect']['#items'] as $i => $action_id) {
              $meta_cant += isset($element['field_accion_collect'][$i]['entity']['field_collection_item'][$action_id['value']]['field_meta']) ?
                   sizeof($element['field_accion_collect'][$i]['entity']['field_collection_item'][$action_id['value']]['field_meta']['#items']) : 1;
            }
            $item_rowspan = $acciones_cant > $meta_cant ? $acciones_cant : $meta_cant;
            $odd_even_class = $delta % 2 ? 'odd' : 'even';
          ?>
          <!--<div class="field-item <?php //print $delta % 2 ? 'odd' : 'even'; ?>"<?php //print $item_attributes[$delta]; ?>>-->
          <!--Taxonomias-->
          <td rowspan="<?php print $item_rowspan ?>" class="taxonomy-td-item-<?php print $delta ?> <?php print $odd_even_class; ?>">
            <?php print render($element['field_codigo_eje']); ?>
          </td>
          <td rowspan="<?php print $item_rowspan ?>" class="taxonomy-td-item-<?php print $delta ?> <?php print $odd_even_class; ?>">
            <?php print render($element['field_codigo_ambito']); ?>
          </td>
          <td rowspan="<?php print $item_rowspan ?>" class="taxonomy-td-item-<?php print $delta ?> <?php print $odd_even_class; ?>">
            <?php print render($element['field_codigo_lineamiento']); ?>
          </td>

          <?php foreach($element['field_accion_collect']['#items'] as $i => $action_id) : ?>
            <?php if ($i > 0) :  ?><tr> <?php endif; ?>
              <?php $action_rowspan = isset($element['field_accion_collect'][$i]['entity']['field_collection_item'][$action_id['value']]['field_meta']['#items']) ?
                                    sizeof($element['field_accion_collect'][$i]['entity']['field_collection_item'][$action_id['value']]['field_meta']['#items']) : 1?>
              <td rowspan="<?php print $action_rowspan ?>" class="<?php print $odd_even_class; ?>">
                <?php
                    print render($element['field_accion_collect'][$i]['entity']['field_collection_item'][$action_id['value']]['field_codigo_accion_estrategica']);
                ?>
              </td>
              <!--Meta-->
                <?php if(!isset($element['field_accion_collect'][$i]['entity']['field_collection_item'][$action_id['value']]['field_meta'])) : ?>
                    <td class="<?php print $odd_even_class; ?>"></td>
                    <td class="<?php print $odd_even_class; ?>"></td>
            <?php else : ?>
              <?php foreach ($element['field_accion_collect'][$i]['entity']['field_collection_item'][$action_id['value']]['field_meta']['#items'] as $meta_id => $meta_field) : ?>
                <?php if($meta_id > 0): ?> <tr> <?php endif; ?>
                    <td class="<?php print $odd_even_class; ?>">
                      <?php print render ($element['field_accion_collect'][$i]['entity']['field_collection_item'][$action_id['value']]['field_meta'][$meta_id]); ?>
                    </td>
                    <!--Producto-->
                    <td class="<?php print $odd_even_class; ?>">
                        <?php
                            //dpm($meta_field);
                            if(!empty($meta_field['entity']->field_producto)) {
                                foreach ($meta_field['entity']->field_producto[LANGUAGE_NONE] as $producto_id) {
                                    $product = node_load($producto_id['target_id']);
                                    //dpm($product);
                                    print $product->title . '</br>';
                                }
                            }
                        ?>
                    </td>
                    <!--<td><?php //print render($meta_field['entity']->field_producto); ?></td>-->
                <?php if($meta_id > 0): ?> </tr> <?php endif; ?>
              <?php endforeach; ?>
            <?php endif; ?>
            <?php if ($i > 0) :  ?></tr> <?php endif; ?>
        <?php endforeach; ?>


        <!--</div>-->
        </tr>

        <!--<script>
                  /*jQuery('#<?php// echo $row_id ?>').ready( function () {
                   jQuery('.taxonomy-td-item-<?php// echo $delta ?>').each(function () {
                   jQuery(this).attr("rowspan", "2");
                   });
                   console.log('helo console');    });*/
              </script>-->
        <?php endforeach; ?>
      <?php endforeach; ?>
      </tbody>
    </table>
  </div>
</div>

