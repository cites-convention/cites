<?php
/**
 * @file
 * cites_reports.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cites_reports_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'biennial_reports';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Biennial reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Biennial reports';
  $handler->display->display_options['use_more_always'] = FALSE;
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
    'field_report_attachment' => 'field_report_attachment',
    'title_field' => 'title_field',
    'field_report_date' => 'field_report_date',
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
    'field_report_attachment' => array(
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
    'field_report_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_report_country_node']['id'] = 'reverse_field_report_country_node';
  $handler->display->display_options['relationships']['reverse_field_report_country_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_report_country_node']['field'] = 'reverse_field_report_country_node';
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Attachment */
  $handler->display->display_options['fields']['field_report_attachment']['id'] = 'field_report_attachment';
  $handler->display->display_options['fields']['field_report_attachment']['table'] = 'field_data_field_report_attachment';
  $handler->display->display_options['fields']['field_report_attachment']['field'] = 'field_report_attachment';
  $handler->display->display_options['fields']['field_report_attachment']['relationship'] = 'reverse_field_report_country_node';
  $handler->display->display_options['fields']['field_report_attachment']['label'] = '';
  $handler->display->display_options['fields']['field_report_attachment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_report_attachment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_report_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_report_attachment']['type'] = 'file_url_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'reverse_field_report_country_node';
  $handler->display->display_options['fields']['title_field']['label'] = 'Report';
  $handler->display->display_options['fields']['title_field']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['path'] = '[field_report_attachment]';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_report_date']['id'] = 'field_report_date';
  $handler->display->display_options['fields']['field_report_date']['table'] = 'field_data_field_report_date';
  $handler->display->display_options['fields']['field_report_date']['field'] = 'field_report_date';
  $handler->display->display_options['fields']['field_report_date']['relationship'] = 'reverse_field_report_country_node';
  $handler->display->display_options['fields']['field_report_date']['type'] = 'date_range_without_time';
  $handler->display->display_options['fields']['field_report_date']['settings'] = array(
    'single' => 'Y',
    'one_month' => 'Y',
    'several_months' => 'Y',
    'several_years' => 'Y-{Y}',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Date -  start date (field_report_date) */
  $handler->display->display_options['sorts']['field_report_date_value']['id'] = 'field_report_date_value';
  $handler->display->display_options['sorts']['field_report_date_value']['table'] = 'field_data_field_report_date';
  $handler->display->display_options['sorts']['field_report_date_value']['field'] = 'field_report_date_value';
  $handler->display->display_options['sorts']['field_report_date_value']['relationship'] = 'reverse_field_report_country_node';
  /* Sort criterion: Content: Date - end date (field_report_date:value2) */
  $handler->display->display_options['sorts']['field_report_date_value2']['id'] = 'field_report_date_value2';
  $handler->display->display_options['sorts']['field_report_date_value2']['table'] = 'field_data_field_report_date';
  $handler->display->display_options['sorts']['field_report_date_value2']['field'] = 'field_report_date_value2';
  $handler->display->display_options['sorts']['field_report_date_value2']['relationship'] = 'reverse_field_report_country_node';
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
    'country' => 'country',
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
  $handler->display->display_options['path'] = 'resources/reports/biennial.php';
  $translatables['biennial_reports'] = array(
    t('Master'),
    t('Biennial reports'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content referencing Content from field_report_country'),
    t('Translations'),
    t('Report'),
    t('Date'),
    t('Page'),
  );
  $export['biennial_reports'] = $view;

  return $export;
}
