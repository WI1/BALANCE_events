<?php

/**
 * Implementation of hook_uuid_features_default_content().
 */
function events_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
    'date' => '1970-01-01 01:00:00 +0100',
  );
  $nodes[] = array(
    'type' => 'panel',
    'language' => 'de',
    'uid' => '8',
    'status' => '1',
    'created' => '1302020646',
    'changed' => '1327455965',
    'comment' => '2',
    'promote' => '1',
    'moderate' => '0',
    'sticky' => '0',
    'tnid' => '0',
    'translate' => '0',
    'revision_uid' => '8',
    'title' => 'Veranstaltungen',
    'body' => '<p>Listet aktuelle und vergangene Veranstaltungen</p>',
    'teaser' => '<p>Listet aktuelle und vergangene Veranstaltungen</p>',
    'log' => '',
    'revision_timestamp' => '1327455965',
    'format' => '1',
    'name' => 'admin-dominik',
    'picture' => 'sites/wi1.uni-erlangen.de/files/pictures/picture-8.jpg',
    'data' => 'a:22:{s:13:"form_build_id";s:37:"form-b273816d4bc1f60185d478af5808676b";s:19:"biblio_crossref_pid";s:0:"";s:9:"addresses";a:6:{s:6:"street";s:14:"Lange Gasse 20";s:11:"postal_code";s:5:"90403";s:4:"city";s:9:"Nürnberg";s:7:"country";s:2:"de";s:5:"phone";s:13:"0911/5302-881";s:3:"fax";s:13:"0911/5302-155";}s:14:"picture_delete";i:0;s:14:"picture_upload";s:0:"";s:7:"contact";i:0;s:5:"piwik";a:1:{s:16:"piwik_token_auth";s:9:"anonymous";}s:17:"messaging_default";s:4:"mail";s:17:"mimemail_textonly";i:0;s:27:"notifications_send_interval";s:1:"0";s:18:"admin_compact_mode";b:1;s:21:"biblio_contributor_id";s:3:"192";s:5:"Title";s:15:"Dominik Böhler";s:11:"Description";s:0:"";s:6:"format";s:1:"2";s:11:"newsletters";a:40:{i:522;i:0;i:591;i:0;i:662;i:0;i:595;i:0;i:584;i:0;i:661;i:0;i:677;i:0;i:593;i:0;i:678;i:0;i:663;i:0;i:589;i:0;i:586;i:0;i:668;i:0;i:665;i:0;i:594;i:0;i:674;i:0;i:723;i:0;i:676;i:0;i:670;i:0;i:666;i:0;i:722;i:0;i:679;i:0;i:996;i:0;i:542;i:0;i:671;i:0;i:667;i:0;i:675;i:0;i:585;i:0;i:592;i:0;i:1003;i:0;i:660;i:0;i:588;i:0;i:1002;i:0;i:587;i:0;i:669;i:0;i:596;i:0;i:680;i:0;i:590;i:0;i:672;i:0;i:673;i:0;}s:19:"biblio_show_profile";i:0;s:19:"biblio_my_pubs_menu";i:0;s:17:"biblio_user_style";s:6:"system";s:18:"biblio_baseopenurl";s:0:"";s:18:"biblio_openurl_sid";s:0:"";s:27:"heartbeat_activity_settings";a:6:{s:19:"heartbeat_edit_node";a:1:{s:6:"access";s:1:"1";}s:18:"heartbeat_add_node";a:1:{s:6:"access";s:1:"1";}s:21:"heartbeat_add_comment";a:1:{s:6:"access";s:1:"1";}s:22:"heartbeat_edit_comment";a:1:{s:6:"access";s:1:"1";}s:22:"heartbeat_edit_account";a:1:{s:6:"access";s:1:"1";}s:19:"heartbeat_add_image";a:1:{s:6:"access";s:1:"1";}}}',
    'panels_node' => array(
      'nid' => '4847',
      'css_id' => '',
      'did' => '15',
      'pipeline' => 'standard',
    ),
    'rdf' => array(),
    'og_groups_both' => array(),
    'og_groups' => array(),
    'path' => 'termine',
    'signup' => 0,
    'tableofcontents_toc_automatic' => '0',
    'tags' => NULL,
    'user_relationship_node_access' => FALSE,
    'old_status' => '1',
    'last_comment_timestamp' => '1302020646',
    'last_comment_name' => NULL,
    'comment_count' => '0',
    'taxonomy' => array(),
    'files' => array(),
    'uuid' => '4f3eeec0-37c1-11e1-898b-0050568d000d',
    'revision_uuid' => '4f403c8a-37c1-11e1-898b-0050568d000d',
    'locations' => array(),
    'location' => array(),
    'parent' => '0',
    'order_by' => '16418',
    '0' => FALSE,
    'pathauto_perform_alias' => FALSE,
    'date' => '2011-04-05 17:24:06 +0100',
  );
  return $nodes;
}
