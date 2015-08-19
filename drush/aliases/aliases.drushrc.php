<?php
/**
 * Implement this aliases in your aliases.local.php
 */
$aliases['prod'] = array(
  'uri' => 'http://www.cites.org',
  'remote-host' => 'www.cites.org',
  'root' => 'please-fill-in-local-aliases',
  'path-aliases' => array(
    '%files' => 'sites/default/files',
  )
);

$aliases['dev'] = array(
  'uri' => 'dev.cites.org',
  'remote-host' => 'php-cites.edw.lan',
  'remote-user' => 'please-fill-in-local-aliases',
  'root' => 'please-fill-in-local-aliases',
  'path-aliases' => array(
    '%files' => 'sites/default/files',
  ),
);

// Add your local aliases.
if (file_exists(dirname(__FILE__) . '/aliases.local.php')) {
  include dirname(__FILE__) . '/aliases.local.php';
}
