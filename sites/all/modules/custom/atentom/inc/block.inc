<?php
/**
 * Implements hook_block_info.
 */
function atentom_block_info() {
  $blocks = array();
  return $blocks;
}

/**
 * Implements hook_block_view.
 */
function atentom_block_view($delta = '') {
  $block = array();
  switch($delta) {
  }
  return $block;
}
