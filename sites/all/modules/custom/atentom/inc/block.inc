<?php
/**
 * Implements hook_block_info.
 */
function atentom_block_info() {
  $blocks = array();
  $blocks['taxonomy-children'] = array(
    'info' => t('Landing Page - Taxonomy Children'), 
  );
  return $blocks;
}

/**
 * Implements hook_block_view.
 */
function atentom_block_view($delta = '') {
  $block = array();
  switch($delta) {
    case 'taxonomy-children':
      $block['content'] = atentom_block_view_taxonomy_children();
      break;
  }
  return $block;
}

/**
 * Returns a block with the immediate children of the current taxonomy page.
 */
function atentom_block_view_taxonomy_children() {
  if ( !($terms = atentom_data_get_taxonomy_children()) ) {
    return false;
  }
  
  $output = "<ul class=\"taxonomy-children\">\n";
  $i = 1;
  foreach($terms as $term) {
    $classes = array();
    $classes[] = $i%2==0?'odd':'even';
    $class = implode(' ', $classes);
    $term_view = taxonomy_term_view($term, 'landing_page');
    $term_view = l(drupal_render($term_view), "taxonomy/term/{$term->tid}", array('html' => true));
    $output .= "<li class=\"{$class}\">{$term_view}</li>\n";
    $i++;
  }
  $output .= "</ul>";
  return $output;
}