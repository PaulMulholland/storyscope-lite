/**
 * @file
 * A JavaScript file to make freebase popups work.
 *
 */

(function ($) {
  Drupal.behaviors.storyscopeFreebasePopup = {
    attach: function (context) {
      // Find all the freebase topic links.
      var $topic_links = $('.freebase-link a');
      var service_url = 'https://www.googleapis.com/freebase/v1/topic';
      var params = {'filter' : 'suggest'};
      if ($topic_links.length > 0) {
        $topic_links.each(function(){
          $(this).click(function(e) {
            // Firstly remove any existing popups.
            $('.freebase-popup-wrapper').remove();
            $freebase_topic = $(this)[0].pathname;
            e.preventDefault();
            // Add in a wrapper to hold a spinner so user can see some activity
            // whilst we talk to Freebase.
            var $spinner = $('<img src="' + location.protocol + '//' + location.hostname + Drupal.settings.basePath + '/profiles/storyscope/modules/custom/storyscope_story/js/loading-large.gif" class="spinner" style="margin:auto;" alt="Spinning ajax activity indicator" />');
            $popup_wrapper = '<div class="freebase-popup-wrapper"></div>';
            $(this).parent().append($popup_wrapper);
            $('.freebase-popup-wrapper').html($spinner);
            storyscope_freebase_fetch_topic_info(service_url, $freebase_topic, params, this);
          });
        });
      }
    }
  }

  function storyscope_freebase_fetch_topic_info(service_url, topic_id, params, elem) {
    $.getJSON(service_url + topic_id + '?callback=?', params, function(topic) {
      console.log(topic);
      // Parse out some data.
      /*
        /type/object/name
        /type/object/type
        /common/topic/article
      */
      // Wrap these into try-catch in case a property does not exist.
      var name = '';
      try {
        name = topic.property['/type/object/name'].values[0].text;
      }
      catch(e) {
        console.log(e);
      }
      var type = '';
      try {
        type = topic.property['/type/object/type'].values[0].text;
      }
      catch(e) {
        console.log(e);
      }
      var text = '';
      try {
        text = topic.property['/common/topic/article'].values[0].property['/common/document/text'].values[0].value;
      }
      catch(e) {
        console.log(e);
      }
      var $popup = storyscope_freebase_build_popup(name, type, text, topic_id);
      $('.freebase-popup-wrapper').html($popup);
      $('.freebase-popup-wrapper').click(function (e) {
        $(this).remove();
      });
    });
  }

  function storyscope_freebase_build_popup(name, type, text, topic_id) {
    var $html = '<div class="freebase-popup">';
    $html += '<span class="popup-exit">x</span>';
    $html += '<p class="popup-title">' + Drupal.checkPlain(name) + '</p>';
    $html += '<p class="popup-link"><a href="http://www.freebase.com/' + topic_id + '">' + topic_id + '</a></p>';
    $html += '<p class="popup-type">' + Drupal.checkPlain(type) + '</p>';
    $html += '<p class="popup-text">' + Drupal.checkPlain(text) + '</p>';
    $html += '<div>';
    return $html;
  }
})(jQuery);