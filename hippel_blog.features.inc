<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function hippel_blog_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function hippel_blog_node_info() {
  $items = array(
    'post' => array(
      'name' => t('Blog post'),
      'module' => 'features',
      'description' => t('A post to the site blog.'),
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
function hippel_blog_views_api() {
  return array(
    'api' => '2',
  );
}
