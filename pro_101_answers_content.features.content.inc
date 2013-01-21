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

  $content['answers-mast'] = (object) array(
    'exported_path' => 'block/answers-mast',
    'title' => 'Answers Mast',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'block',
    'language' => 'und',
    'created' => '1358757761',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'answers-mast',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<div id="pre-description">
	&nbsp;
</div>

<p>
	This is a list of common questions for your convenience. If you have a question that is not in this list, please ask via our <a href="contact">contact form</a>.
</p>

<div id="post-description">
	&nbsp;
</div>
',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
  );

  $content['question1'] = (object) array(
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
          'value' => '<p>
	Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.
</p>
',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
    'field_question_category' => array(
      'und' => array(
        0 => array(
          'tid' => '7',
        ),
        1 => array(
          'tid' => '9',
        ),
      ),
    ),
  );

  $content['question2'] = (object) array(
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
          'value' => '<p>
	Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.
</p>
',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
    'field_question_category' => array(
      'und' => array(
        0 => array(
          'tid' => '8',
        ),
      ),
    ),
  );

  $content['question3'] = (object) array(
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
          'value' => '<p>
	Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.
</p>
',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
    'field_question_category' => array(
      'und' => array(
        0 => array(
          'tid' => '8',
        ),
      ),
    ),
  );

return $content;
}
