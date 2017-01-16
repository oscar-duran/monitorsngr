/**
 * @file
 * Provides custom actions for fields in the PGE supplies form.
 */

(function ($) {
  Drupal.behaviors.monitorsngrPge = {
    attach: function (context, settings) {
      var paragraphsOptions = new Array();
      /**
       * Helper function to remove unnecessary options from the availibles paragraphs bundles.
       */
      function setAvailableSupplies(selectedSupply) {
        if (selectedSupply === 'pge_insumos_carreteras') {
          selectedSupply = 'pge_insumos_puentes';
        }
        $('#edit-field-formulario-insumos-pge-und-add-more-type option').each(function () {
          if ($(this).val() != selectedSupply) {
            $(this).remove();
          }
        });
      }
      /**
       * Helper function to restore all paragraphs bundles options.
       */
       function restoreParagraphBundlesOptions() {
         $.each(paragraphsOptions, function (key, option) {
           $('#edit-field-formulario-insumos-pge-und-add-more-type').append(option);
         });
       }

      $('#edit-field-formulario-insumos-pge-und-add-more-type option').each(function () {
        paragraphsOptions.push($(this));
      });

      $('#edit-field-tipo-formulario-und').change(function () {
        var selectedOption = $('#edit-field-tipo-formulario-und option:selected').val();
        restoreParagraphBundlesOptions();
        setAvailableSupplies(selectedOption);
      });

    }
  };
})(jQuery);
