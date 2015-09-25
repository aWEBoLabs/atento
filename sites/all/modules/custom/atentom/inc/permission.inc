<?php
/**
 * Validates the access for a taxonomy.
 */
function atentom_taxonomy_access($user_access, $term) {
  if ( !user_access($user_access) ) {
    return false;
  }
  
  if ( $term->vid != 1 ) {
    return true;
  }
  
  if ( !($parents = taxonomy_get_parents_all($term->tid)) ) {
    $root_term = $term;
  } else {
    $root_term = array_pop($parents);
  }

  switch($root_term->tid) {
    // Our Brand
    case 29:
      return user_access('Access to Our Brand');
      break;
    
    // Elements
    case 30:
      return user_access('Access to Elements');
      break;
    
    // Commercial
    case 31:
      return user_access('Access to Commercial');
      break;
    
    // Int Comms
    case 32:
      return user_access('Access to Int Comms');
      break;
    
    // Default
    default:
      return true;
      break;
  }
}

/**
 * Implements hook_permission.
 */
function atentom_permission() {
  return array(
    'Access to Our Brand' => array(
      'title' => 'Access to Our Brand', 
      'description' => 'Access to Our Brand', 
    ), 
    'Access to Elements' => array(
      'title' => 'Access to Elements', 
      'description' => 'Access to Elements', 
    ), 
    'Access to Commercial' => array(
      'title' => 'Access to Commercial', 
      'description' => 'Access to Commercial', 
    ), 
    'Access to Int Comms' => array(
      'title' => 'Access to Int Comms', 
      'description' => 'Access to Int Comms', 
    ), 
  );
}
