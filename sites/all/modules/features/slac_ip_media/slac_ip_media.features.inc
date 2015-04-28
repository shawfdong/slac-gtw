<?php
/**
 * @file
 * slac_ip_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_ip_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function slac_ip_media_image_default_styles() {
  $styles = array();

  // Exported image style: lightbox_expanded.
  $styles['lightbox_expanded'] = array(
    'label' => 'Lightbox Expanded (975px wide)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 975,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: news_and_events_sidebar_image.
  $styles['news_and_events_sidebar_image'] = array(
    'label' => 'News and Events Sidebar Image (324px wide)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 324,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_archive_list_item.
  $styles['news_archive_list_item'] = array(
    'label' => 'News Archive List Item',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 170,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_large_body_image.
  $styles['news_large_body_image'] = array(
    'label' => 'News Large Body Image (370px wide)',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 370,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: term_listing_thumbnail.
  $styles['term_listing_thumbnail'] = array(
    'label' => 'Term Listing Thumbnail',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 170,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}