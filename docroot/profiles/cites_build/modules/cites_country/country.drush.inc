<?php

function country_drush_command() {
  $items['import_countries'] = array(
    'description' => 'Import official list of countries provided by this module in country.json file',
    'examples' => array(
      'drush import_default_countries' => 'Import countries into the Drupal instance'
    )
  );

  $items['build_json_file'] = array(
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'description' => 'Imports the national countries database.',
    'drupal dependencies' => array('taxonomy'),
    'examples' => array(
      'drush build_json_file  --db-host=localhost --db-user=admin --db-pass --db-name=ncd' => 'Imports the national contact database.'
    ),
    'options' => array(
      'db-host' => array(
        'description' => 'Hostname of the MySQL database.',
        'example-value' => 'hostname',
        'value' => 'optional'
      ),
      'db-name' => array(
        'description' => 'Name of the MySQL database.',
        'example-value' => 'database',
        'value' => 'required'
      ),
      'db-pass' => array(
        'description' => 'Password of the MySQL database.',
        'example-value' => 'password',
        'value' => 'optional'
      ),
      'db-port' => array(
        'description' => 'Port of the MySQL database.',
        'example-value' => 'port',
        'value' => 'optional'
      ),
      'db-user' => array(
        'description' => 'Username of the MySQL database.',
        'example-value' => 'username',
        'value' => 'required'
      )
    )
  );

  $items['complete_country_fields'] = array(
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'description' => 'Imports the national countries database.',
    'drupal dependencies' => array('taxonomy'),
    'examples' => array(
      'drush complete_country_fields'
    )
  );
  return $items;
}

function drush_country_import_countries() {
  Country::import_default_countries();
}

function drush_country_build_json_file() {
  $db_host = drush_get_option('db-host', 'localhost');
  $db_user = drush_get_option('db-user', 'root');
  $db_pass = drush_get_option('db-pass', 'andrei');
  $db_name = drush_get_option('db-name', 'cites_joomla');
  $db_port = drush_get_option('db-port', 3306);

  $link = @mysqli_connect($db_host, $db_user, $db_pass, $db_name, $db_port);

  if ($connect_errno = mysqli_connect_errno()) {
    return drush_set_error($connect_errno, mysqli_connect_error());
  }
  $st = $link->prepare("SET NAMES UTF8");
  $st->execute();

  $result_array = drush_query_database($link);

  mysqli_close($link);

  $path = drupal_get_path('module', 'country');

  file_put_contents($path . '/joomla_data.json', json_encode($result_array, JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES | JSON_PRETTY_PRINT));
}

function drush_query_database($link) {
  $query = 'SELECT * FROM ncd_countries';
  $result_array = array();
  $result = mysqli_query($link, $query);

  while ($row = mysqli_fetch_array($result)) {
    $country = Country::get_by_iso2($row['ISO']);

    $result_array[] = array(
      'code2l' => $row['ISO'],
      'code3l' => $country->field_country_iso3['en'][0]['value'],
      'official_name' => array(
        'en' => $row['EN'],
        'fr' => $row['FR'],
        'es' => $row['SP']
      ),
      'category' => $row['Category'],
      'dependent_teritory' => $row['Dep_of'],
      'extra_html' => $row['XTRA_HTML'],
      'date_of_joining' => $row['DATE1'],
      'type' => $row['TYPE'],
      'entry_into_force' => $row['DATE2'],
      'entry_note' => $row['Entry_note'],
      'web_update' => $row['Web_Update'],
    );
  }

  return $result_array;
}

function drush_country_complete_country_fields() {
  $path = drupal_get_path('module', 'country');
  $json_data = json_decode(file_get_contents($path . '/joomla_data.json'), TRUE);

  foreach ($json_data as $country) {
    //var_dump($country);
    $country_obj = Country::get_by_iso2($country['code2l']);
    drush_country_update_node($country, $country_obj);
  }
}

function drush_country_update_node($data, $node = NULL) {
  $languages = array('en', 'es', 'fr');
  $country_categories = array(
    'P' => 'Party',
    'N' => 'Non-Party',
    'D' => 'Dependent territory'
  );
  $country_types = array(
    'A' => 'Accession',
    'Ac' => 'Acceptance',
    'Ap' => 'Approval',
    'C' => 'Continuation',
    'R' => 'Ratification',
    'S' => 'Succession'
  );

  if ($node == NULL) {
    $node = new stdClass();
    $node->uid = 1;
    $node->type = 'country';
    $node->language = 'en';
    $node->title = $data['official_name'][$node->language];
    $node->title_field[$language][0]['value'] = $data['official_name'][$language];
  }
  $category_term = NULL;
  $type_term = NULL;
  $category_term_array = taxonomy_get_term_by_name($country_categories[$data['category']], 'country_category');
  if (!empty($category_term_array)) {
    $category_term = reset($category_term_array);
  }

  $type_term_array = taxonomy_get_term_by_name($country_types[$data['type']], 'country_type');
  if (!empty($type_term_array)) {
    $type_term = reset($type_term_array);
  }

  foreach ($languages as $language) {
    $node->field_country_iso2[$language][0]['value'] = $data['code2l'];
    $node->field_country_iso3[$language][0]['value'] = strtoupper($data['code3l']);
    $node->field_country_official_name[$language][0]['value'] = $data['official_name'][$language];
    if ($category_term != NULL) {
      $node->field_country_category[$language][0]['tid'] = $category_term->tid;
    }
    if ($type_term != NULL) {
      $node->field_country_type[$language][0]['tid'] = $type_term->tid;
    }
    if (strtotime($data['date_of_joining']) != FALSE && strtotime($data['date_of_joining']) > 0) {
      $node->field_country_date_of_joining[$language][0]['value'] = $data['date_of_joining'];
    }
    if (strtotime($data['entry_into_force']) != FALSE && strtotime($data['entry_into_force']) > 0) {
      $node->field_country_entry_into_force[$language][0]['value'] = $data['entry_into_force'];
    }
    $node->field_country_entry_note[$language][0]['summary'] = 'unfiltered_html';
    $node->field_country_entry_note[$language][0]['value'] = $data['entry_note'];
    $node->body[$language][0] = array(
      'value' => $data['extra_html'],
      'format' => 'unfiltered_html'
    );
    $node->field_country_dependent_teritory[$language][0]['value'] = $data['dependent_teritory'];

    if ($language != $node->language) {
      $node->title_field[$language][0]['value'] = $data['official_name'][$language];
      $handler = entity_translation_get_handler('node', $node);
      $translation = array(
        'translate' => 0,
        'status' => 1,
        'language' => $language,
        'source' => $node->language
      );
      $handler->setTranslation($translation, $node);
    }
  }
  $time = strtotime($data['web_update']);
  if ($time != FALSE && $time > 0) {
    $node->created = $time;
    $node->changed = $time;
  }
  echo "Updated " . $node->title . PHP_EOL;
  node_save($node);
}
