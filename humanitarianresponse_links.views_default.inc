<?php
/**
 * @file
 * humanitarianresponse_links.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function humanitarianresponse_links_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'links';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Links';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'field_link_category';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no links to display';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_link_description']['id'] = 'field_link_description';
  $handler->display->display_options['fields']['field_link_description']['table'] = 'field_data_field_link_description';
  $handler->display->display_options['fields']['field_link_description']['field'] = 'field_link_description';
  $handler->display->display_options['fields']['field_link_description']['label'] = '';
  $handler->display->display_options['fields']['field_link_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_link_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_link_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link_description']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_link_description']['field_api_classes'] = 0;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_link_url']['id'] = 'field_link_url';
  $handler->display->display_options['fields']['field_link_url']['table'] = 'field_data_field_link_url';
  $handler->display->display_options['fields']['field_link_url']['field'] = 'field_link_url';
  $handler->display->display_options['fields']['field_link_url']['label'] = '';
  $handler->display->display_options['fields']['field_link_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_link_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_link_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_link_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_link_url']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link_url]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[field_link_description]';
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
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
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'link' => 'link',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'links';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Links';

  /* Display: Cluster */
  $handler = $view->new_display('panel_pane', 'Cluster', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Cluster(s) (field_link_clusters) */
  $handler->display->display_options['arguments']['field_link_clusters_tid']['id'] = 'field_link_clusters_tid';
  $handler->display->display_options['arguments']['field_link_clusters_tid']['table'] = 'field_data_field_link_clusters';
  $handler->display->display_options['arguments']['field_link_clusters_tid']['field'] = 'field_link_clusters_tid';
  $handler->display->display_options['arguments']['field_link_clusters_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_link_clusters_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_link_clusters_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['field_link_clusters_tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['field_link_clusters_tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['field_link_clusters_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_link_clusters_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_link_clusters_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_link_clusters_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_link_clusters_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_link_clusters_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_link_clusters_tid']['validate_options']['vocabularies'] = array(
    'clusters' => 'clusters',
  );
  $handler->display->display_options['arguments']['field_link_clusters_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_link_clusters_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_link_clusters_tid']['not'] = 0;
  $translatables['links'] = array(
    t('Master'),
    t('Links'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('There are no links to display'),
    t('[field_link_url]'),
    t('[field_link_description]'),
    t('Page'),
    t('Block'),
    t('Cluster'),
    t('All'),
    t('View panes'),
  );
  $export['links'] = $view;

  return $export;
}