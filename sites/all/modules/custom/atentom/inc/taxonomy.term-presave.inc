<?php
/**
 * Implements hook_taxonomy_term_presave.
 */
function atentom_taxonomy_term_presave($term) {
  $content = taxonomy_term_view($term, 'full');
  $content = render($content);
  $content = trim(strip_tags($content));
  $content = preg_replace('/\s+/', ' ', $content);
  $term->description = $content;
}
