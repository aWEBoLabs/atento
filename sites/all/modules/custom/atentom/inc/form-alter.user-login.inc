<?php
/**
 * Implements hook_form_FORM_ID_alter.
 */
function atentom_form_user_login_alter(&$form, &$form_state, $form_id) {
  $markup = theme('atentom-user_login-markup');
  $markup_footer = theme('atentom-user_login-markup-footer');
  $form['intro'] = array(
    '#type' => 'markup', 
    '#markup' => $markup, 
    '#weight' => -10, 
  );
  $form['footer'] = array(
    '#type' => 'markup', 
    '#markup' => $markup_footer, 
    '#weight' => 100, 
  );
  $form['actions']['#weight'] = 99;
  
}