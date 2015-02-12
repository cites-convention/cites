<?php
/**
 * @file
 * institution.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function institution_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'register_of_captive_breeding_operations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Register of captive-breeding operations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '[field_inst_country]';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_inst_country_target_id']['id'] = 'field_inst_country_target_id';
  $handler->display->display_options['relationships']['field_inst_country_target_id']['table'] = 'field_data_field_inst_country';
  $handler->display->display_options['relationships']['field_inst_country_target_id']['field'] = 'field_inst_country_target_id';
  $handler->display->display_options['relationships']['field_inst_country_target_id']['label'] = 'Country';
  $handler->display->display_options['relationships']['field_inst_country_target_id']['required'] = 0;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_inst_country']['id'] = 'field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['table'] = 'field_data_field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['field'] = 'field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['label'] = '';
  $handler->display->display_options['fields']['field_inst_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inst_country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inst_country']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_inst_country']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
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
  /* Field: Content: Primary */
  $handler->display->display_options['fields']['field_inst_primary']['id'] = 'field_inst_primary';
  $handler->display->display_options['fields']['field_inst_primary']['table'] = 'field_data_field_inst_primary';
  $handler->display->display_options['fields']['field_inst_primary']['field'] = 'field_inst_primary';
  $handler->display->display_options['fields']['field_inst_primary']['label'] = 'Operation';
  $handler->display->display_options['fields']['field_inst_primary']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_inst_primary']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_inst_primary']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_inst_primary']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_inst_primary']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['separator'] = '';
  $handler->display->display_options['fields']['field_inst_primary']['field_api_classes'] = 0;
  /* Field: Content: Secondary */
  $handler->display->display_options['fields']['field_inst_secondary']['id'] = 'field_inst_secondary';
  $handler->display->display_options['fields']['field_inst_secondary']['table'] = 'field_data_field_inst_secondary';
  $handler->display->display_options['fields']['field_inst_secondary']['field'] = 'field_inst_secondary';
  $handler->display->display_options['fields']['field_inst_secondary']['label'] = 'Farm';
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_inst_secondary']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_secondary']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_secondary']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_secondary']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_secondary']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_inst_secondary']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_inst_secondary']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_inst_secondary']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_inst_secondary']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['field_api_classes'] = 0;
  /* Field: Content: Date of establishment */
  $handler->display->display_options['fields']['field_inst_date_establishment']['id'] = 'field_inst_date_establishment';
  $handler->display->display_options['fields']['field_inst_date_establishment']['table'] = 'field_data_field_inst_date_establishment';
  $handler->display->display_options['fields']['field_inst_date_establishment']['field'] = 'field_inst_date_establishment';
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_inst_date_establishment']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_inst_date_establishment']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_date_establishment']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_date_establishment']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_date_establishment']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_inst_date_establishment']['field_api_classes'] = 0;
  /* Field: Content: Date of CITES registration */
  $handler->display->display_options['fields']['field_inst_date_registration']['id'] = 'field_inst_date_registration';
  $handler->display->display_options['fields']['field_inst_date_registration']['table'] = 'field_data_field_inst_date_registration';
  $handler->display->display_options['fields']['field_inst_date_registration']['field'] = 'field_inst_date_registration';
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_inst_date_registration']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_inst_date_registration']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_date_registration']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_date_registration']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_date_registration']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_inst_date_registration']['field_api_classes'] = 0;
  /* Field: Content: Species concerned */
  $handler->display->display_options['fields']['field_inst_species_concerned']['id'] = 'field_inst_species_concerned';
  $handler->display->display_options['fields']['field_inst_species_concerned']['table'] = 'field_data_field_inst_species_concerned';
  $handler->display->display_options['fields']['field_inst_species_concerned']['field'] = 'field_inst_species_concerned';
  $handler->display->display_options['fields']['field_inst_species_concerned']['label'] = 'Species bred';
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_inst_species_concerned']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_species_concerned']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_species_concerned']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_species_concerned']['field_api_classes'] = 0;
  /* Field: Content: Origin of stock */
  $handler->display->display_options['fields']['field_inst_origin_stock']['id'] = 'field_inst_origin_stock';
  $handler->display->display_options['fields']['field_inst_origin_stock']['table'] = 'field_data_field_inst_origin_stock';
  $handler->display->display_options['fields']['field_inst_origin_stock']['field'] = 'field_inst_origin_stock';
  $handler->display->display_options['fields']['field_inst_origin_stock']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_origin_stock']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_origin_stock']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_origin_stock']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_origin_stock']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_origin_stock']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_origin_stock']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_origin_stock']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_origin_stock']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_origin_stock']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_origin_stock']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_origin_stock']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_origin_stock']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_origin_stock']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_inst_origin_stock']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_origin_stock']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_origin_stock']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_origin_stock']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_origin_stock']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_origin_stock']['field_api_classes'] = 0;
  /* Field: Content: Marking of specimens */
  $handler->display->display_options['fields']['field_inst_marking_specimens']['id'] = 'field_inst_marking_specimens';
  $handler->display->display_options['fields']['field_inst_marking_specimens']['table'] = 'field_data_field_inst_marking_specimens';
  $handler->display->display_options['fields']['field_inst_marking_specimens']['field'] = 'field_inst_marking_specimens';
  $handler->display->display_options['fields']['field_inst_marking_specimens']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_inst_marking_specimens']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_marking_specimens']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: ISO 3166-2 code (field_country_iso2) */
  $handler->display->display_options['arguments']['field_country_iso2_value']['id'] = 'field_country_iso2_value';
  $handler->display->display_options['arguments']['field_country_iso2_value']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['arguments']['field_country_iso2_value']['field'] = 'field_country_iso2_value';
  $handler->display->display_options['arguments']['field_country_iso2_value']['relationship'] = 'field_inst_country_target_id';
  $handler->display->display_options['arguments']['field_country_iso2_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_country_iso2_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country_iso2_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_country_iso2_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_country_iso2_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_country_iso2_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_country_iso2_value']['break_phrase'] = 0;
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
    'institution' => 'institution',
  );
  /* Filter criterion: Content: Type (field_inst_type) */
  $handler->display->display_options['filters']['field_inst_type_tid']['id'] = 'field_inst_type_tid';
  $handler->display->display_options['filters']['field_inst_type_tid']['table'] = 'field_data_field_inst_type';
  $handler->display->display_options['filters']['field_inst_type_tid']['field'] = 'field_inst_type_tid';
  $handler->display->display_options['filters']['field_inst_type_tid']['value'] = array(
    24 => '24',
  );
  $handler->display->display_options['filters']['field_inst_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_inst_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_inst_type_tid']['vocabulary'] = 'institution_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'common/reg/e_cb/%';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_inst_country_node']['id'] = 'reverse_field_inst_country_node';
  $handler->display->display_options['relationships']['reverse_field_inst_country_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_inst_country_node']['field'] = 'reverse_field_inst_country_node';
  $handler->display->display_options['relationships']['reverse_field_inst_country_node']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: ISO 3166-2 code */
  $handler->display->display_options['fields']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['label'] = '';
  $handler->display->display_options['fields']['field_country_iso2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country_iso2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_country_iso2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_country_iso2']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'common/reg/e_cb/[field_country_iso2]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'country' => 'country',
  );
  /* Filter criterion: Content: Type (field_inst_type) */
  $handler->display->display_options['filters']['field_inst_type_tid']['id'] = 'field_inst_type_tid';
  $handler->display->display_options['filters']['field_inst_type_tid']['table'] = 'field_data_field_inst_type';
  $handler->display->display_options['filters']['field_inst_type_tid']['field'] = 'field_inst_type_tid';
  $handler->display->display_options['filters']['field_inst_type_tid']['relationship'] = 'reverse_field_inst_country_node';
  $handler->display->display_options['filters']['field_inst_type_tid']['value'] = array(
    85 => '85',
  );
  $handler->display->display_options['filters']['field_inst_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_inst_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_inst_type_tid']['vocabulary'] = 'institution_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_summary');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Summary list';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_rowspan';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_inst_country',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_inst_country' => 'field_inst_country',
    'title' => 'title',
    'field_inst_species_concerned' => 'field_inst_species_concerned',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_inst_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inst_species_concerned' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_inst_country']['id'] = 'field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['table'] = 'field_data_field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['field'] = 'field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_inst_country']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'N°';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Species concerned */
  $handler->display->display_options['fields']['field_inst_species_concerned']['id'] = 'field_inst_species_concerned';
  $handler->display->display_options['fields']['field_inst_species_concerned']['table'] = 'field_data_field_inst_species_concerned';
  $handler->display->display_options['fields']['field_inst_species_concerned']['field'] = 'field_inst_species_concerned';
  $handler->display->display_options['fields']['field_inst_species_concerned']['label'] = 'Species bred';
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_species_concerned']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_species_concerned']['field_api_classes'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Update';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'd/m/Y';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Country (field_inst_country) */
  $handler->display->display_options['sorts']['field_inst_country_target_id']['id'] = 'field_inst_country_target_id';
  $handler->display->display_options['sorts']['field_inst_country_target_id']['table'] = 'field_data_field_inst_country';
  $handler->display->display_options['sorts']['field_inst_country_target_id']['field'] = 'field_inst_country_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'common/reg/e_cb/summary.html';
  $translatables['register_of_captive_breeding_operations'] = array(
    t('Master'),
    t('[field_inst_country]'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Country'),
    t('Operation'),
    t('Farm'),
    t('Date of establishment'),
    t('Date of CITES registration'),
    t('Species bred'),
    t('Origin of stock'),
    t('Marking of specimens'),
    t('All'),
    t('Page'),
    t('Block'),
    t('Content referencing Content from field_inst_country'),
    t('common/reg/e_cb/[field_country_iso2]'),
    t('Summary list'),
    t('N°'),
    t('Update'),
  );
  $export['register_of_captive_breeding_operations'] = $view;

  $view = new view;
  $view->name = 'register_of_caviar_exporters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Register of caviar exporters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '[field_inst_country]';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_inst_country_target_id']['id'] = 'field_inst_country_target_id';
  $handler->display->display_options['relationships']['field_inst_country_target_id']['table'] = 'field_data_field_inst_country';
  $handler->display->display_options['relationships']['field_inst_country_target_id']['field'] = 'field_inst_country_target_id';
  $handler->display->display_options['relationships']['field_inst_country_target_id']['required'] = 0;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_inst_country']['id'] = 'field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['table'] = 'field_data_field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['field'] = 'field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['label'] = '';
  $handler->display->display_options['fields']['field_inst_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inst_country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inst_country']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_inst_country']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Code';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Primary */
  $handler->display->display_options['fields']['field_inst_primary']['id'] = 'field_inst_primary';
  $handler->display->display_options['fields']['field_inst_primary']['table'] = 'field_data_field_inst_primary';
  $handler->display->display_options['fields']['field_inst_primary']['field'] = 'field_inst_primary';
  $handler->display->display_options['fields']['field_inst_primary']['label'] = 'Address';
  $handler->display->display_options['fields']['field_inst_primary']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_inst_primary']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_inst_primary']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_inst_primary']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_inst_primary']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['separator'] = '';
  $handler->display->display_options['fields']['field_inst_primary']['field_api_classes'] = 0;
  /* Field: Content: Exporter */
  $handler->display->display_options['fields']['field_inst_exporter']['id'] = 'field_inst_exporter';
  $handler->display->display_options['fields']['field_inst_exporter']['table'] = 'field_data_field_inst_exporter';
  $handler->display->display_options['fields']['field_inst_exporter']['field'] = 'field_inst_exporter';
  $handler->display->display_options['fields']['field_inst_exporter']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_inst_exporter']['alter']['text'] = '<span class="exporter exporter-[field_inst_exporter-value]">[field_inst_exporter]</span>';
  $handler->display->display_options['fields']['field_inst_exporter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_exporter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_exporter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_exporter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_exporter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_exporter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_exporter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_exporter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_exporter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_exporter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_exporter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_exporter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_exporter']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_exporter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_exporter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_exporter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_exporter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_exporter']['field_api_classes'] = 0;
  /* Field: Content: Processing/Repackaging */
  $handler->display->display_options['fields']['field_inst_processing']['id'] = 'field_inst_processing';
  $handler->display->display_options['fields']['field_inst_processing']['table'] = 'field_data_field_inst_processing';
  $handler->display->display_options['fields']['field_inst_processing']['field'] = 'field_inst_processing';
  $handler->display->display_options['fields']['field_inst_processing']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_inst_processing']['alter']['text'] = '<span class="processing processing-[field_inst_processing-value]">[field_inst_processing]</span>';
  $handler->display->display_options['fields']['field_inst_processing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_processing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_processing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_processing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_processing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_processing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_processing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_processing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_processing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_processing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_processing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_processing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_processing']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_processing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_processing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_processing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_processing']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_processing']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: ISO 3166-2 code (field_country_iso2) */
  $handler->display->display_options['arguments']['field_country_iso2_value']['id'] = 'field_country_iso2_value';
  $handler->display->display_options['arguments']['field_country_iso2_value']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['arguments']['field_country_iso2_value']['field'] = 'field_country_iso2_value';
  $handler->display->display_options['arguments']['field_country_iso2_value']['relationship'] = 'field_inst_country_target_id';
  $handler->display->display_options['arguments']['field_country_iso2_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_country_iso2_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country_iso2_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_country_iso2_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_country_iso2_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_country_iso2_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_country_iso2_value']['break_phrase'] = 0;
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
    'institution' => 'institution',
  );
  /* Filter criterion: Content: Type (field_inst_type) */
  $handler->display->display_options['filters']['field_inst_type_tid']['id'] = 'field_inst_type_tid';
  $handler->display->display_options['filters']['field_inst_type_tid']['table'] = 'field_data_field_inst_type';
  $handler->display->display_options['filters']['field_inst_type_tid']['field'] = 'field_inst_type_tid';
  $handler->display->display_options['filters']['field_inst_type_tid']['value'] = array(
    27 => '27',
  );
  $handler->display->display_options['filters']['field_inst_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_inst_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_inst_type_tid']['vocabulary'] = 'institution_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_inst_country' => 'field_inst_country',
    'title' => 'title',
    'field_inst_primary' => 'field_inst_primary',
    'field_inst_exporter' => 'field_inst_exporter',
    'field_inst_processing' => 'field_inst_processing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_inst_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inst_primary' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inst_exporter' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inst_processing' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
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
  $handler->display->display_options['path'] = 'common/reg/e_ce/%';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_inst_country_node']['id'] = 'reverse_field_inst_country_node';
  $handler->display->display_options['relationships']['reverse_field_inst_country_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_inst_country_node']['field'] = 'reverse_field_inst_country_node';
  $handler->display->display_options['relationships']['reverse_field_inst_country_node']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: ISO 3166-2 code */
  $handler->display->display_options['fields']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['label'] = '';
  $handler->display->display_options['fields']['field_country_iso2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country_iso2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_country_iso2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_country_iso2']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'common/reg/e_ce/[field_country_iso2]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'country' => 'country',
  );
  /* Filter criterion: Content: Type (field_inst_type) */
  $handler->display->display_options['filters']['field_inst_type_tid']['id'] = 'field_inst_type_tid';
  $handler->display->display_options['filters']['field_inst_type_tid']['table'] = 'field_data_field_inst_type';
  $handler->display->display_options['filters']['field_inst_type_tid']['field'] = 'field_inst_type_tid';
  $handler->display->display_options['filters']['field_inst_type_tid']['relationship'] = 'reverse_field_inst_country_node';
  $handler->display->display_options['filters']['field_inst_type_tid']['value'] = array(
    88 => '88',
  );
  $handler->display->display_options['filters']['field_inst_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_inst_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_inst_type_tid']['vocabulary'] = 'institution_type';
  $translatables['register_of_caviar_exporters'] = array(
    t('Master'),
    t('[field_inst_country]'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_inst_country'),
    t('Code'),
    t('Address'),
    t('Exporter'),
    t('<span class="exporter exporter-[field_inst_exporter-value]">[field_inst_exporter]</span>'),
    t('Processing/Repackaging'),
    t('<span class="processing processing-[field_inst_processing-value]">[field_inst_processing]</span>'),
    t('All'),
    t('Page'),
    t('Block'),
    t('Content referencing Content from field_inst_country'),
    t('common/reg/e_ce/[field_country_iso2]'),
  );
  $export['register_of_caviar_exporters'] = $view;

  $view = new view;
  $view->name = 'register_of_nurseries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Register of nurseries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '[field_inst_country]';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_inst_country_target_id']['id'] = 'field_inst_country_target_id';
  $handler->display->display_options['relationships']['field_inst_country_target_id']['table'] = 'field_data_field_inst_country';
  $handler->display->display_options['relationships']['field_inst_country_target_id']['field'] = 'field_inst_country_target_id';
  $handler->display->display_options['relationships']['field_inst_country_target_id']['label'] = 'Country';
  $handler->display->display_options['relationships']['field_inst_country_target_id']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
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
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_inst_country']['id'] = 'field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['table'] = 'field_data_field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['field'] = 'field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['label'] = '';
  $handler->display->display_options['fields']['field_inst_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inst_country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inst_country']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_inst_country']['field_api_classes'] = 0;
  /* Field: Content: Primary */
  $handler->display->display_options['fields']['field_inst_primary']['id'] = 'field_inst_primary';
  $handler->display->display_options['fields']['field_inst_primary']['table'] = 'field_data_field_inst_primary';
  $handler->display->display_options['fields']['field_inst_primary']['field'] = 'field_inst_primary';
  $handler->display->display_options['fields']['field_inst_primary']['label'] = 'Nursery';
  $handler->display->display_options['fields']['field_inst_primary']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_inst_primary']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_inst_primary']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_inst_primary']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_inst_primary']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['separator'] = '';
  $handler->display->display_options['fields']['field_inst_primary']['field_api_classes'] = 0;
  /* Field: Content: Secondary */
  $handler->display->display_options['fields']['field_inst_secondary']['id'] = 'field_inst_secondary';
  $handler->display->display_options['fields']['field_inst_secondary']['table'] = 'field_data_field_inst_secondary';
  $handler->display->display_options['fields']['field_inst_secondary']['field'] = 'field_inst_secondary';
  $handler->display->display_options['fields']['field_inst_secondary']['label'] = 'Office';
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_secondary']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_secondary']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_secondary']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_secondary']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_inst_secondary']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_inst_secondary']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_inst_secondary']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_inst_secondary']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_inst_secondary']['field_api_classes'] = 0;
  /* Field: Content: Date of establishment */
  $handler->display->display_options['fields']['field_inst_date_establishment']['id'] = 'field_inst_date_establishment';
  $handler->display->display_options['fields']['field_inst_date_establishment']['table'] = 'field_data_field_inst_date_establishment';
  $handler->display->display_options['fields']['field_inst_date_establishment']['field'] = 'field_inst_date_establishment';
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_inst_date_establishment']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_inst_date_establishment']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_date_establishment']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_date_establishment']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_date_establishment']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_date_establishment']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_inst_date_establishment']['field_api_classes'] = 0;
  /* Field: Content: Species concerned */
  $handler->display->display_options['fields']['field_inst_species_concerned']['id'] = 'field_inst_species_concerned';
  $handler->display->display_options['fields']['field_inst_species_concerned']['table'] = 'field_data_field_inst_species_concerned';
  $handler->display->display_options['fields']['field_inst_species_concerned']['field'] = 'field_inst_species_concerned';
  $handler->display->display_options['fields']['field_inst_species_concerned']['label'] = 'Species artificially propagated';
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_inst_species_concerned']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_species_concerned']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_species_concerned']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_species_concerned']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_species_concerned']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: ISO 3166-2 code (field_country_iso2) */
  $handler->display->display_options['arguments']['field_country_iso2_value']['id'] = 'field_country_iso2_value';
  $handler->display->display_options['arguments']['field_country_iso2_value']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['arguments']['field_country_iso2_value']['field'] = 'field_country_iso2_value';
  $handler->display->display_options['arguments']['field_country_iso2_value']['relationship'] = 'field_inst_country_target_id';
  $handler->display->display_options['arguments']['field_country_iso2_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_country_iso2_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country_iso2_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_country_iso2_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_country_iso2_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_country_iso2_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_country_iso2_value']['break_phrase'] = 0;
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
    'institution' => 'institution',
  );
  /* Filter criterion: Content: Type (field_inst_type) */
  $handler->display->display_options['filters']['field_inst_type_tid']['id'] = 'field_inst_type_tid';
  $handler->display->display_options['filters']['field_inst_type_tid']['table'] = 'field_data_field_inst_type';
  $handler->display->display_options['filters']['field_inst_type_tid']['field'] = 'field_inst_type_tid';
  $handler->display->display_options['filters']['field_inst_type_tid']['value'] = array(
    25 => '25',
  );
  $handler->display->display_options['filters']['field_inst_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_inst_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_inst_type_tid']['vocabulary'] = 'institution_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'common/reg/e_nu/%';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_inst_country_node']['id'] = 'reverse_field_inst_country_node';
  $handler->display->display_options['relationships']['reverse_field_inst_country_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_inst_country_node']['field'] = 'reverse_field_inst_country_node';
  $handler->display->display_options['relationships']['reverse_field_inst_country_node']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: ISO 3166-2 code */
  $handler->display->display_options['fields']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['label'] = '';
  $handler->display->display_options['fields']['field_country_iso2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country_iso2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_country_iso2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_country_iso2']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'common/reg/e_nu/[field_country_iso2]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'country' => 'country',
  );
  /* Filter criterion: Content: Type (field_inst_type) */
  $handler->display->display_options['filters']['field_inst_type_tid']['id'] = 'field_inst_type_tid';
  $handler->display->display_options['filters']['field_inst_type_tid']['table'] = 'field_data_field_inst_type';
  $handler->display->display_options['filters']['field_inst_type_tid']['field'] = 'field_inst_type_tid';
  $handler->display->display_options['filters']['field_inst_type_tid']['relationship'] = 'reverse_field_inst_country_node';
  $handler->display->display_options['filters']['field_inst_type_tid']['value'] = array(
    86 => '86',
  );
  $handler->display->display_options['filters']['field_inst_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_inst_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_inst_type_tid']['vocabulary'] = 'institution_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_summary');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Summary list';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_rowspan';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_inst_country',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_inst_country' => 'field_inst_country',
    'title' => 'title',
    'field_inst_species_concerned' => 'field_inst_species_concerned',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_inst_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inst_species_concerned' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_inst_country']['id'] = 'field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['table'] = 'field_data_field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['field'] = 'field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_inst_country']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'N°';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last update';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'd/m/Y';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Country (field_inst_country) */
  $handler->display->display_options['sorts']['field_inst_country_target_id']['id'] = 'field_inst_country_target_id';
  $handler->display->display_options['sorts']['field_inst_country_target_id']['table'] = 'field_data_field_inst_country';
  $handler->display->display_options['sorts']['field_inst_country_target_id']['field'] = 'field_inst_country_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'common/reg/e_nu/summary.html';
  $translatables['register_of_nurseries'] = array(
    t('Master'),
    t('[field_inst_country]'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Country'),
    t('Nursery'),
    t('Office'),
    t('Date of establishment'),
    t('Species artificially propagated'),
    t('All'),
    t('Page'),
    t('Block'),
    t('Content referencing Content from field_inst_country'),
    t('common/reg/e_nu/[field_country_iso2]'),
    t('Summary list'),
    t('N°'),
    t('Last update'),
  );
  $export['register_of_nurseries'] = $view;

  $view = new view;
  $view->name = 'register_of_scientific_institutions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Register of scientific institutions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '[field_inst_country]';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_inst_region',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_inst_country_target_id']['id'] = 'field_inst_country_target_id';
  $handler->display->display_options['relationships']['field_inst_country_target_id']['table'] = 'field_data_field_inst_country';
  $handler->display->display_options['relationships']['field_inst_country_target_id']['field'] = 'field_inst_country_target_id';
  $handler->display->display_options['relationships']['field_inst_country_target_id']['label'] = 'Country';
  $handler->display->display_options['relationships']['field_inst_country_target_id']['required'] = 0;
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_inst_region']['id'] = 'field_inst_region';
  $handler->display->display_options['fields']['field_inst_region']['table'] = 'field_data_field_inst_region';
  $handler->display->display_options['fields']['field_inst_region']['field'] = 'field_inst_region';
  $handler->display->display_options['fields']['field_inst_region']['label'] = '';
  $handler->display->display_options['fields']['field_inst_region']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inst_region']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_region']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_region']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inst_region']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_region']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_region']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Code';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_inst_country']['id'] = 'field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['table'] = 'field_data_field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['field'] = 'field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['label'] = '';
  $handler->display->display_options['fields']['field_inst_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inst_country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inst_country']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_inst_country']['field_api_classes'] = 0;
  /* Field: Content: Primary */
  $handler->display->display_options['fields']['field_inst_primary']['id'] = 'field_inst_primary';
  $handler->display->display_options['fields']['field_inst_primary']['table'] = 'field_data_field_inst_primary';
  $handler->display->display_options['fields']['field_inst_primary']['field'] = 'field_inst_primary';
  $handler->display->display_options['fields']['field_inst_primary']['label'] = 'Address';
  $handler->display->display_options['fields']['field_inst_primary']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_inst_primary']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_inst_primary']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_inst_primary']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_inst_primary']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['separator'] = '';
  $handler->display->display_options['fields']['field_inst_primary']['field_api_classes'] = 0;
  /* Field: Content: Contact */
  $handler->display->display_options['fields']['field_inst_contact']['id'] = 'field_inst_contact';
  $handler->display->display_options['fields']['field_inst_contact']['table'] = 'field_data_field_inst_contact';
  $handler->display->display_options['fields']['field_inst_contact']['field'] = 'field_inst_contact';
  $handler->display->display_options['fields']['field_inst_contact']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_inst_contact']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_contact']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_contact']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_contact']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_contact']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_inst_contact']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_inst_contact']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_inst_contact']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_inst_contact']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['field_api_classes'] = 0;
  /* Field: Content: Date of CITES registration */
  $handler->display->display_options['fields']['field_inst_date_registration']['id'] = 'field_inst_date_registration';
  $handler->display->display_options['fields']['field_inst_date_registration']['table'] = 'field_data_field_inst_date_registration';
  $handler->display->display_options['fields']['field_inst_date_registration']['field'] = 'field_inst_date_registration';
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_inst_date_registration']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_inst_date_registration']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_date_registration']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_date_registration']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_date_registration']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_inst_date_registration']['field_api_classes'] = 0;
  /* Field: Content: Certificate number */
  $handler->display->display_options['fields']['field_inst_certificate_number']['id'] = 'field_inst_certificate_number';
  $handler->display->display_options['fields']['field_inst_certificate_number']['table'] = 'field_data_field_inst_certificate_number';
  $handler->display->display_options['fields']['field_inst_certificate_number']['field'] = 'field_inst_certificate_number';
  $handler->display->display_options['fields']['field_inst_certificate_number']['label'] = 'Certif. No.';
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_certificate_number']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_certificate_number']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_certificate_number']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_certificate_number']['field_api_classes'] = 0;
  /* Field: Content: Valid until */
  $handler->display->display_options['fields']['field_inst_valid_until']['id'] = 'field_inst_valid_until';
  $handler->display->display_options['fields']['field_inst_valid_until']['table'] = 'field_data_field_inst_valid_until';
  $handler->display->display_options['fields']['field_inst_valid_until']['field'] = 'field_inst_valid_until';
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_valid_until']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_valid_until']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_valid_until']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_inst_valid_until']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: ISO 3166-2 code (field_country_iso2) */
  $handler->display->display_options['arguments']['field_country_iso2_value']['id'] = 'field_country_iso2_value';
  $handler->display->display_options['arguments']['field_country_iso2_value']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['arguments']['field_country_iso2_value']['field'] = 'field_country_iso2_value';
  $handler->display->display_options['arguments']['field_country_iso2_value']['relationship'] = 'field_inst_country_target_id';
  $handler->display->display_options['arguments']['field_country_iso2_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_country_iso2_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_country_iso2_value']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_country_iso2_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_country_iso2_value']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_country_iso2_value']['limit'] = '0';
  $handler->display->display_options['arguments']['field_country_iso2_value']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_country_iso2_value']['break_phrase'] = 0;
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
    'institution' => 'institution',
  );
  /* Filter criterion: Content: Type (field_inst_type) */
  $handler->display->display_options['filters']['field_inst_type_tid']['id'] = 'field_inst_type_tid';
  $handler->display->display_options['filters']['field_inst_type_tid']['table'] = 'field_data_field_inst_type';
  $handler->display->display_options['filters']['field_inst_type_tid']['field'] = 'field_inst_type_tid';
  $handler->display->display_options['filters']['field_inst_type_tid']['value'] = array(
    26 => '26',
  );
  $handler->display->display_options['filters']['field_inst_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_inst_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_inst_type_tid']['vocabulary'] = 'institution_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_inst_region',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_country_country_link' => 'field_country_country_link',
    'field_inst_region' => 'field_inst_region',
    'title' => 'title',
    'field_inst_country' => 'field_inst_country',
    'field_inst_primary' => 'field_inst_primary',
    'field_inst_contact' => 'field_inst_contact',
    'field_inst_date_registration' => 'field_inst_date_registration',
    'field_inst_certificate_number' => 'field_inst_certificate_number',
    'field_inst_valid_until' => 'field_inst_valid_until',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_country_country_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inst_region' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inst_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inst_primary' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inst_contact' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inst_date_registration' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inst_certificate_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inst_valid_until' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '[field_country_country_link]';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_inst_country']['id'] = 'field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['table'] = 'field_data_field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['field'] = 'field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['label'] = '';
  $handler->display->display_options['fields']['field_inst_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inst_country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inst_country']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_inst_country']['field_api_classes'] = 0;
  /* Field: Content: Cross-reference between overseas territories and main land */
  $handler->display->display_options['fields']['field_country_country_link']['id'] = 'field_country_country_link';
  $handler->display->display_options['fields']['field_country_country_link']['table'] = 'field_data_field_country_country_link';
  $handler->display->display_options['fields']['field_country_country_link']['field'] = 'field_country_country_link';
  $handler->display->display_options['fields']['field_country_country_link']['relationship'] = 'field_inst_country_target_id';
  $handler->display->display_options['fields']['field_country_country_link']['label'] = '';
  $handler->display->display_options['fields']['field_country_country_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country_country_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_country_country_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_country_country_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_country_country_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_country_country_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_country_country_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_country_country_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_country_country_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_country_country_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_country_country_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_country_country_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_country_country_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_country_country_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_country_country_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country_country_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_country_country_link']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_country_country_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_country_country_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_country_country_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_country_country_link']['field_api_classes'] = 0;
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_inst_region']['id'] = 'field_inst_region';
  $handler->display->display_options['fields']['field_inst_region']['table'] = 'field_data_field_inst_region';
  $handler->display->display_options['fields']['field_inst_region']['field'] = 'field_inst_region';
  $handler->display->display_options['fields']['field_inst_region']['label'] = '';
  $handler->display->display_options['fields']['field_inst_region']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inst_region']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_region']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_region']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inst_region']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_region']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_region']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_region']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Code';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Primary */
  $handler->display->display_options['fields']['field_inst_primary']['id'] = 'field_inst_primary';
  $handler->display->display_options['fields']['field_inst_primary']['table'] = 'field_data_field_inst_primary';
  $handler->display->display_options['fields']['field_inst_primary']['field'] = 'field_inst_primary';
  $handler->display->display_options['fields']['field_inst_primary']['label'] = 'Address';
  $handler->display->display_options['fields']['field_inst_primary']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_inst_primary']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_inst_primary']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_inst_primary']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_inst_primary']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_inst_primary']['separator'] = '';
  $handler->display->display_options['fields']['field_inst_primary']['field_api_classes'] = 0;
  /* Field: Content: Contact */
  $handler->display->display_options['fields']['field_inst_contact']['id'] = 'field_inst_contact';
  $handler->display->display_options['fields']['field_inst_contact']['table'] = 'field_data_field_inst_contact';
  $handler->display->display_options['fields']['field_inst_contact']['field'] = 'field_inst_contact';
  $handler->display->display_options['fields']['field_inst_contact']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_contact']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_contact']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_contact']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_contact']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_inst_contact']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_inst_contact']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_inst_contact']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_inst_contact']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_inst_contact']['field_api_classes'] = 0;
  /* Field: Content: Date of CITES registration */
  $handler->display->display_options['fields']['field_inst_date_registration']['id'] = 'field_inst_date_registration';
  $handler->display->display_options['fields']['field_inst_date_registration']['table'] = 'field_data_field_inst_date_registration';
  $handler->display->display_options['fields']['field_inst_date_registration']['field'] = 'field_inst_date_registration';
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_date_registration']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_date_registration']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_date_registration']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_date_registration']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_inst_date_registration']['field_api_classes'] = 0;
  /* Field: Content: Certificate number */
  $handler->display->display_options['fields']['field_inst_certificate_number']['id'] = 'field_inst_certificate_number';
  $handler->display->display_options['fields']['field_inst_certificate_number']['table'] = 'field_data_field_inst_certificate_number';
  $handler->display->display_options['fields']['field_inst_certificate_number']['field'] = 'field_inst_certificate_number';
  $handler->display->display_options['fields']['field_inst_certificate_number']['label'] = 'Certif. No.';
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_certificate_number']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_certificate_number']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_certificate_number']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_certificate_number']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_certificate_number']['field_api_classes'] = 0;
  /* Field: Content: Valid until */
  $handler->display->display_options['fields']['field_inst_valid_until']['id'] = 'field_inst_valid_until';
  $handler->display->display_options['fields']['field_inst_valid_until']['table'] = 'field_data_field_inst_valid_until';
  $handler->display->display_options['fields']['field_inst_valid_until']['field'] = 'field_inst_valid_until';
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_inst_valid_until']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_valid_until']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_valid_until']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_valid_until']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_inst_valid_until']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'common/reg/e_si/%';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_inst_country_node']['id'] = 'reverse_field_inst_country_node';
  $handler->display->display_options['relationships']['reverse_field_inst_country_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_inst_country_node']['field'] = 'reverse_field_inst_country_node';
  $handler->display->display_options['relationships']['reverse_field_inst_country_node']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: ISO 3166-2 code */
  $handler->display->display_options['fields']['field_country_iso2']['id'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['table'] = 'field_data_field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['field'] = 'field_country_iso2';
  $handler->display->display_options['fields']['field_country_iso2']['label'] = '';
  $handler->display->display_options['fields']['field_country_iso2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country_iso2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_country_iso2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_country_iso2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_country_iso2']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'common/reg/e_si/[field_country_iso2]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'country' => 'country',
  );
  /* Filter criterion: Content: Type (field_inst_type) */
  $handler->display->display_options['filters']['field_inst_type_tid']['id'] = 'field_inst_type_tid';
  $handler->display->display_options['filters']['field_inst_type_tid']['table'] = 'field_data_field_inst_type';
  $handler->display->display_options['filters']['field_inst_type_tid']['field'] = 'field_inst_type_tid';
  $handler->display->display_options['filters']['field_inst_type_tid']['relationship'] = 'reverse_field_inst_country_node';
  $handler->display->display_options['filters']['field_inst_type_tid']['value'] = array(
    87 => '87',
  );
  $handler->display->display_options['filters']['field_inst_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_inst_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_inst_type_tid']['vocabulary'] = 'institution_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_summary');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Summary list';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_rowspan';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_inst_country',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_inst_country' => 'field_inst_country',
    'title' => 'title',
    'field_inst_species_concerned' => 'field_inst_species_concerned',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_inst_country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_inst_species_concerned' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_inst_country']['id'] = 'field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['table'] = 'field_data_field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['field'] = 'field_inst_country';
  $handler->display->display_options['fields']['field_inst_country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_inst_country']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_inst_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_inst_country']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'N°';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Update';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'd/m/Y';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Country (field_inst_country) */
  $handler->display->display_options['sorts']['field_inst_country_target_id']['id'] = 'field_inst_country_target_id';
  $handler->display->display_options['sorts']['field_inst_country_target_id']['table'] = 'field_data_field_inst_country';
  $handler->display->display_options['sorts']['field_inst_country_target_id']['field'] = 'field_inst_country_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'common/reg/e_si/summary.html';
  $translatables['register_of_scientific_institutions'] = array(
    t('Master'),
    t('[field_inst_country]'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Country'),
    t('Code'),
    t('Address'),
    t('Contact'),
    t('Date of CITES registration'),
    t('Certif. No.'),
    t('Valid until'),
    t('All'),
    t('Page'),
    t('[field_country_country_link]'),
    t('Block'),
    t('Content referencing Content from field_inst_country'),
    t('common/reg/e_si/[field_country_iso2]'),
    t('Summary list'),
    t('N°'),
    t('Update'),
  );
  $export['register_of_scientific_institutions'] = $view;

  return $export;
}
