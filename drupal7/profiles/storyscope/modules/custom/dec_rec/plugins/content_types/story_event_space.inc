<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Event space'),
  'description' => t('Shows the event space of a story.'),
  'category' => t('Storyscope'),
  'edit form' => 'dec_rec_story_event_space_edit_form',
  'render callback' => 'dec_rec_story_event_space_render',
  'admin info' => 'dec_rec_story_event_space_admin_info',
  'defaults' => array(
    'username' => 'acdde',
  )
);


?>


