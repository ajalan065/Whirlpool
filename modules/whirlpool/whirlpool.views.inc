<?php

/**
 * @file
 * Defines the Vortex plugin for the views module.
 */

/**
 * Implements the hooks_views_plugins().
 */
function whirlpool_views_plugins() {

  drupal_add_js('sites/all/libraries/whirlpoollib/js/jquery.freeow.min.js');
  drupal_add_css(('sites/all/libraries/whirlpoollib/css/freeow/freeow.css'), array('type' => 'external'));
  drupal_add_css(('sites/all/libraries/whirlpoollib/css/site.css'), array('type' => 'external'));
  drupal_add_js(WHIRLPOOL_MODULE_PATH . '/js/whirl.js', 'external');
  drupal_add_css((WHIRLPOOL_MODULE_PATH . '/css/whirl.css'), array('type' => 'external'));
  return array(
    'module' => 'whirlpool',
    'style' => array(
      'whirlpool' => array(
        'title' => t('Whirlpool'),
        'help' => t('Display the results as a 3d whirlpool of images.'),
        'handler' => 'views_plugin_style_whirlpool',
        'theme' => 'whirlpool_view',
        'uses fields' => TRUE,
        'uses row plugin' => TRUE,
        'type' => 'normal',
        'parent' => 'default',
        'path' => drupal_get_path('module', 'whirlpool'),
      ),
    ),
  );
}
