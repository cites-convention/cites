(function($) {
  Drupal.behaviors.contextualMenu = {
    attach: function(context, settings) {
      if ($('#sidebar-first .block-menu').length > 3) {
        $('#sidebar-first .block-menu').addClass('collapsible');
        $('#sidebar-first .block-menu .content:not(:first)').hide();
        $('#sidebar-first .block-menu h2').click(function() {
          $('#sidebar-first .block-menu .content').not($(this).siblings('.content')).slideUp('fast');
          $(this).siblings('.content').slideToggle('slow');
        });
      }
    }
  };
})(jQuery);
