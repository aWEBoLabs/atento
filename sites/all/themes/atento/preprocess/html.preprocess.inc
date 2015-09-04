<?php

/**
 * Implements hook_preprocess_html().
 */
function atento_preprocess_html(&$variables) {
  // General Helper
  atento_preprocess_html_general($variables);
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
