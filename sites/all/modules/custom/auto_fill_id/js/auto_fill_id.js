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

