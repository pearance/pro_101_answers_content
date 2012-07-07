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
  $context->tag = 'Section';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'faq-page' => 'faq-page',
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
        'boxes-social_welcome' => array(
          'module' => 'boxes',
          'delta' => 'social_welcome',
          'region' => 'user_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section');
  $export['answers'] = $context;

  return $export;
}
