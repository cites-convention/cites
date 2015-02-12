<?php
/**
 * @file
 * Taxonomy module integration.
 */

/**
 * Implementation of hook_profiler_components() on behalf of taxonomy.
 */
function taxonomy_profiler_components() {
  return array(
    'terms' => array(
      'callback' => 'profiler_install_terms',
      'weight' => 10,
    ),
  );
}

/**
 * Component install callback for 'terms'.
 */
function profiler_install_terms($terms, $config, &$identifiers) {
  static $vocabs, $vocabs_by_machine_name;
  if (!isset($vocabs)) {
    $vocabs = taxonomy_get_vocabularies();
    foreach ($vocabs as $vid => $vocab) {
      $vocabs_by_machine_name[$vocab->machine_name] = $vid;
    }
  }
  $weight = 0;
  foreach ($terms as $term) {
    // Support the 'vocabulary_machine_name' key for referring to a term's vocabulary
    // by its machine name.
    if (isset($term['vocabulary_machine_name'], $vocabs_by_machine_name[$term['vocabulary_machine_name']])) {
      $term['vid'] = $vocabs_by_machine_name[$term['vocabulary_machine_name']];
    }
    // Sanity checks before creating.
    if (!empty($term['name']) && !empty($term['vid']) && isset($vocabs[$term['vid']])) {
      $term['weight'] = empty($term['weight']) ? $weight++ : $term['weight'];
      //Cast the term as an object, to allow it to be saved properly.
      taxonomy_term_save((object) $term);
    }
  }
}
