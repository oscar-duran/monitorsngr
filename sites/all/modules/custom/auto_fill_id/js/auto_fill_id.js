/*jQuery("#edit-field-institucion-und-0-target-id").keyup(function () {
        var d = new Date();
        var institucion = jQuery(this).val();
        jQuery("#edit-title").val(d.getFullYear() + '-' + institucion);
    }
);*/

/*(function($) {
    $("#edit-field-institucion-und-0-target-id").keyup(function () {
            var d = new Date();
            var institucion = $(this).val();
            $("#edit-title").val(d.getFullYear() + '-' + institucion);
        }
    );
}(jQuery));
*/


(function($, Drupal){
    Drupal.behaviors.auto_fill_id = {
        attach: function (context, settings) {

            var update_compromiso_name = function() {
                var d = new Date();
                var ins = $(this).val().replace(/ *\([^)]*\) */g, '');
                $("#edit-title").val( d.getFullYear() + '-' + ins);
            }

            $("#edit-field-institucion-und-0-target-id").keyup(update_compromiso_name);

            $("#edit-field-institucion-und-0-target-id").blur(update_compromiso_name);
        }
    };
})(jQuery, Drupal);

