<?php

/**
 * Implementation of hook_views_default_views().
 */
function myfeeds_views_default_views() {
  module_load_include('inc', 'myfeeds', 'myfeeds.features.views');
  $args = func_get_args();
  return call_user_func_array('_myfeeds_views_default_views', $args);
}
