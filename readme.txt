Documentation
=============

1. Use hook_menu to create a admin display menu view and custom permissions 
   provided by hook_permissions and data displayed by role type through callback
   function.
2. Use hook_schema in .install file to create a custom table and than use 
   hook_view_api and hook_view_data to dispay the data of the table through view.
3. Use hook_cron to create a function in cron through which total number of 
   nodes count display with watchdog.
4. Use hook_drush_command to create a custom drush command to display total 
   number of published nodes a content type if given otherwise only total 
   number of published nodes.