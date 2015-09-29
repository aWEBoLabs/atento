(function ($) {

  /**
   * Adds a Random Background to the Login Form.
   */
  Drupal.behaviors.atentoBG = {
    attach: function (context, settings) {
      $('body.not-logged-in', context).once('atento-bg', function () {
        console.dir(settings.atento.bg_images);
      });
    }
  };


})(jQuery);
