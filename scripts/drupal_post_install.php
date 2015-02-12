<?php
/**
 * Author: Cristian Romanescu <cristi _at_ eaudeweb dot ro>
 * Created: 201407171748
 */

$config_file = sprintf('%s/../conf/config.json', dirname(__FILE__));
if(!is_readable($config_file)) {
  drupal_set_message("Cannot read configuration file!", 'warning');
  return;
}
$cfg = json_decode(file_get_contents($config_file), TRUE);

configure_solr($cfg);
