(function($) {

    Drupal.behaviors.section_courses_tasks = {
        /*toggle solution for qaa questions*/
        attach: function(context, settings) {

          var task_empty_fields = Drupal.settings.section_courses.task_remove_empty_fields;

          $('#field-generic-task-entry-values .double-field-elements button').once('section_courses_tasks', function(index, context){

            if(task_empty_fields.indexOf(index) >= 0){
              //$(this).trigger('click');
              $(this).trigger('mousedown');
              $(this).closest('tr').hide();
            }

          });
        }
    };

}(jQuery));