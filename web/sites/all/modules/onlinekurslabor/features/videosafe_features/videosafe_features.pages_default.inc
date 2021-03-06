<?php
/**
 * @file
 * videosafe_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function videosafe_features_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'videosafe';
  $page->task = 'page';
  $page->admin_title = 'videosafe';
  $page->admin_description = 'Video Save';
  $page->path = 'videosafe';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 30037204,
            1 => 16675960,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_videosafe__panel';
  $handler->task = 'page';
  $handler->subtask = 'videosafe';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'panel videosafe',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible:span6span6';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'news' => NULL,
      'tools' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd88f085d-a956-44a8-a6b5-bb0f2e073824';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e687ecd6-4117-40bb-8f3a-c47c6ce6fc82';
    $pane->panel = 'center';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '@0',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => 'Beschreibung - todo',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e687ecd6-4117-40bb-8f3a-c47c6ce6fc82';
    $display->content['new-e687ecd6-4117-40bb-8f3a-c47c6ce6fc82'] = $pane;
    $display->panels['center'][0] = 'new-e687ecd6-4117-40bb-8f3a-c47c6ce6fc82';
    $pane = new stdClass();
    $pane->pid = 'new-735300d5-d8fb-419d-9398-b02308008c59';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'videosafe_folderview-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '735300d5-d8fb-419d-9398-b02308008c59';
    $display->content['new-735300d5-d8fb-419d-9398-b02308008c59'] = $pane;
    $display->panels['left'][0] = 'new-735300d5-d8fb-419d-9398-b02308008c59';
    $pane = new stdClass();
    $pane->pid = 'new-9f2e7de4-6b17-4d21-b099-b23167c2edee';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'videosafe_folderview-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9f2e7de4-6b17-4d21-b099-b23167c2edee';
    $display->content['new-9f2e7de4-6b17-4d21-b099-b23167c2edee'] = $pane;
    $display->panels['left'][1] = 'new-9f2e7de4-6b17-4d21-b099-b23167c2edee';
    $pane = new stdClass();
    $pane->pid = 'new-98f219be-1347-4c7b-b525-98ee17afce86';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'videosafe_folderview-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'use_pager' => 1,
      'pager_id' => '0',
      'items_per_page' => '10',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '98f219be-1347-4c7b-b525-98ee17afce86';
    $display->content['new-98f219be-1347-4c7b-b525-98ee17afce86'] = $pane;
    $display->panels['left'][2] = 'new-98f219be-1347-4c7b-b525-98ee17afce86';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['videosafe'] = $page;

  return $pages;

}
