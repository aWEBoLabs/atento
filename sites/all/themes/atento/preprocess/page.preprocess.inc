<?php

/**
 * Implements hook_preprocess_page().
 */
function atento_preprocess_page(&$variables) {
  // Taxonomy Helper
  atento_preprocess_page_taxonomy($variables);
}

/**
 * Helper function for hook_preprocess_page for taxonomy pages.
 */
function atento_preprocess_page_taxonomy(&$variables) {
  if ( !(arg(0) == 'taxonomy' && arg(1) == 'term' && intval(arg(2)) > 0 && ($term = taxonomy_term_load(arg(2)))) ) {
    return;
  }
  
  if ( $term->vid == 1 ) {
    $variables['theme_hook_suggestions'][] = 'page__taxonomy__vid_' . $term->vid;
  }
}
