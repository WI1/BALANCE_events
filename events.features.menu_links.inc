<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:node/4847
  $menu_links['primary-links:node/4847'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/4847',
    'router_path' => 'node/%',
    'link_title' => 'Termine',
    'options' => array(
      'attributes' => array(
        'title' => 'Veranstaltungen',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Termine');


  return $menu_links;
}
