<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function site_announcement_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function site_announcement_node_info() {
  $items = array(
    'site_announcement' => array(
      'name' => t('Site Announcement'),
      'module' => 'features',
      'description' => t('Use for adding the latest news and announcements to the homepage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function site_announcement_views_api() {
  return array(
    'api' => '2',
  );
}
