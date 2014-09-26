<?php

$plugin = array(
  'title' => t('Event space'),
  'description' => t('Shows the event space of a story.'),
  'category' => t('Storyscope'),
  'edit form' => 'dec_rec_story_event_space_edit_form',
  'render callback' => 'story_event_space_block',
  'admin info' => 'story_event_space_admin_info',
  'defaults' => array(
  )
);




