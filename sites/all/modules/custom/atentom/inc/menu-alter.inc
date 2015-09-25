<?php
/**
 * Implements hook_menu_alter.
 */
function atentom_menu_alter(&$items) {
  $items['taxonomy/term/%taxonomy_term']['access callback'] = 'atentom_taxonomy_access';
  $items['taxonomy/term/%taxonomy_term']['access arguments'] = array('access content', 2);
}
