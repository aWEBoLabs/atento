<?php
/**
 * Alters Taxonomy Edit form.
 */
function atentom_form_taxonomy_form_term_alter(&$form, &$form_state, $form_id) {
  $form['description']['#prefix'] = '<div style="display: none;">';
  $form['description']['#suffix'] = '</div>';
}