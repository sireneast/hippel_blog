<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function hippel_blog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:blog
  $menu_links['primary-links:blog'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');


  return $menu_links;
}
