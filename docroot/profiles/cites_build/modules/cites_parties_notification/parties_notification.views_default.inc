<?php
/**
 * @file
 * parties_notification.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function parties_notification_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'parties_notification';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Notifications to the parties';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Notifications to the Parties';
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
  $handler->display->display_options['row_options']['inline'] = array(
    'field_notification_annexes' => 'field_notification_annexes',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Content: Entity translation: translations */
  $handler->display->display_options['relationships']['entity_translations']['id'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['table'] = 'node';
  $handler->display->display_options['relationships']['entity_translations']['field'] = 'entity_translations';
  $handler->display->display_options['relationships']['entity_translations']['required'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'j F Y';
  /* Field: Content: Attachment */
  $handler->display->display_options['fields']['field_notification_attachment']['id'] = 'field_notification_attachment';
  $handler->display->display_options['fields']['field_notification_attachment']['table'] = 'field_data_field_notification_attachment';
  $handler->display->display_options['fields']['field_notification_attachment']['field'] = 'field_notification_attachment';
  $handler->display->display_options['fields']['field_notification_attachment']['label'] = '';
  $handler->display->display_options['fields']['field_notification_attachment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_notification_attachment']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_notification_attachment']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_notification_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_notification_attachment']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_notification_attachment']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[created]: [title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_notification_attachment]';
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
  /* Field: Content: Annexes */
  $handler->display->display_options['fields']['field_notification_annexes']['id'] = 'field_notification_annexes';
  $handler->display->display_options['fields']['field_notification_annexes']['table'] = 'field_data_field_notification_annexes';
  $handler->display->display_options['fields']['field_notification_annexes']['field'] = 'field_notification_annexes';
  $handler->display->display_options['fields']['field_notification_annexes']['label'] = '';
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_notification_annexes']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_notification_annexes']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_notification_annexes']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_notification_annexes']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_notification_annexes']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_notification_annexes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_notification_annexes']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'parties_notification' => 'parties_notification',
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'created_1' => 'created_1',
    'field_notification_number' => 'field_notification_number',
    'created' => 'created',
    'field_notification_status' => 'field_notification_status',
    'field_notification_attachment' => 'field_notification_attachment',
    'field_notification_annexes' => 'field_notification_annexes',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notification_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notification_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notification_attachment' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_notification_annexes' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'Y';
  /* Field: Content: Number */
  $handler->display->display_options['fields']['field_notification_number']['id'] = 'field_notification_number';
  $handler->display->display_options['fields']['field_notification_number']['table'] = 'field_data_field_notification_number';
  $handler->display->display_options['fields']['field_notification_number']['field'] = 'field_notification_number';
  $handler->display->display_options['fields']['field_notification_number']['label'] = 'No.';
  $handler->display->display_options['fields']['field_notification_number']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_notification_number']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_notification_number']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_notification_number']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_notification_number']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_notification_number']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_notification_number']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_notification_number']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_notification_number']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_notification_number']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_notification_number']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_notification_number']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_notification_number']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_notification_number']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_notification_number']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_notification_number']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_notification_number']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_notification_number']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_notification_number']['field_api_classes'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date of issue';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd/m/Y';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_notification_status']['id'] = 'field_notification_status';
  $handler->display->display_options['fields']['field_notification_status']['table'] = 'field_data_field_notification_status';
  $handler->display->display_options['fields']['field_notification_status']['field'] = 'field_notification_status';
  $handler->display->display_options['fields']['field_notification_status']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_notification_status']['alter']['text'] = '<span class="status status-[field_notification_status-value]">[field_notification_status]</span>';
  $handler->display->display_options['fields']['field_notification_status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_notification_status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_notification_status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_notification_status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_notification_status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_notification_status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_notification_status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_notification_status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_notification_status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_notification_status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_notification_status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_notification_status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_notification_status']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_notification_status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_notification_status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_notification_status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_notification_status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_notification_status']['field_api_classes'] = 0;
  /* Field: Content: Attachment */
  $handler->display->display_options['fields']['field_notification_attachment']['id'] = 'field_notification_attachment';
  $handler->display->display_options['fields']['field_notification_attachment']['table'] = 'field_data_field_notification_attachment';
  $handler->display->display_options['fields']['field_notification_attachment']['field'] = 'field_notification_attachment';
  $handler->display->display_options['fields']['field_notification_attachment']['label'] = '';
  $handler->display->display_options['fields']['field_notification_attachment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_notification_attachment']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_notification_attachment']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_notification_attachment']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_notification_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_notification_attachment']['field_api_classes'] = 0;
  /* Field: Content: Annexes */
  $handler->display->display_options['fields']['field_notification_annexes']['id'] = 'field_notification_annexes';
  $handler->display->display_options['fields']['field_notification_annexes']['table'] = 'field_data_field_notification_annexes';
  $handler->display->display_options['fields']['field_notification_annexes']['field'] = 'field_notification_annexes';
  $handler->display->display_options['fields']['field_notification_annexes']['label'] = '';
  $handler->display->display_options['fields']['field_notification_annexes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_notification_annexes']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_notification_annexes']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_notification_annexes']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_notification_annexes']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_notification_annexes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_notification_annexes']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_notification_annexes']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_notification_annexes']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Title';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_notification_attachment]
[field_notification_annexes]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
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
    'parties_notification' => 'parties_notification',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'entity_translations';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Status (field_notification_status) */
  $handler->display->display_options['filters']['field_notification_status_value']['id'] = 'field_notification_status_value';
  $handler->display->display_options['filters']['field_notification_status_value']['table'] = 'field_data_field_notification_status';
  $handler->display->display_options['filters']['field_notification_status_value']['field'] = 'field_notification_status_value';
  $handler->display->display_options['filters']['field_notification_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_notification_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_notification_status_value']['expose']['operator_id'] = 'field_notification_status_value_op';
  $handler->display->display_options['filters']['field_notification_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_notification_status_value']['expose']['operator'] = 'field_notification_status_value_op';
  $handler->display->display_options['filters']['field_notification_status_value']['expose']['identifier'] = 'field_notification_status_value';
  $handler->display->display_options['filters']['field_notification_status_value']['expose']['reduce'] = 0;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = 'between';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'year';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['default_to_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '1973:+0';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  $handler->display->display_options['path'] = 'notif/index.php';
  $translatables['parties_notification'] = array(
    t('Master'),
    t('Notifications to the Parties'),
    t('See more…'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Translations'),
    t('[created]: [title]'),
    t('[field_notification_attachment]'),
    t('Block'),
    t('more'),
    t('Page'),
    t('No.'),
    t('Date of issue'),
    t('Status'),
    t('<span class="status status-[field_notification_status-value]">[field_notification_status]</span>'),
    t('Title'),
    t('[field_notification_attachment]
[field_notification_annexes]'),
    t('Date'),
  );

  $export['parties_notification'] = $view;

  return $export;
}
