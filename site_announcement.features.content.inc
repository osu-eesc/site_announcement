<?php

/**
 * Implementation of hook_content_default_fields().
 */
function site_announcement_content_default_fields() {
  $fields = array();

  // Exported field: field_site_announcement_date
  $fields['site_announcement-field_site_announcement_date'] = array(
    'field_name' => 'field_site_announcement_date',
    'type_name' => 'site_announcement',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => 'required',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'strtotime',
      'default_value_code2' => '+ 30 days',
      'input_format' => 'm/d/Y - H:i',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Publish Date',
      'weight' => '-4',
      'description' => 'Announcements will display in the announcements list between the <em>From Date</em> and <em>To Date</em>.',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_site_announcement_noderef
  $fields['site_announcement-field_site_announcement_noderef'] = array(
    'field_name' => 'field_site_announcement_noderef',
    'type_name' => 'site_announcement',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'page' => 'page',
      'announcements' => 0,
      'calendar_event' => 0,
      'community' => 0,
      'community_links' => 0,
      'community_page_story' => 0,
      'employee' => 0,
      'extension_page' => 0,
      'gallery' => 0,
      'group' => 0,
      'header_top_link' => 0,
      'home_slideshow' => 0,
      'latest_news_feed' => 0,
      'letterhead' => 0,
      'news_feed_item' => 0,
      'publication' => 0,
      'site_announcement' => 0,
      'social_media_link' => 0,
      'extension_story' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Display on page',
      'weight' => '-1',
      'description' => 'Select a page for this announcement to display on. Announcement will also display on the homepage if the <em>Promoted to front page</em> field is checked.',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_site_announcement_teaser
  $fields['site_announcement-field_site_announcement_teaser'] = array(
    'field_name' => 'field_site_announcement_teaser',
    'type_name' => 'site_announcement',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '2',
          '_error_element' => 'default_value_widget][field_site_announcement_teaser][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Teaser',
      'weight' => '-3',
      'description' => 'Enter a brief summary of the announcement. The teaser is displayed along with the title on the announcements list.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Display on page');
  t('Publish Date');
  t('Teaser');

  return $fields;
}
