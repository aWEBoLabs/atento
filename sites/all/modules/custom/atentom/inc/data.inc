<?php
/**
 * Returns the taxonomy children of the active one.
 */
function atentom_data_get_taxonomy_children() {
  if ( !(arg(0) == 'taxonomy' && arg(1) == 'term' && intval(arg(2)) > 0 && ($term = taxonomy_term_load(arg(2)))) ) {
    return false;
  }
  
  if ( $term->vid != 1 ) {
    return false;
  }
  
  return taxonomy_get_tree($term->vid, $term->tid, 1, true);
}

/**
 * Find the root term of a term.
 */
function atentom_data_get_term_root($tid) {
  if ( !($term = taxonomy_term_load($tid)) ) {
    return false;
  }
  
  dpm($term);
  return 1;
}

