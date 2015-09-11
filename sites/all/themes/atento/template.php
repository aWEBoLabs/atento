<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * Atento theme.
 */

/**
 * Overrides theme_breadcrumb.
 */
function atento_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if ( empty($breadcrumb) ) {
    $breadcrumb[] = l('Home', '<front>');
  }
  
  $breadcrumb[] = drupal_get_title();

  if (!empty($breadcrumb)) {
    $crumbs = "<ul class=\"breadcrumbs\">\n";
    $i = 1;
    $count = count($breadcrumb);
    foreach($breadcrumb as $value) {
      $classes = array();
      if ( $i==1 ) { $classes[] = 'first'; }
      if ( $i==$count ) { $classes[] = 'last'; }
      $classes[] = $i%2==0?'odd':'even';
      $class = implode(' ', $classes);
      
      $crumbs .= "  <li class=\"{$class}\">{$value}</li>\n";
      if ( $i < $count ) {
        $crumbs .= "  <li><span>&gt;</span></li>\n";
      }
      $i++;
    }
    $crumbs .= "</ul>\n";
  }
  
  return $crumbs;
}

/**
 * Overrides theme_menu_link__main_menu.
 */
function atento_menu_link__main_menu(&$vars) {
  $element = $vars['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  
  $depth = $element['#original_link']['depth'];
  $element['#localized_options']['html'] = true;
  if ( $depth == 1 && preg_match('/taxonomy\/term\/(\d+)/', $element['#href'], $match) ) {
    $tid = $match[1];
    if ( ($term = taxonomy_term_load($tid)) && $term->vid == 1) {
      $term_view = taxonomy_term_view($term, 'menu_top');
      $output = drupal_render($term_view);
      $output = l($output, $element['#href'], $element['#localized_options']);
    }
  }
  if ( !isset($output) ) {
    $output = l("<span>{$element['#title']}</span>", $element['#href'], $element['#localized_options']);
  }
  
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Gets a human friendly size.
 */
function atento_get_human_size($filesize = 0) {
  // KB
  $hfilesize = 0;
  if ( $filesize < 1024 ) {
    $hfilesize = (intval($filesize / 1024 * 100) / 100) . 'K';
    return $hfilesize;
  }
  
  // KB
  $filesize /= 1024;
  if ( $filesize < 1024 ) {
    $hfilesize = intval($filesize) . 'K';
    return $hfilesize;
  }
  
  // MB
  $filesize /= 1024;
  if ( $filesize < 1024 ) {
    $hfilesize = intval($filesize) . 'M';
    return $hfilesize;
  }
  
  // GB
  $filesize /= 1024;
  $hfilesize = intval($filesize) . 'G';
  return $hfilesize;
  
}