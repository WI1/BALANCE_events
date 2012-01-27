<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function events_default_fe_block_settings() {
  $export = array();

  // balance
  $theme = array();

  $theme['event-0'] = array(
    'module' => 'event',
    'delta' => '0',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-83',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => 'veranstaltungen',
    'title' => '',
    'cache' => '1',
  );

  $theme['event-1'] = array(
    'module' => 'event',
    'delta' => '1',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-82',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => '1',
  );

  $export['balance'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
