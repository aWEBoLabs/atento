<?php

/**
 * Implements hook_preprocess_page().
 */
function atento_preprocess_page(&$variables) {
  // Search for Mobile
  atento_preprocess_page_search($variables);
  
  // Taxonomy Helper
  atento_preprocess_page_taxonomy($variables);
}

/**
 *
 */
function atento_preprocess_page_search(&$variables) {
  $variables['page']['footer']['msearch-form'] = array(
    '#type' => 'markup', 
    '#markup' => '<div id="msearch-form">
      <form action="' . url('msearch'). '" method="post" accept-charset="UTF-8">
        <input type="text" id="msearch-input" name="keywords" />
        <input type="submit" id="msearch-submit" value="Search" />
      </form>
    </div>', 
  );
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
