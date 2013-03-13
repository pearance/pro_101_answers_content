<?php
/**
 * @file
 * pro_101_answers_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pro_101_answers_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'answers';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'answers' => 'answers',
        'answers/order' => 'answers/order',
      ),
    ),
    'views' => array(
      'values' => array(
        'faq' => 'faq',
        'faq:page' => 'faq:page',
        'faq:page_1' => 'faq:page_1',
        'faq:page_2' => 'faq:page_2',
        'faq:page_3' => 'faq:page_3',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-tabs' => array(
          'module' => 'delta_blocks',
          'delta' => 'tabs',
          'region' => 'content',
          'weight' => '-9',
        ),
        'nodeblock-answers-mast' => array(
          'module' => 'nodeblock',
          'delta' => 'answers-mast',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['answers'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'answers_public';
  $context->description = '';
  $context->tag = 'Public Only';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'answers' => 'answers',
        'answers/*' => 'answers/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nodeblock-social_welcome' => array(
          'module' => 'nodeblock',
          'delta' => 'social_welcome',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Public Only');
  $export['answers_public'] = $context;

  return $export;
}
