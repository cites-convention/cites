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
function external_news_views_default_views() {
  $views = array();

  $view = new view;
  $view->name = 'external_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'External news';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CITES in the news';
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
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_external_news_link']['id'] = 'field_external_news_link';
  $handler->display->display_options['fields']['field_external_news_link']['table'] = 'field_data_field_external_news_link';
  $handler->display->display_options['fields']['field_external_news_link']['field'] = 'field_external_news_link';
  $handler->display->display_options['fields']['field_external_news_link']['label'] = '';
  $handler->display->display_options['fields']['field_external_news_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_news_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_external_news_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_external_news_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_news_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_external_news_link']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[created]: [title_field]';
  $handler->display->display_options['fields']['title_field']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title_field']['alter']['path'] = '[field_external_news_link]';
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
  $handler->display->display_options['fields']['title_field']['field_api_classes'] = 0;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
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
    'external_news' => 'external_news',
  );
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'entity_translations';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'year';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '1973:+0';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_external_news_link']['id'] = 'field_external_news_link';
  $handler->display->display_options['fields']['field_external_news_link']['table'] = 'field_data_field_external_news_link';
  $handler->display->display_options['fields']['field_external_news_link']['field'] = 'field_external_news_link';
  $handler->display->display_options['fields']['field_external_news_link']['label'] = '';
  $handler->display->display_options['fields']['field_external_news_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_news_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_external_news_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_external_news_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_external_news_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_news_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_external_news_link']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_field']['alter']['text'] = '[created]: [title_field]';
  $handler->display->display_options['fields']['title_field']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title_field']['alter']['path'] = '[field_external_news_link]';
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
  $handler->display->display_options['fields']['title_field']['field_api_classes'] = 0;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
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
    'external_news' => 'external_news',
  );
  /* Filter criterion: Entity translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'entity_translation';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['relationship'] = 'entity_translations';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['granularity'] = 'year';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '1973:+0';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'node.created' => 'node.created',
  );
  $handler->display->display_options['path'] = 'news/cuttings/index.php';
  $translatables['external_news'] = array(
    t('Master'),
    t('CITES in the news'),
    t('See more…'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Translations'),
    t('[created]: [title_field]'),
    t('[field_external_news_link]'),
    t('Block'),
    t('more'),
    t('Page'),
    t('Date'),
  );

  $views[$view->name] = $view;

  return $views;
}
