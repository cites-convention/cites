<?php
/**
 * Implement this aliases in your aliases.local.php
 */
$aliases['cms.production'] = array(
  'uri' => 'please-fill-in-local-aliases',
  'db-allows-remote' => TRUE,
  'remote-host' => 'please-fill-in-local-aliases',
  'remote-user' => 'please-fill-in-local-aliases',
  'root' => 'please-fill-in-local-aliases',
  'path-aliases' => array(
    '%files' => 'sites/default/files',
  ),
  'command-specific' => array(
    'sql-sync' => array(
      'simulate' => '1',
      'source-dump' => '/tmp/cms-source-dump-myuser.sql',
      'target-dump' => '/tmp/cms-target-dump-myuser.sql.gz',
    ),
  ),
);

$aliases['cms.staging'] = array(
  'uri' => 'please-fill-in-local-aliases',
  'db-allows-remote' => TRUE,
  'remote-host' => 'please-fill-in-local-aliases',
  'remote-user' => 'please-fill-in-local-aliases',
  'root' => 'please-fill-in-local-aliases',
  'path-aliases' => array(
    '%files' => 'sites/default/files',
  ),
  'command-specific' => array(
    'sql-sync' => array(
      'simulate' => '1',
      'source-dump' => '/tmp/cms-source-dump-myuser.sql',
      'target-dump' => '/tmp/cms-target-dump-myuser.sql.gz',
    ),
  ),
);

$aliases['cms.local'] = array(
  'uri' => 'cms.localhost',
  'root' => '/home/user/Work/cms/docroot',
);

// Add your local aliases.
if (file_exists(dirname(__FILE__) . '/aliases.local.php')) {
  include dirname(__FILE__) . '/aliases.local.php';
}
