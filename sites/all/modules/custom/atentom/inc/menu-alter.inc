<?php
/**
 * Implements hook_menu_alter.
 */
function atentom_menu_alter(&$items) {
  $items['taxonomy/term/%taxonomy_term']['access callback'] = 'atentom_taxonomy_access';
  $items['taxonomy/term/%taxonomy_term']['access arguments'] = array('access content', 2);
  $items['taxonomy/term/%taxonomy_term/display']['access arguments'] = array('Administer Taxonomies');
  $items['taxonomy/term/%taxonomy_term/fields']['access arguments'] = array('Administer Taxonomies');
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/display']['access arguments'] = array('Administer Taxonomies');
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/fields']['access arguments'] = array('Administer Taxonomies');
}
