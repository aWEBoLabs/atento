<?php
/**
 * Implements hook_menu_alter.
 */
function atentom_menu_alter(&$items) {
  $items['taxonomy/term/%taxonomy_term']['access callback'] = 'atentom_taxonomy_access';
  $items['taxonomy/term/%taxonomy_term']['access arguments'] = array('access content', 2);
  $items['taxonomy/term/%taxonomy_term/display']['access arguments'] = array('Administer Taxonomies');
  $items['taxonomy/term/%taxonomy_term/fields']['access arguments'] = array('Administer Taxonomies');
  
  // Vocabulary
  /*

    [400] => 
    [401] => 
    [402] => 
    [403] => 
    [404] => 
    [405] => 
    [406] => 
    [407] => 
    [408] => 
    [409] => 
    [410] => 
    [411] => 
    [412] => 
    [413] => 
    [414] => 
  */
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/display']['access arguments'] = array('Administer Taxonomies');
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/display/default']['access arguments'] = array('Administer Taxonomies');
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/display/full']['access arguments'] = array('Administer Taxonomies');
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/display/landing_page']['access arguments'] = array('Administer Taxonomies');
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/display/menu_top']['access arguments'] = array('Administer Taxonomies');
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/display/token']['access arguments'] = array('Administer Taxonomies');
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/edit']['access arguments'] = array('Administer Taxonomies');
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/fields']['access arguments'] = array('Administer Taxonomies');
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/fields/%field_ui_menu']['access arguments'] = array('Administer Taxonomies');
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/fields/%field_ui_menu/delete']['access arguments'] = array('Administer Taxonomies');
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/fields/%field_ui_menu/edit']['access arguments'] = array('Administer Taxonomies');
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/fields/%field_ui_menu/field-settings']['access arguments'] = array('Administer Taxonomies');
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/fields/%field_ui_menu/widget-type']['access arguments'] = array('Administer Taxonomies');
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/groups/%field_group_menu/delete']['access arguments'] = array('Administer Taxonomies');
  $items['admin/structure/taxonomy/%taxonomy_vocabulary_machine_name/groups/%field_group_menu/enable']['access arguments'] = array('Administer Taxonomies');
  /*$keys = array_keys($items);
  sort($keys);
  print_r($keys);
  exit;*/
}
