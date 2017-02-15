<?php
/**
 * Created by PhpStorm.
 * User: macmini
 * Date: 2/15/17
 * Time: 11:26 AM
 */
//drupal_add_css(drupal_get_path('module', 'datatables') .'/dataTables/media/css/demo_table.css');
?>
<table id="<?php print $id ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!empty($title)) : ?>
    <caption><?php print $title; ?></caption>
  <?php endif; ?>
  <thead>
  <tr>
    <?php foreach ($header as $field => $label): ?>
      <th class="views-field views-field-<?php print $fields[$field]; ?>">
        <?php print $label; ?>
      </th>
    <?php endforeach; ?>
  </tr>
  </thead>
  <tbody>
  <?php foreach ($rows as $count => $row): ?>
    <tr class="<?php print implode(' ', $row_classes[$count]); ?>">
      <?php foreach ($row as $field => $content): ?>
        <td class="views-field views-field-<?php print $fields[$field]; ?>">
          <?php print $content; ?>
        </td>
      <?php endforeach; ?>
    </tr>
  <?php endforeach; ?>
  </tbody>
  <?php $options = $view->style_plugin->options; ?>
  <?php
  ?>
  <?php if ($options['elements']['multi_filter']): ?>
    <tfoot>
    <tr>

        <th>
          <input type="text" name="compro" placeholder="compromiso" class="search_init" />
        </th>
      <th>
        <input type="text" name="insti" placeholder="institucion" class="search_init" />
      </th>
      <th>
        <input type="text" name="meta" placeholder="meta" class="search_init" />
      </th>

    </tr>
    <tr>
      <th>
        <input type="text" name="lin" placeholder="lineamiento" class="search_init" />
      </th>
      <th>
        <input type="text" name="amb" placeholder="ambito" class="search_init" />
      </th>
      <th>
        <input type="text" name="eje" placeholder="eje" class="search_init" />
      </th>
    </tr>
    <tr>
      <th>
        <input type="text" name="anho" placeholder="creacion" class="search_init" />
      </th>
      <th>
        <input type="text" name="porce" placeholder="porcentaje" class="search_init" />
      </th>
      <th>
        <input type="text" name="estado" placeholder="estado" class="search_init" />
      </th>
    </tr>
    </tfoot>
  <?php endif; ?>
</table>

