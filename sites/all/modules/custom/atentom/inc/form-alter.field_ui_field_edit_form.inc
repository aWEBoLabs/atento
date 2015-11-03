<?php
/**
 * Implements hook_form_FORM_ID_alter.
 */
function atentom_form_field_ui_field_edit_form_alter(&$form, &$form_state, $form_id) {
  $form['instance']['settings']['file_extensions']['#type'] = 'textarea';
  $form['instance']['settings']['file_extensions']['#maxlength'] = null;
}