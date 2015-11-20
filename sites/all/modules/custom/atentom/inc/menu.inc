<?php
/**
 *
 */
function atentom_menu() {
  $items = array();
  $items['msearch'] = array(
    'page callback' => 'atentom_menu_msearch', 
    'access callback' => TRUE, 
    'type' => MENU_CALLBACK, 
  );
  return $items;
}

/**
 *
 */
function atentom_menu_msearch() {
  if ( !(isset($_POST['keywords']) && !empty($_POST['keywords'])) ) {
    drupal_goto('<front>');
    exit;
  }
  
  $keywords = $_POST['keywords'];
  $url = 'search/term/' . $keywords;
  drupal_goto($url);
  exit;
}