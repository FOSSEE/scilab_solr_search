<?php
	function tbc_solr_search_settings_form($form, &$form_state) {

		$form['tbc_example_file_path'] = array(
			'#type' => 'textfield',
			'#title' => t('TBC Example File Path'),
			'#size' => 50,
			'#required' => TRUE,
			'#default_value' => variable_get('tbc_example_file_path', ''),
		);
		
		$form['tbc_solr_max_results'] = array(
			'#type' => 'textfield',
			'#title' => t('Solr max results'),
			'#size' => 50,
			'#required' => TRUE,
			'#default_value' => variable_get('tbc_solr_max_results', ''),
		);

		$form['submit'] = array(
			'#type' => 'submit',
			'#value' => t('Submit')
		);
		
		return $form;
	}
	
	function tbc_solr_search_settings_form_submit($form, &$form_state) {

		variable_set('tbc_example_file_path', $form_state['values']['tbc_example_file_path']);
		variable_set('tbc_solr_max_results', $form_state['values']['tbc_solr_max_results']);

		drupal_set_message(t('Settings Updated Successfully!'), 'status');
	}
