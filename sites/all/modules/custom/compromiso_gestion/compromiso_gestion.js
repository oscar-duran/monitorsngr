(function ($) {
  Drupal.behaviors.compromiso_gestion = {
    attach: function (context, settings) {
      // Code to be run on page load, and
      // on ajax load added here

      $('#edit-ambito-agregar').click(function() {
        console.log('ambito-agregar');

        //var ambito = 
        console.log($('#edit-ambito').val());
		console.log($('#edit-ambito option:selected').text());


        return false;
      });
    }
  };
}(jQuery));
