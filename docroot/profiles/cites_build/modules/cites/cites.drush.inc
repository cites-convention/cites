<?php
/**
 * Drush commands to maintain the production instance
 */

function cites_drush_command() {
    $items['hotfix_1752'] = array(
        'description' => 'Issue #1752 - Remove duplicate H2 tags from pages',
        'required-arguments' => FALSE
    );
    $items['hotfix_1781'] = array(
        'description' => 'Issue #1781 - ISO codes uppercase for country',
        'required-arguments' => FALSE
    );
    return $items;
}


function drush_cites_hotfix_1752() {
    $q = new EntityFieldQuery();
    $entities = $q->entityCondition('entity_type', 'node')
        ->propertyCondition('type', 'page')
        ->execute();
    if(!empty($entities['node'])) {
        $nids = array_keys($entities['node']);
        $nodes = node_load_multiple($nids);
        $languages = array('en', 'fr', 'es');
        $lenc = array('en' => 'eng', 'es' => 'esp', 'fr' => 'fra');
        $i = 0;
        foreach($nodes as $nid => $n) {
            // Get the title per language
            foreach($languages as $l) {
                $title = $n->title_field;
                $body = $n->body;
                if(array_key_exists($l, $title) && array_key_exists($l, $body)) {
                    $title_text = $title[$l][0]['value'];
                    $body_text = $body[$l][0]['value'];
                    $pattern = sprintf('%s', $title_text);
                    if($pos = strpos($body_text, $pattern)) {
                        echo sprintf("Matched node: %s (%s) - http://staging.cites.org/%s/node/%s/edit\n", $nid, $l, $lenc[$l], $nid);
                        #echo substr($body_text, $pos - 90, strlen($pattern) + 90 . "\n");
                        $i++;
                    }
                }
            }
        }
    }
    echo sprintf("%s\n", $i);
}

function drush_cites_hotfix_1781() {
    $t_s = time();
    $q = new EntityFieldQuery();
    $entities = $q->entityCondition('entity_type', 'node')
        ->propertyCondition('type', 'country')
        ->execute();
    $i = $c = 0;
    if(!empty($entities['node'])) {
        $nids = array_keys($entities['node']);
        $c = count($nids);
        foreach($nids as $idx => $nid) {
            $n = node_load($nid);
            $iso2 = $n->field_country_iso2['en'][0]['value'];
            $iso3 = $n->field_country_iso3['en'][0]['value'];
            if(preg_match('/[a-z]/', $iso2) || preg_match('/[a-z]/', $iso3)) {
                echo sprintf("%s - %s (%s) \n", $nid, $iso2, $iso3);
                $n->field_country_iso2['en'][0]['value'] = strtoupper($n->field_country_iso2['en'][0]['value']);
                $n->field_country_iso3['en'][0]['value'] = strtoupper($n->field_country_iso3['en'][0]['value']);
                node_save($n);
                $i++;
            }
        }
    }
    $t_e = time();
    drupal_set_message(t('@i out of @c nodes were updated in @s seconds', array('@s' => ($t_e - $t_s), '@i' => $i, '@c' => $c)), 'status');
}