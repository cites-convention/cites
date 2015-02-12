<?php
/**
 * @file
 * Implements some developer commands.
 */


/**
 * Implements hook_drush_command().
 */
function init_drush_command() {
	$items = array();

	$items['init'] = array(
		'description' => 'Initialize the Drupal project instance in the current docroot/',
		'callback' => '_drush_init',
		'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
		'options' => array(
			'debug-modules' => 'If enabled, modules are enabled one by one'
		)
	);

	return $items;
}

function _drush_init() {
	drush_log(dt('Enabling the required modules'), 'success');
	// Enable modules.
	$modules = drush_get_option('init-modules', array());
	if (is_string($modules)) {
		$modules = explode(',', $modules);
	}
	$debug = drush_get_option('debug-modules', FALSE);
	if(!$debug) {
		if(!module_enable($modules)) {
			drush_log(dt('Failed to enable one ore more modules'), 'error');
		}
	} else {
		foreach($modules as $module) {
			if(!module_enable(array($module))) {
				drush_log(dt('Failed to enable @module', array('@module' => $module)), 'error');
			}
		}
	}
}
