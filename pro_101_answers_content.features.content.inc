<?php
/**
 * @file
 * pro_101_answers_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function pro_101_answers_content_content_defaults() {
  $content = array();

  $content['question1'] = (object) array(
    'exported_path' => 'answers/question-1',
    'title' => 'Question 1?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'faq',
    'language' => 'und',
    'created' => '1335473421',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'question1',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<h2>
	Heading</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
          'summary' => '',
          'format' => 'plain_text',
          'safe_value' => '<h2>
	Heading</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['question2'] = (object) array(
    'exported_path' => 'answers/question-2',
    'title' => 'Question 2?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'faq',
    'language' => 'und',
    'created' => '1335473735',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'question2',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<h2>
	Heading</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
          'summary' => '',
          'format' => 'plain_text',
          'safe_value' => '<h2>
	Heading</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['question3'] = (object) array(
    'exported_path' => 'answers/question-3',
    'title' => 'Question 3?',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'faq',
    'language' => 'und',
    'created' => '1335473759',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'question3',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<h2>
	Heading</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
          'summary' => '',
          'format' => 'plain_text',
          'safe_value' => '<h2>
	Heading</h2>
<p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
