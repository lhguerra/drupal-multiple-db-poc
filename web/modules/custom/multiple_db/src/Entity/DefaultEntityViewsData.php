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

    // Additional information for Views integration, such as table joins, can be
    // put here.
    return $data;
  }

}
