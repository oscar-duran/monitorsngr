<?php
/**
* @file
* Default theme implementation to display a printer-friendly version page.
*
* This file is akin to Drupal's page.tpl.php template. The contents being
* displayed are all included in the $content variable, while the rest of the
* template focuses on positioning and theming the other page elements.
*
* All the variables available in the page.tpl.php template should also be
* available in this template. In addition to those, the following variables
* defined by the print module(s) are available:
*
* Arguments to the theme call:
* - $node: The node object. For node content, this is a normal node object.
*   For system-generated pages, this contains usually only the title, path
*   and content elements.
* - $format: The output format being used ('html' for the Web version, 'mail'
*   for the send by email, 'pdf' for the PDF version, etc.).
* - $expand_css: TRUE if the CSS used in the file should be provided as text
*   instead of a list of @include directives.
* - $message: The message included in the send by email version with the
*   text provided by the sender of the email.
*
* Variables created in the preprocess stage:
* - $print_logo: the image tag with the configured logo image.
* - $content: the rendered HTML of the node content.
* - $scripts: the HTML used to include the JavaScript files in the page head.
* - $footer_scripts: the HTML  to include the JavaScript files in the page
*   footer.
* - $sourceurl_enabled: TRUE if the source URL infromation should be
*   displayed.
* - $url: absolute URL of the original source page.
* - $source_url: absolute URL of the original source page, either as an alias
*   or as a system path, as configured by the user.
* - $cid: comment ID of the node being displayed.
* - $print_title: the title of the page.
* - $head: HTML contents of the head tag, provided by drupal_get_html_head().
* - $robots_meta: meta tag with the configured robots directives.
* - $css: the syle tags contaning the list of include directives or the full
*   text of the files for inline CSS use.
* - $sendtoprinter: depending on configuration, this is the script tag
*   including the JavaScript to send the page to the printer and to close the
*   window afterwards.
*
* print[--format][--node--content-type[--nodeid]].tpl.php
*
* The following suggestions can be used:
* 1. print--format--node--content-type--nodeid.tpl.php
* 2. print--format--node--content-type.tpl.php
* 3. print--format.tpl.php
* 4. print--node--content-type--nodeid.tpl.php
* 5. print--node--content-type.tpl.php
* 6. print.tpl.php
*
* Where format is the ouput format being used, content-type is the node's
* content type and nodeid is the node's identifier (nid).
*
* @see print_preprocess_print()
* @see theme_print_published
* @see theme_print_breadcrumb
* @see theme_print_footer
* @see theme_print_sourceurl
* @see theme_print_url_list
* @see page.tpl.php
* @ingroup print
*/
?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN""http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>">
<head>
  <?php print $head; ?>
  <base href='<?php print $url ?>' />
  <title><?php print $print_title; ?></title>
  <?php print $scripts; ?>
  <?php if (isset($sendtoprinter)) print $sendtoprinter; ?>
  <?php print $robots_meta; ?>
  <?php if (theme_get_setting('toggle_favicon')): ?>
    <link rel='shortcut icon' href='<?php print theme_get_setting('favicon') ?>' type='image/x-icon' />
  <?php endif; ?>
  <?php print $css; ?>
</head>
<body>
<?php if (!empty($message)): ?>
  <div class="print-message"><?php print $message; ?></div><p />
<?php endif; ?>
<?php if ($print_logo): ?>
  <div class="print-logo"><?php print $print_logo; ?></div>
<?php endif; ?>
<div class="print-site_name"><?php print theme('print_published'); ?></div>
<div class="print-breadcrumb"><?php print theme('print_breadcrumb', array('node' => $node)); ?></div>
<hr class="print-hr" />
<?php if (!isset($node->type)): ?>
  <h2 class="print-title"><?php print $print_title; ?></h2>
<?php endif; ?>
<div class="print-content">
  <?php //print $content; ?>
    <h1><?php print t('Compromiso de gestión @title', array('@title' => $node->title)); ?></h1>
    <p>Porcentaje de Avance: <?php print intval($node->field_porcentaje_de_avance_compr[LANGUAGE_NONE][0]['value']); ?>%</p>
    <h3>Items de compromiso:</h3>
    <?php foreach ($node->field_item_compromiso[LANGUAGE_NONE] as $key => $item_id) : ?>
        <?php
            $item = field_collection_item_load($item_id['value']);
        ?>
          <h3>Item #<?php print $key + 1; ?></h3>
              <ul>
                  <li>Eje: <?php print empty($item->field_codigo_eje) ? '' : $item->field_codigo_eje[LANGUAGE_NONE][0]['taxonomy_term']->name; ?></li>
                  <li>Ambito: <?php print empty($item->field_codigo_ambito) ? '' : $item->field_codigo_ambito[LANGUAGE_NONE][0]['taxonomy_term']->name; ?></li>
                  <li>Lineamiento: <?php print empty($item->field_codigo_lineamiento) ? '' : $item->field_codigo_lineamiento[LANGUAGE_NONE][0]['taxonomy_term']->name; ?></li>
                  <li class="sub-title">Acciones Estratégicas:
                      <?php foreach ($item->field_accion_collect[LANGUAGE_NONE] as $action_id) : ?>
                      <?php $action = field_collection_item_load($action_id['value']); ?>
                      <ul>
                          <li class="sub-title"><span><?php print field_value($action->field_codigo_accion_estrategica, 0); ?></span>
                              <ul>
                                  <li>Descripción: <?php print field_value($action->field_descripcion_accion, 0); ?></li>
                                  <li class="sub-title">Metas:
                                      <?php foreach ($action->field_meta[LANGUAGE_NONE] as $meta) : ?>
                                        <ul>
                                            <li class="sub-title"><span><?php print field_value($meta['entity']->field_meta_codigo, 0); ?></span>
                                                <ul>
                                                    <li>Detalle: <?php print $meta['entity']->title; ?></li>
                                                    <li>Descripción:
                                                        <p><?php print field_value($meta['entity']->field_meta_descripcion, 0); ?></p>
                                                    </li>
                                                    <li>Porcentaje de Avance: <?php print empty($meta['entity']->field_porcentaje_avance) ? 0 : (($meta['entity']->field_porcentaje_avance[LANGUAGE_NONE][0]['value'] - 1) * 25); ?>%</li>
                                                    <!--<li>Comentario sobre avance: </li>-->
                                                    <li>Año de Inicio: <?php print field_value($meta['entity']->field_anno_ini_meta, 0); ?></li>
                                                    <li>Año Final: <?php print field_value($meta['entity']->field_anno_fin_meta, 0); ?></li>
                                                    <li>Apecto positivo:
                                                        <p><?php print field_value($meta['entity']->field_aspecto_positivo, 0); ?></p>
                                                    </li>
                                                    <li>Obstáculo:
                                                        <p><?php print field_value($meta['entity']->field_obstaculo, 0); ?></p>
                                                    </li>
                                                    <li>¿Reciben Asesoría? <?php print $meta['entity']->field_recibio_asesoria_meta[LANGUAGE_NONE][0]['value'] ? 'Sí' : 'No'; ?></li>
                                                    <li>Organización Asesora: <?php print field_value($meta['entity']->field_organizacion_capacitadora, 0); ?></li>
                                                    <li>¿Su organización requiere asesoría? <?php print $meta['entity']->field_su_org_requiere_asesoria[LANGUAGE_NONE][0]['value'] ? 'Sí' : 'No'; ?></li>
                                                    <li>Temas de necesidades en asesoría:
                                                        <?php if(!empty($meta['entity']->field_tema_necesidad_meta)) : ?>
                                                        <ul>
                                                            <?php foreach ($meta['entity']->field_tema_necesidad_meta[LANGUAGE_NONE] as $topic) : ?>
                                                              <li><?php print $topic['value']; ?></li>
                                                            <?php endforeach; ?>
                                                        </ul>
                                                        <?php endif; ?>
                                                    <li>Observaciones del Analista: <?php print field_value($meta['entity']->field_observacion_del_analista, 0); ?></li>
                                                    <li class="sub-title">Productos:
                                                        <?php if(!empty($meta['entity']->field_producto)) : ?>
                                                        <?php foreach ($meta['entity']->field_producto[LANGUAGE_NONE] as $product_id) : ?>
                                                          <?php
                                                            $product = node_load($product_id['target_id']);
                                                          ?>
                                                          <ul>
                                                              <li class="sub-title"><span><?php print $product->field_cod_producto_meta[LANGUAGE_NONE][0]['value']; ?></span>
                                                                  <ul>
                                                                      <li>Producto Esperado: <?php print $product->title; ?></li>
                                                                      <li>Descripción de la fuente de verificación:<?php print field_value($product->field_descripc_fuente_verifica, 0); ?></li>
                                                                      <li>Fuentes de Verificación:
                                                                          <ul>
                                                                            <?php foreach ($product->field_prod_fuente_verifica[LANGUAGE_NONE] as $file) : ?>
                                                                                <?php
                                                                                    $file_data = file_load($file['fid']);
                                                                                    $url_file = file_create_url($file_data->uri);
                                                                                ?>
                                                                              <li><?php print $url_file; ?></li>
                                                                            <?php endforeach; ?>
                                                                          </ul>
                                                                      </li>
                                                                  </ul>
                                                              </li>
                                                          </ul>
                                                        <?php endforeach; ?>
                                                        <?php endif; ?>
                                                    </li>
                                                </ul>
                                            </li>
                                        </ul>
                                      <?php endforeach; ?>
                                  </li>
                              </ul>
                          </li>
                      </ul>
                      <?php endforeach; ?>
                  </li>
              </ul>
    <?php endforeach; ?>
</div>
<div class="print-footer"><?php print theme('print_footer'); ?></div>
<hr class="print-hr" />
<?php if ($sourceurl_enabled): ?>
  <div class="print-source_url">
    <?php print theme('print_sourceurl', array('url' => $source_url, 'node' => $node, 'cid' => $cid)); ?>
  </div>
<?php endif; ?>
<div class="print-links"><?php //print theme('print_url_list'); ?></div>
<?php print $footer_scripts; ?>
</body>
</html>