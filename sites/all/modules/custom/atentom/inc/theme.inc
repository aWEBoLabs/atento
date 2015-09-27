<?php
/**
 * Implements hook_theme.
 */
function atentom_theme() {
  return array(
    'atentom-user_login-markup' => array(
      'template' => 'templates/atentom-user_login-markup', 
    ), 
    'atentom-user_login-markup-footer' => array(
      'template' => 'templates/atentom-user_login-markup-footer', 
    ), 
  );
}