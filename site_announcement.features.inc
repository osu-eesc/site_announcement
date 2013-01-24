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
      'description' => t('Use for adding the latest news and announcements to the homepage or to a selected page.'),
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
 * Implementation of hook_rules_defaults().
 */
function site_announcement_rules_defaults() {
  return array(
    'rules' => array(
      'rules_unpublish_announcements' => array(
        '#type' => 'rule',
        '#set' => 'event_cron',
        '#label' => 'Unpublish Expired Announcements',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'site announcement',
          'site_announcement' => 'site_announcement',
        ),
        '#status' => 'default',
        '#conditions' => array(),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'code' => '$results = db_query("UPDATE `node`, `content_type_site_announcement` SET `node`.`status` = 0  WHERE  `node`.`vid` = `content_type_site_announcement`.`vid` AND `content_type_site_announcement`.`field_site_announcement_date_value2` < now() ");',
              'vars' => array(),
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'code' => array(
                    '0' => ':global',
                  ),
                ),
              ),
            ),
            '#name' => 'rules_action_custom_php',
            '#info' => array(
              'label' => 'Execute custom PHP code',
              'module' => 'PHP',
              'eval input' => array(
                '0' => 'code',
              ),
            ),
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}

/**
 * Implementation of hook_views_api().
 */
function site_announcement_views_api() {
  return array(
    'api' => '2',
  );
}
