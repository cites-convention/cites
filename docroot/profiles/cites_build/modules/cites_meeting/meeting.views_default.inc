<?php

/**
 * @file
 * Custom views definitions for the external news module.
 *
 * @SuppressWarnings(PHPMD.UnusedLocalVariable)
 */

/**
 * Implements hook_views_default_views().
 */
function meeting_views_default_views() {
  $views = array();

  $view = new view;
  $view->name = 'calendar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CITES calendar';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'See more…';
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_meeting_date']['id'] = 'field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date']['table'] = 'field_data_field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date']['field'] = 'field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meeting_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_meeting_date']['type'] = 'date_range_without_time';
  $handler->display->display_options['fields']['field_meeting_date']['settings'] = array(
    'single' => 'd F',
    'one_month' => 'd-{d} F',
    'several_months' => 'd F-{d} {F}',
    'several_years' => 'd F Y-{d} {F} {Y}',
  );
  $handler->display->display_options['fields']['field_meeting_date']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[field_meeting_date]: [body-summary]';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'entity_translations';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'entity_translations';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Content: Date - end date (field_meeting_date:value2) */
  $handler->display->display_options['filters']['field_meeting_date_value2']['id'] = 'field_meeting_date_value2';
  $handler->display->display_options['filters']['field_meeting_date_value2']['table'] = 'field_data_field_meeting_date';
  $handler->display->display_options['filters']['field_meeting_date_value2']['field'] = 'field_meeting_date_value2';
  $handler->display->display_options['filters']['field_meeting_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_meeting_date_value2']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_meeting_date_1',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_meeting_date_1']['id'] = 'field_meeting_date_1';
  $handler->display->display_options['fields']['field_meeting_date_1']['table'] = 'field_data_field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date_1']['field'] = 'field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_date_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_date_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_date_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meeting_date_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meeting_date_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meeting_date_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meeting_date_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meeting_date_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_date_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_date_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_date_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_date_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_date_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_date_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meeting_date_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_date_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_date_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_meeting_date_1']['settings'] = array(
    'format_type' => 'month_year',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_meeting_date_1']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_meeting_date']['id'] = 'field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date']['table'] = 'field_data_field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date']['field'] = 'field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meeting_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_meeting_date']['type'] = 'date_range_without_time';
  $handler->display->display_options['fields']['field_meeting_date']['settings'] = array(
    'single' => 'd F',
    'one_month' => 'd-{d} F',
    'several_months' => 'd F-{d} {F}',
    'several_years' => 'd F Y-{d} {F} {Y}',
  );
  $handler->display->display_options['fields']['field_meeting_date']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<u>[field_meeting_date]</u>: [body-summary]';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'news/calendar.php';
  $translatables['calendar'] = array(
    t('Master'),
    t('CITES calendar'),
    t('See more…'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Translations'),
    t('[field_meeting_date]: [body-summary]'),
    t('Block'),
    t('more'),
    t('Page'),
    t('<u>[field_meeting_date]</u>: [body-summary]'),
  );

  $views[$view->name] = $view;

  $view = new view;
  $view->name = 'resolutions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resolutions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resolutions of the Conference of the Parties in effect after the 16th meeting';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_document_no' => 'field_document_no',
    'title_field' => 'title_field',
    'field_document_files' => 'field_document_files',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_no' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_field' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_document_files' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="intro.php">Introduction</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 1;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_meeting_document_target_id']['id'] = 'field_meeting_document_target_id';
  $handler->display->display_options['relationships']['field_meeting_document_target_id']['table'] = 'field_data_field_meeting_document';
  $handler->display->display_options['relationships']['field_meeting_document_target_id']['field'] = 'field_meeting_document_target_id';
  $handler->display->display_options['relationships']['field_meeting_document_target_id']['label'] = 'Documents';
  $handler->display->display_options['relationships']['field_meeting_document_target_id']['required'] = 0;
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = 0;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_meeting_country']['id'] = 'field_meeting_country';
  $handler->display->display_options['fields']['field_meeting_country']['table'] = 'field_data_field_meeting_country';
  $handler->display->display_options['fields']['field_meeting_country']['field'] = 'field_meeting_country';
  $handler->display->display_options['fields']['field_meeting_country']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_country']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meeting_country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_country']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_meeting_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_meeting_country']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_meeting_date']['id'] = 'field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date']['table'] = 'field_data_field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date']['field'] = 'field_meeting_date';
  $handler->display->display_options['fields']['field_meeting_date']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meeting_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_meeting_date']['type'] = 'date_range_without_time';
  $handler->display->display_options['fields']['field_meeting_date']['settings'] = array(
    'single' => 'd F Y',
    'one_month' => 'd-{d} F Y',
    'several_months' => 'd F-{d} {F} Y',
    'several_years' => 'd F Y-{d} {F} {Y}',
  );
  $handler->display->display_options['fields']['field_meeting_date']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_meeting_country]), [field_meeting_date]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Number / Code */
  $handler->display->display_options['fields']['field_document_no']['id'] = 'field_document_no';
  $handler->display->display_options['fields']['field_document_no']['table'] = 'field_data_field_document_no';
  $handler->display->display_options['fields']['field_document_no']['field'] = 'field_document_no';
  $handler->display->display_options['fields']['field_document_no']['relationship'] = 'field_meeting_document_target_id';
  $handler->display->display_options['fields']['field_document_no']['label'] = '';
  $handler->display->display_options['fields']['field_document_no']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_no']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_document_no']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_no']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_no']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_no']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_no']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_no']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_no']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_no']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_no']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_no']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_no']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_no']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_no']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_no']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_no']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_no']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_no']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_document_no']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['field_document_no']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_meeting_document_target_id';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_field']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_field']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_field']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_field']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_field']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_field']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_field']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  $handler->display->display_options['fields']['title_field']['field_api_classes'] = 0;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_document_files']['id'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['table'] = 'field_data_field_document_files';
  $handler->display->display_options['fields']['field_document_files']['field'] = 'field_document_files';
  $handler->display->display_options['fields']['field_document_files']['relationship'] = 'field_meeting_document_target_id';
  $handler->display->display_options['fields']['field_document_files']['label'] = '';
  $handler->display->display_options['fields']['field_document_files']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_document_files']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_document_files']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_document_files']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_document_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_document_files']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_document_files']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_document_files']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_document_files']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_document_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_document_files']['type'] = 'file_icon';
  $handler->display->display_options['fields']['field_document_files']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_document_files']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_document_files']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_document_files']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_document_files']['separator'] = ' ';
  $handler->display->display_options['fields']['field_document_files']['field_api_classes'] = 0;
  /* Sort criterion: Content: Date - end date (field_meeting_date:value2) */
  $handler->display->display_options['sorts']['field_meeting_date_value2']['id'] = 'field_meeting_date_value2';
  $handler->display->display_options['sorts']['field_meeting_date_value2']['table'] = 'field_data_field_meeting_date';
  $handler->display->display_options['sorts']['field_meeting_date_value2']['field'] = 'field_meeting_date_value2';
  $handler->display->display_options['sorts']['field_meeting_date_value2']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'entity_translations';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'res/index.php';
  $translatables['resolutions'] = array(
    t('Master'),
    t('Resolutions of the Conference of the Parties in effect after the 16th meeting'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="intro.php">Introduction</a>'),
    t('Documents'),
    t('Translations'),
    t('[title] ([field_meeting_country]), [field_meeting_date]'),
    t('Page'),
  );

  $views[$view->name] = $view;

  return $views;
}
