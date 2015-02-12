<?php

/**
 * Implementation of hook_drush_command().
 *
 * @return
 *   An associative array describing available command(s).
 */
function cites_contact_drush_command() {
  $items = array();

  // The 'contact-import' command.
  $items['contact-import'] = array(
    'arguments' => array(
      'type' => 'Type of the import. Omit this argument to choose from available options.'
    ),
    'bootstrap'           => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'description'         => 'Imports the national contact database.',
    'drupal dependencies' => array('taxonomy'),
    'examples'            => array(
      'drush contact-import contacts --db-host=localhost --db-user=admin --db-pass --db-name=ncd' => 'Imports the national contact database.'
    ),
    'options' => array(
      'db-host' => array(
        'description'   => 'Hostname of the MySQL database.',
        'example-value' => 'hostname',
        'value'         => 'optional'
      ),
      'db-name' => array(
        'description'   => 'Name of the MySQL database.',
        'example-value' => 'database',
        'value'         => 'required'
      ),
      'db-pass' => array(
        'description'   => 'Password of the MySQL database.',
        'example-value' => 'password',
        'value'         => 'optional'
      ),
      'db-port' => array(
        'description'   => 'Port of the MySQL database.',
        'example-value' => 'port',
        'value'         => 'optional'
      ),
      'db-user' => array(
        'description'   => 'Username of the MySQL database.',
        'example-value' => 'username',
        'value'         => 'required'
      )
    )
  );

  // The 'contact-translate' command.
  $items['contact-translate'] = array(
    'bootstrap'           => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    'description'         => 'Translates the national contact database.',
    'examples'            => array(
      'drush contact-translate' => 'Translates the national contact database.'
    )
  );

  return $items;
}

/**
 * Implementation of hook_drush_help().
 *
 * @param $section
 *   A string with the help section (prepend with 'drush:').
 *
 * @return
 *   A string with the help text for the command.
 */
function cites_contact_drush_help($section) {
  switch ($section) {
    case 'drush:contact-import':
      return dt('This command will import the national contact database.');

    case 'meta:contact:title':
      return dt('Contact commands');

    case 'meta:contact:summary':
      return dt('Imports the national contact database.');
  }
}

/**
 * All types available for initialization. Contrib commands can alter in their
 * own.
 *
 * @return
 *   An associative array of import types.
 */
function drush_cites_contact_contact_import_types() {
  $types = array(
    'all'        => 'drush_cites_contact_contact_import_all',
    'categories' => 'drush_cites_contact_contact_import_categories',
    'languages'  => 'drush_cites_contact_contact_import_languages',
    'contacts'   => 'drush_cites_contact_contact_import_contacts'
  );

  // Command files may customize types as desired.
  drush_command_invoke_all_ref('drush_cites_contact_contact_import', $types);

  return $types;
}

/**
 * Command argument complete callback. Provides argument values for shell
 * completion.
 *
 * @return
 *   An associative array of import types.
 */
function initialize_contact_import_complete() {
  return array('values' => array_keys(drush_cites_contact_contact_import_types()));
}

/**
 * Calls all available import types.
 *
 * @param $link
 *   A link identifier which represents the connection to a MySQL Server.
 *
 * @return
 *   Nothing.
 */
function drush_cites_contact_contact_import_all($link) {
  // Retrieves all types available for import.
  $types = drush_cites_contact_contact_import_types();

  unset($types['all']);

  foreach ($types as $callback) {
    call_user_func($callback, $link);
  }
}

/**
 * Imports categories.
 *
 * @param $link
 *   A link identifier which represents the connection to a MySQL Server.
 *
 * @return
 *   Nothing.
 */
function drush_cites_contact_contact_import_categories($link) {
  $query = 'SELECT * FROM ncd_categories';

  $result = mysqli_query($link, $query);

  if ($errno = mysqli_errno($link)) {
    return drush_set_error($errno, mysqli_error($link));
  }

  $vocabulary = taxonomy_vocabulary_machine_name_load('contact_categories');

  while ($row = mysqli_fetch_array($result)) {
    $term = (object) array(
      'name'   => t($row['CatText']),
      'vid'    => $vocabulary->vid,
      'weight' => t($row['Sort'])
    );

    if (!taxonomy_get_term_by_name($term->name, $vocabulary->machine_name)) {
      taxonomy_term_save($term);

      drush_log(dt('!term-name: Term successfully saved', array('!term-name' => $term->name)), 'ok');
    }
  }
}

/**
 * Imports correspondence languages.
 *
 * @param $link
 *   A link identifier which represents the connection to a MySQL Server.
 *
 * @return
 *   Nothing.
 */
function drush_cites_contact_contact_import_languages($link) {
  $languages = array(
    'English',
    'French',
    'Spanish'
  );

  $vocabulary = taxonomy_vocabulary_machine_name_load('contact_languages');

  foreach ($languages as $lang) {
    $term = (object) array(
      'name' => t($lang),
      'vid'  => $vocabulary->vid
    );

    if (!taxonomy_get_term_by_name($term->name, $vocabulary->machine_name)) {
      taxonomy_term_save($term);

      drush_log(dt('!term-name: Term successfully saved', array('!term-name' => $term->name)), 'ok');
    }
  }
}

/**
 * Imports contacts.
 *
 * @param $link
 *   A link identifier which represents the connection to a MySQL Server.
 */
function drush_cites_contact_contact_import_contacts($link) {
  $categories = array(
    'MA' => 'Management Authority',
    'SA' => 'Scientific Authority',
    'EA' => 'Enforcement Authority',
    'NM' => 'Non-Party "MA"',
    'NS' => 'Non-Party "SA"'
  );

  $languages = array(
    'ENGLISH' => 'English',
    'FRENCH'  => 'French',
    'SPANISH' => 'Spanish'
  );

  $query = 'SELECT * FROM ncd_contacts';

  $result = mysqli_query($link, $query);

  if ($errno = mysqli_errno($link)) {
    return drush_set_error($errno, mysqli_error($link));
  }

  while ($row = mysqli_fetch_array($result)) {
    $title = 'Contact #' . $row['ID'];

    $nid = db_query('SELECT nid FROM node WHERE type = :type AND title = :title', array(':type' => 'contact', ':title' => $title))->fetchField();

    if ($nid) {
      $node = node_load($nid);
    } else {
      $node = (object) array(
        'language' => 'en',
        'title'    => $title,
        'type'     => 'cites_contact'
      );

      node_object_prepare($node);

      $node->uid = 1;
    }

    if ($country = Country::get_by_iso2($row['COUNT_CODE'])) {
      $node->field_contact_actual[LANGUAGE_NONE][0]['target_id'] = $country->nid;
    }

    $node->field_contact_address[$node->language][0]['value'] = $row['ADDRESS'];
    $node->field_contact_cable[$node->language][0]['value'] = $row['CABLE'];

    if ($terms = taxonomy_get_term_by_name($categories[$row['CAT']], 'contact_categories'))
    {
      $term = array_pop($terms);
      $node->field_contact_category[LANGUAGE_NONE][0]['tid'] = $term->tid;
    }

    $node->field_contact_ea[LANGUAGE_NONE][0]['value'] = $row['EA'];
    $node->field_contact_ea_letter[LANGUAGE_NONE][0]['value'] = $row['EA_letter'];
    $node->field_contact_email[$node->language][0]['value'] = $row['EMAIL'];
    $node->field_contact_extra_line[$node->language][0]['value'] = $row['XTRA'];
    $node->field_contact_fax[$node->language][0]['value'] = $row['FAX'];
    $node->field_contact_focal_point[LANGUAGE_NONE][0]['value'] = $row['Focal'];
    $node->field_contact_info[$node->language][0]['value'] = $row['Info'];

    foreach ($languages as $col => $lang) {
      if ($row[$col] && $terms = taxonomy_get_term_by_name($lang, 'contact_languages')) {
        $term = array_pop($terms);
        $node->field_contact_languages[LANGUAGE_NONE][]['tid'] = $term->tid;
      }
    }

    $node->field_contact_line_1[$node->language][0]['value'] = $row['Line1'];
    $node->field_contact_line_2[$node->language][0]['value'] = $row['Line2'];
    $node->field_contact_line_3[$node->language][0]['value'] = $row['Line3'];
    $node->field_contact_ma[LANGUAGE_NONE][0]['value'] = $row['MA'];
    $node->field_contact_ma_letter[LANGUAGE_NONE][0]['value'] = $row['MA_letter'];

    if ($country = Country::get_by_iso2($row['COUNT_MAIL'])) {
      $node->field_contact_mailing[LANGUAGE_NONE][0]['target_id'] = $country->nid;
    }

    $node->field_contact_national_contact[LANGUAGE_NONE][0]['value'] = $row['NatCont'];
    $node->field_contact_note_after_1[$node->language][0]['value'] = $row['NoteAfter1'];
    $node->field_contact_note_after_2[$node->language][0]['value'] = $row['NoteAfter2'];
    $node->field_contact_note_before_1[$node->language][0]['value'] = $row['Note1'];
    $node->field_contact_note_before_2[$node->language][0]['value'] = $row['Note2'];
    $node->field_contact_note_before_3[$node->language][0]['value'] = $row['Note3'];
    $node->field_contact_place[$node->language][0]['value'] = $row['PLACE'];
    $node->field_contact_sa[LANGUAGE_NONE][0]['value'] = $row['SA'];
    $node->field_contact_sa_letter[LANGUAGE_NONE][0]['value'] = $row['SA_letter'];
    $node->field_contact_telephone[$node->language][0]['value'] = $row['TEL'];
    $node->field_contact_telex[$node->language][0]['value'] = $row['TX'];
    $node->field_contact_website[$node->language][0]['url'] = $row['WEB'];
    $node->field_contact_website_info[$node->language][0]['value'] = $row['WEB_next'];

    $node = node_submit($node);

    node_save($node);

    drush_log(dt('!title: Node successfully saved', array('!title' => $title)), 'ok');
  }
}

/**
 * Command callback for drush contact-import.
 *
 * @see drush_invoke()
 * @see drush.api.php
 *
 * @param $type
 *   A string with the type of the import.
 *
 * @return
 *   Nothing.
 */
function drush_cites_contact_contact_import($type = NULL) {
  // Gets the values for the database options.
  $db_host = drush_get_option('db-host');
  $db_user = drush_get_option('db-user');
  $db_pass = drush_get_option('db-pass');
  $db_name = drush_get_option('db-name');
  $db_port = drush_get_option('db-port');

  if ($db_pass === TRUE) {
    echo 'Password: ';

    $stty = shell_exec('stty -g');

    shell_exec('stty -echo');

    $db_pass = trim(fgets(STDIN));

    echo PHP_EOL;

    shell_exec('stty ' . $stty);
  }

  $link = @mysqli_connect($db_host, $db_user, $db_pass, $db_name, $db_port);

  if ($connect_errno = mysqli_connect_errno()) {
    return drush_set_error($connect_errno, mysqli_connect_error());
  }

  if ($stmt = mysqli_prepare($link, 'SET NAMES UTF8')) {
    mysqli_stmt_execute($stmt);
    mysqli_stmt_close($stmt);
  }

  // Retrieves all types available for import.
  $types = drush_cites_contact_contact_import_types();

  // Validates provided import type.
  if ($type && !key_exists($type, $types)) {
    return drush_set_error('ERROR_INVALID_TYPE', dt('!type: Invalid import type.', array('!type' => $type)));
  }

  if ($type) {
    // Calls a given function, passing through all arguments unchanged.
    drush_op($types[$type], $link);
  }
  else {
    // Asks the user to select an item from a list.
    $type = drush_choice($types, 'Enter a number to choose the import type.', '!key');

    if ($type !== FALSE) {
      call_user_func($types[$type], $link);
    }
  }

  mysqli_close($link);

  if ($type !== FALSE) {
    // Gets the name of the current bootstrapped site.
    $site_name = drush_sitealias_bootstrapped_site_name();

    drush_log(dt('!site-name: \'!type\' successfully imported', array('!site-name' => $site_name, '!type' => $type)), 'success');
  }
}

/**
 * Command callback for drush contact-translate.
 *
 * @see drush_invoke()
 * @see drush.api.php
 *
 * @return
 *   Nothing.
 */
function drush_cites_contact_contact_translate() {
  $languages = array(
    'en',
    'fr',
    'es'
  );

  $nids = db_select('node')
    ->fields('node')
    ->condition('type', 'cites_contact')
    ->execute()
    ->fetchCol();

  foreach ($nids as $nid) {
    $node = node_load($nid);

    foreach ($languages as $language) {
      if ($language == $node->language) {
        continue;
      }

      $node->title_field[$language][0]['value'] = $node->title_field[$node->language][0]['value'];
      $node->field_contact_address[$language][0]['value'] = $node->field_contact_address[$node->language][0]['value'];
      $node->field_contact_cable[$language][0]['value'] = $node->field_contact_cable[$node->language][0]['value'];
      $node->field_contact_email[$language][0]['value'] = $node->field_contact_email[$node->language][0]['value'];
      $node->field_contact_extra_line[$language][0]['value'] = $node->field_contact_extra_line[$node->language][0]['value'];
      $node->field_contact_fax[$language][0]['value'] = $node->field_contact_fax[$node->language][0]['value'];
      $node->field_contact_info[$language][0]['value'] = $node->field_contact_info[$node->language][0]['value'];
      $node->field_contact_line_1[$language][0]['value'] = $node->field_contact_line_1[$node->language][0]['value'];
      $node->field_contact_line_2[$language][0]['value'] = $node->field_contact_line_2[$node->language][0]['value'];
      $node->field_contact_line_3[$language][0]['value'] = $node->field_contact_line_3[$node->language][0]['value'];
      $node->field_contact_note_after_1[$language][0]['value'] = $node->field_contact_note_after_1[$node->language][0]['value'];
      $node->field_contact_note_after_2[$language][0]['value'] = $node->field_contact_note_after_2[$node->language][0]['value'];
      $node->field_contact_note_before_1[$language][0]['value'] = $node->field_contact_note_before_1[$node->language][0]['value'];
      $node->field_contact_note_before_2[$language][0]['value'] = $node->field_contact_note_before_2[$node->language][0]['value'];
      $node->field_contact_note_before_3[$language][0]['value'] = $node->field_contact_note_before_3[$node->language][0]['value'];
      $node->field_contact_place[$language][0]['value'] = $node->field_contact_place[$node->language][0]['value'];
      $node->field_contact_telephone[$language][0]['value'] = $node->field_contact_telephone[$node->language][0]['value'];
      $node->field_contact_telex[$language][0]['value'] = $node->field_contact_telex[$node->language][0]['value'];
      $node->field_contact_website[$language][0]['url'] = $node->field_contact_website[$node->language][0]['url'];
      $node->field_contact_website_info[$language][0]['value'] = $node->field_contact_website_info[$node->language][0]['value'];

      $handler = entity_translation_get_handler('node', $node, TRUE);

      $handler->initTranslations();

      $translation = array(
        'language'  => $language,
        'source'    => $node->language,
        'status'    => 1,
        'translate' => 0
      );

      $handler->setTranslation($translation, $node);
    }

    $node = node_submit($node);

    node_save($node);

    drush_log(dt('!title: Node successfully translated', array('!title' => $node->title)), 'ok');
  }

  // Gets the name of the current bootstrapped site.
  $site_name = drush_sitealias_bootstrapped_site_name();

  drush_log(dt('!site-name: Contacts successfully translated', array('!site-name' => $site_name)), 'success');
}
