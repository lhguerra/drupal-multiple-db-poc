<?php

namespace Drupal\multiple_db\Entity;

use Drupal\views\EntityViewsData;

/**
 * Provides Views data for Default entity entities.
 */
class DefaultEntityViewsData extends EntityViewsData {

  /**
   * {@inheritdoc}
   */
  public function getViewsData() {
    $data = parent::getViewsData();
    $data['default_entity']['table']['base']['database'] = 'second_db';

    return $data;
  }

}
