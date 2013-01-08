<?php

function undskyld_install_tasks($install_state) {
  $tasks = array();
  return $tasks;
}

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function undskyld_form_install_configure_form_alter(&$form, $form_state) {
  $form['admin_account']['account']['pass']['#type'] = 'hidden';
  $form['admin_account']['account']['pass']['#value'] = 'admin';
}
