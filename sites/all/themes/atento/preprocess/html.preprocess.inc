<?php

/**
 * Implements hook_preprocess_html().
 */
function atento_preprocess_html(&$variables) {
  // General Helper
  atento_preprocess_html_general($variables);
  
  // Bg
  atento_preprocess_html_bg($variables);
}

/**
 * Helper function for hook_preprocess_page for general.
 */
function atento_preprocess_html_general(&$variables) {
  $class_columns = "one-column";
  if ( isset($variables['page']['sidebar_second']) && !empty($variables['page']['sidebar_second']) ) {
    $class_columns = "two-columns";
  }
  
  //$variables['classes_array'][] = $class_columns;
  $variables['attributes_array']['class'][] = $class_columns;
}

/**
 * Background on not logged_in.
 */
function atento_preprocess_html_bg(&$variables) {
  if ( $variables['logged_in'] ) {
    return;
  }
  
  if ( !($node = node_load(3)) ) {
    return;
  }
  
  if ( !isset($node->field_background_image[LANGUAGE_NONE][0]['uri']) ) {
    return;
  }
  
  $images = array();
  foreach($node->field_background_image[LANGUAGE_NONE] as $i => $file) {
    $images[] = image_style_url('login_bg', $file['uri']);
  }
  
  drupal_add_js(array('atento' => array('bg_images' => $images)), 'setting');
  drupal_add_js(drupal_get_path('theme', 'atento') . '/js/atento.logged-out.bg.js');
}