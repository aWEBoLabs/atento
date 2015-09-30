(function ($) {

  /**
   * Adds a Random Background to the Login Form.
   */
  Drupal.behaviors.atentoBG = {
    attach: function (context, settings) {
      $('body.not-logged-in', context).once('atento-bg', function () {
        var image = settings.atento.bg_images[Math.floor(Math.random()*settings.atento.bg_images.length)];
        $('body').css({
          'background': 'url(' + image + ') no-repeat center center fixed', 
          '-webkit-background-size': 'cover', 
          '-moz-background-size': 'cover', 
          '-o-background-size': 'cover', 
          'background-size': 'cover', 
          'filter': 'progid:DXImageTransform.Microsoft.AlphaImageLoader(src=\'.myBackground.jpg\', sizingMethod=\'scale\')', 
          '-ms-filter': "progid:DXImageTransform.Microsoft.AlphaImageLoader(src='myBackground.jpg', sizingMethod='scale')"
        });
      });
    }
  };


})(jQuery);
