(function($, Drupal, window, document, undefined) {
  $(window).load(function() {
    $('#vortex').vortex({
      speed : 60,
      manualAdvance : false,
      initialPosition : 270,
    });
    $('#vortex').mouseenter(function() {
      $('#vortex').data('vortex').stop();
    });
    $('#vortex').mouseleave(function() {
      $('#vortex').data('vortex').start();
    })
  });
})(jQuery, Drupal, this, this.document);
