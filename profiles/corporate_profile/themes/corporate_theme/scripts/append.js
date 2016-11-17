(function($){
  $(window).on('resize', function() {
    $('#search-block-form').find('input[type="search"]').attr('placeholder','Search');
    if (window.innerWidth < 1000) {
      if($("body").hasClass("logged-in")) {
        if ($("#superfish-1 #search-block-form").length + $("#superfish-1 .username").length == 0) {
          $($("#search-block-form")).clone().prependTo($("#superfish-1"));
          if (!$("#block-logintoboggan-logintoboggan-logged-in a").hasClass()) {
            $($("#block-logintoboggan-logintoboggan-logged-in .content a")).clone().appendTo($("#superfish-1"));
          }
        }
      }
      else {
        if ($("#superfish-1 #search-block-form").length + $("#superfish-1 #user-login").length == 0) {
          $($("#search-block-form")).clone().prependTo($("#superfish-1"));
          $("#user-login").clone().appendTo($("#superfish-1"));
        }
      }
    }
    else {
      $("#block-superfish-1 h2.block-title img.site-logo").remove();
      $("#superfish-1 #search-block-form").remove();
      $("#superfish-1 .username").remove();
      $("#superfish-1 #user-login").remove();
      $("#superfish-1 > a").remove();
    }
  }
  );

  window.onload = function() {
    $('#search-block-form').find('input[type="search"]').attr('placeholder','Search');
    if (window.innerWidth < 1000) {
      if($("body").hasClass("logged-in")) {
        if ($("#superfish-1 #search-block-form").length + $("#superfish-1 .username").length == 0)  {        
          $($("#search-block-form")).clone().prependTo($("#superfish-1"));
          if (!$("#block-logintoboggan-logintoboggan-logged-in a").hasClass()) {
            $($("#block-logintoboggan-logintoboggan-logged-in .content a")).clone().appendTo($("#superfish-1"));
          };
        }
      }
      else {
        if ($("#superfish-1 #search-block-form").length + $("#superfish-1 #user-login").length == 0) {
          $($("#search-block-form")).clone().prependTo($("#superfish-1"));
          $("#user-login").clone().appendTo($("#superfish-1"));
        }
      }
    }
    else {
      $("#superfish-1 #search-block-form").remove();
      $("#superfish-1 .username").remove();
      $("#superfish-1 #user-login").remove();
      $("#superfish-1 > a").remove();
      $("#block-superfish-1 h2.block-title img.site-logo").remove();
    }
  };
})(jQuery);
