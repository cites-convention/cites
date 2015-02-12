<?php
/**
 * Adds body classes if certain regions have content.
 *
 * @param $variables
 *   An associative array with generated variables.
 *
 * @return
 *   Nothing.
 */
function cites_theme_preprocess_html(&$variables) {
  if (!empty($variables['page']['featured'])) {
    $variables['classes_array'][] = 'featured';
  }

  // Adds conditional stylesheets for IE.
  drupal_add_css(
    path_to_theme() . '/css/ie.css',
    array(
      'group'    => CSS_THEME,
      'browsers' => array(
        'IE'  => 'lte IE 7',
        '!IE' => FALSE
      ),
      'preprocess' => FALSE
    )
  );

  // Adds conditional stylesheets for IE.
  drupal_add_css(
    path_to_theme() . '/css/ie7.css',
    array(
      'group'    => CSS_THEME,
      'browsers' => array(
        'IE'  => 'IE 7',
        '!IE' => FALSE
      ),
      'preprocess' => FALSE
    )
  );

  // Adds conditional stylesheets for IE.
  drupal_add_css(
    path_to_theme() . '/css/ie6.css',
    array(
      'group'    => CSS_THEME,
      'browsers' => array(
        'IE'  => 'IE 6',
        '!IE' => FALSE
      ),
      'preprocess' => FALSE
    )
  );

  // Adds the Nice Menu required files if the module is enabled.
  if (module_exists('nice_menus')) {
    // Adds the Superfish JS library if enabled.
    if (variable_get('nice_menus_js', 1) == 1)
      drupal_add_library('nice_menus', 'nice_menus');

    // Adds the main CSS functionality.
    drupal_add_css(
      drupal_get_path('module', 'nice_menus') . '/css/nice_menus.css',
      array(
        'basename' => 'nice_menus.css',
        'group'    => CSS_DEFAULT
      )
    );

    // Adds the default CSS layout.
    drupal_add_css(
      drupal_get_path('module', 'nice_menus') . '/css/nice_menus_default.css',
      array(
        'basename' => '/css/nice_menus_default.css',
        'group'    => CSS_DEFAULT
      )
    );
  }
}


/**
 * Performs alterations before a page is rendered.
 *
 * @param $page
 *   Nested array of renderable elements that make up the page.
 *
 * @return
 *   Nothing.
 */
function cites_theme_page_alter(&$page) {
  global $theme;

  $item = menu_get_item();

  if (!drupal_is_front_page() && $item['path'] != 'admin/structure/block/demo/' . $theme) {
    // Removes the second sidebar region from other pages than front page
    // and block regions demonstration.
    unset($page['sidebar_second']);
  } else if (empty($page['sidebar_second'])) {
    // Forces the second sidebar region to render on the front page even if
    // it's empty.
    $page['sidebar_second'] = array('');
  }
}


/**
 * Overrides or inserts variables into the page template.
 *
 * @param $variables
 *   An associative array with generated variables.
 *
 * @return
 *   Nothing.
 */
function cites_theme_process_page(&$variables) {
  // Visually hides the site name and slogan if they are toggled off.
  $variables['hide_site_name']   = theme_get_setting('toggle_name') ? FALSE : TRUE;
  $variables['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TRUE;

  if ($variables['hide_site_name']) {
    // Rebuilds the site_name if toggle_name is FALSE.
    $variables['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
  }

  if ($variables['hide_site_slogan']) {
    // Rebuilds the site_slogan if toggle_site_slogan is FALSE.
    $variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
  }

  // Adds a wrapper div for positioning the title and the shortcut link next
  // to each other.
  if (!empty($variables['title_suffix']['add_or_remove_shortcut']) && $variables['title']) {
    $variables['title_prefix']['shortcut_wrapper'] = array(
      '#markup' => '<div class="shortcut-wrapper clearfix">',
      '#weight' => 100,
    );

    $variables['title_suffix']['shortcut_wrapper'] = array(
      '#markup' => '</div>',
      '#weight' => -99,
    );

    // Forces the shortcut link to be the first item in title_suffix.
    $variables['title_suffix']['add_or_remove_shortcut']['#weight'] = -100;
  }
}


/**
 * Implements hook_preprocess_maintenance_page().
 *
 * @see template_preprocess_maintenance_page
 *
 * @param $variables
 *   An associative array with generated variables.
 *
 * @return
 *   Nothing.
 */
function cites_theme_preprocess_maintenance_page(&$variables) {
  // Sets the site_name to an empty string if no database connection is
  // available or during site installation.
  if (!$variables['db_is_active'])
    $variables['site_name'] = '';

  // Adds the maintenance CSS layout.
  drupal_add_css(drupal_get_path('theme', 'cites_theme') . '/css/maintenance-page.css');
}


/**
 * Overrides or inserts variables into the maintenance page template.
 *
 * @param $variables
 *   An associative array with generated variables.
 *
 * @return
 *   Nothing.
 */
function cites_theme_process_maintenance_page(&$variables) {
  // Always print the site name and slogan, but if they are toggled off, we'll
  // just hide them visually.
  $variables['hide_site_name']   = theme_get_setting('toggle_name') ? FALSE : TRUE;
  $variables['hide_site_slogan'] = theme_get_setting('toggle_slogan') ? FALSE : TRUE;

  if ($variables['hide_site_name']) {
    // If toggle_name is FALSE, the site_name will be empty, so we rebuild it.
    $variables['site_name'] = filter_xss_admin(variable_get('site_name', 'Drupal'));
  }

  if ($variables['hide_site_slogan']) {
    // If toggle_site_slogan is FALSE, the site_slogan will be empty, so we rebuild it.
    $variables['site_slogan'] = filter_xss_admin(variable_get('site_slogan', ''));
  }
}


/**
 * Overrides or inserts variables into the node template.
 *
 * @param $variables
 *   An associative array with generated variables.
 *
 * @return
 *   Nothing.
 */
function cites_theme_preprocess_node(&$variables) {
  if ($variables['view_mode'] == 'full' && node_is_page($variables['node']))
    $variables['classes_array'][] = 'node-full';
}


/**
 * Overrides or inserts variables into the page template.
 *
 * @param $variables
 *   An associative array with generated variables.
 *
 * @return
 *   Nothing.
 */
function cites_theme_preprocess_page(&$variables) {
  if (!isset($variables['node']))
    return;

  $node = $variables['node'];

  if ($node->type != 'document')
    return;

  $language = $variables['language']->language;
  $taxonomy_term = taxonomy_term_load($node->field_document_type['und'][0]['tid']);
  $type = $taxonomy_term->name;
  $translated_type = $type;

  if (module_exists('i18n_taxonomy')) {
      $translated_type = i18n_taxonomy_term_name($taxonomy_term, $language);
  }

  $code     = $node->field_document_no['und'][0]['value'];

  switch ($type) {
    case "Decision":
      $title = $node->title . ' ' . $code;
      break;
    case "Resolution":
      $title = $translated_type . ' ' . $code;
      break;
    default:
      return;
  }

  if (isset($title)) {
    drupal_set_title($title);

    $variables['title'] = $title;
  }
}


/**
 * Overrides or inserts variables into the block template.
 *
 * @param $variables
 *   An associative array with generated variables.
 *
 * @return
 *   Nothing.
 */
function cites_theme_preprocess_block(&$variables) {
  // Visually hides block titles in the header and footer regions.
  if (in_array($variables['block']->region, array('header', 'footer')))
    $variables['title_attributes_array']['class'][] = 'element-invisible';
}


/**
 * Implements theme_menu_tree().
 *
 * @param $variables
 *   An associative array with generated variables.
 *
 * @return
 *   HTML for a wrapper for a menu sub-tree.
 */
function cites_theme_menu_tree($variables) {
  return '<ul class="menu clearfix">' . $variables['tree'] . '</ul>';
}


/**
 * Implements theme_field__field_type().
 *
 * @param $variables
 *   An associative array with generated variables.
 *
 * @return
 *   HTML for a field.
 */
function cites_theme_field__taxonomy_term_reference($variables) {
  $output = '';

  // Renders the label, if it's not hidden.
  if (!$variables['label_hidden'])
    $output .= '<h3 class="field-label">' . $variables['label'] . ': </h3>';

  // Renders the items.
  $output .= ($variables['element']['#label_display'] == 'inline') ? '<ul class="links inline">' : '<ul class="links">';

  foreach ($variables['items'] as $delta => $item)
    $output .= '<li class="taxonomy-term-reference-' . $delta . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</li>';

  $output .= '</ul>';

  // Renders the top-level DIV.
  $output = '<div class="' . $variables['classes'] . (!in_array('clearfix', $variables['classes_array']) ? ' clearfix' : '') . '"' . $variables['attributes'] .'>' . $output . '</div>';

  return $output;
}


/**
 * Performs alterations before a form is rendered.
 *
 * @SuppressWarnings(PHPMD.UnusedFormalParameter)
 *
 * @param $form
 *   Nested array of form elements that comprise the form.
 * @param $form_state
 *   A keyed array containing the current state of the form. The arguments that
 *   drupal_get_form() was originally called with are available in the array
 *   $form_state['build_info']['args'].
 * @param $form_id
 *   String representing the name of the form itself. Typically this is the
 *   name of the function that generated the form.
 *
 * @return
 *   Nothing.
 */
function cites_theme_form_alter(&$form, &$form_state, $form_id) {
  // Alters the search block forms.
  if ($form_id == 'search_block_form') {
    // Vissually hides the submit button.
    $form['actions']['#attributes']['class'][] = 'element-invisible';

    // Adds the placeholder text.
    $form['search_block_form']['#attributes']['placeholder'] = t('Search');
  }
}


/**
 * Performs alterations before the language switcher is rendered.
 *
 * @SuppressWarnings(PHPMD.UnusedFormalParameter)
 *
 * @param $links
 *   Nested array of links keyed by language code.
 * @param $type
 *   The language type the links will switch.
 * @param $path
 *   The current path.
 *
 * @return
 *   Nothing.
 */
function cites_theme_language_switch_links_alter(&$links, $type, $path) {
  global $language;

  // Removes the active language link.
  unset($links[$language->language]);
}


/**
 * Implements theme_feed_icon().
 *
 * @param $variables
 *   An associative array with generated variables.
 *
 * @return
 *   HTML for a feed icon.
 */
function cites_theme_feed_icon($variables) {
  return;
}


/**
 * Performs alterations before the social media services are used.
 *
 * @param $services
 *   Nested array of social media services.
 *
 * @return
 *   Nothing.
 */
function cites_theme_on_the_web_get_services_alter(&$services) {
  unset(
    $services['itunes'],
    $services['pinterest']
  );

  ksort($services);
}


/**
 * Implements theme_on_the_web_image().
 *
 * @param $variables
 *   An associative array with generated variables.
 *
 * @return
 *   HTML for a social media icon.
 */
function cites_theme_on_the_web_image($variables) {
  $service = $variables['service'];
  $title   = $variables['title'];
  $size    = variable_get('on_the_web_size', 'sm');

  $variables = array(
    'alt'   => $title,
    'path'  => drupal_get_path('theme', 'cites_theme') . '/images/social-icons/' . $service . '-' . $size . '.png',
    'title' => $title
  );

  return theme('image', $variables);
}


/**
 * Implements hook_views_pre_render().
 *
 * @param $view
 *   The view object about to be processed.
 *
 * @return
 *   Nothing.
 */
function cites_theme_views_pre_render(&$view) {
  if ($view->name == 'national_contacts_and_information') {
    switch ($view->current_display) {
      case 'page_contacts':
      case 'page_reports':
      case 'page_registers':
        $country = strtoupper($view->args[0]);
        $path = drupal_get_path('theme', 'cites_theme') . '/images/flags/' . $country . '.gif';

        if (file_exists($path)) {
          $variables = array(
            'alt'   => $view->build_info['title'],
            'path'  => $path,
            'title' => $view->build_info['title']
          );

          $view->build_info['title'] = theme('image', $variables) . ' ' . $view->build_info['title'];
        }
    }
  }
}
