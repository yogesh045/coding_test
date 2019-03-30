<?php
  /**
  * Implement hook_views_data
  *
  */
  function custom_menu_views_data() {
  $data = array();
   $data['final_report']['table']['group'] = t('Final report dates');

   $data['final_report']['table']['base'] = array(
     'field' => 'rid', // This is the identifier field for the view.
     'title' => t('Final report'),
     'help' => t('This table is for final'),
     'weight' => -10,
     'description' => 'This is final report views between two dates.',
   );

    $data['final_report']['gid'] = array(
         'title' => t('Group Id'),
         'help' => t('Add group id for view'),
         'filter' => array(
             'handler' => 'views_handler_filter_string',
         ),
         'field' => array(
             'handler' => 'views_handler_field',
             'click sortable' => TRUE,
         ),
         'sort' => array(
             'handler' => 'views_handler_sort',
         ),
         'argument' => array(
             'handler' => 'views_handler_argument',
         ),
     ); 
    $data['final_report']['start_date'] = array(
         'title' => t('Start date'),
         'help' => t('Add Start date for view'),
         'field' => array(
             'handler' => 'views_handler_field',
             'click sortable' => TRUE,
         ),
         'filter' => array(
             'handler' => 'views_handler_filter_string',
         ),
         'sort' => array(
             'handler' => 'views_handler_sort',
         ),
         'argument' => array(
             'handler' => 'views_handler_argument',
         ),
         );
    $data['final_report']['end_date'] = array(
         'title' => t('End date'),
         'help' => t('Add End date for view'),
         'field' => array(
             'handler' => 'views_handler_field',
             'click sortable' => TRUE,
         ),
         'filter' => array(
             'handler' => 'views_handler_filter_string',
         ),
         'sort' => array(
             'handler' => 'views_handler_sort',
         ),
         'argument' => array(
             'handler' => 'views_handler_argument',
         ),
         );

   return $data;
  }