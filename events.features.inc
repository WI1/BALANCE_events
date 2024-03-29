<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function events_imagecache_default_presets() {
  $items = array(
    'pic-1c-square' => array(
      'presetname' => 'pic-1c-square',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '70',
            'height' => '',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '-9',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '70',
            'upscale' => 0,
          ),
        ),
        '2' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array(
            'RGB' => array(
              'HEX' => 'ffffff',
            ),
            'under' => 1,
            'exact' => array(
              'width' => '70',
              'height' => '70',
              'xpos' => 'center',
              'ypos' => 'center',
            ),
            'relative' => array(
              'leftdiff' => '',
              'rightdiff' => '',
              'topdiff' => '',
              'bottomdiff' => '',
            ),
          ),
        ),
      ),
    ),
    'pic_2c_square' => array(
      'presetname' => 'pic_2c_square',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '230',
            'height' => '124',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Veranstaltung'),
      'module' => 'features',
      'description' => t('Events have a start date and an optional end date as well as a teaser and a body. They can be extended by other modules, too.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'has_body' => '1',
      'body_label' => t('Textkörper'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
