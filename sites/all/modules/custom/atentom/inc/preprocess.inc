<?php

/**
 * Implements hook_preprocess_page().
 */
function atentom_preprocess_page(&$variables) { 
  // Extensions
  if ( arg(0) == 'node' && arg(2) == 'edit' ) {
    drupal_add_css(drupal_get_path('module', 'atentom') . '/css/atentom.extensions.css');
  }
}
