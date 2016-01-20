(function($, Drupal, window, document, undefined) {
  $(window).load(function() {
    $('#vortex').vortex({
      speed : 60,
      manualAdvance : false,
      initialPosition : 270,
    });
  });
})(jQuery, Drupal, this, this.document);
