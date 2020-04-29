<?php

namespace Drupal\multiple_db\Entity;

use Drupal\Core\Entity\ContentEntityInterface;
use Drupal\Core\Entity\EntityChangedInterface;
use Drupal\Core\Entity\EntityPublishedInterface;
use Drupal\user\EntityOwnerInterface;

/**
 * Provides an interface for defining Default entity entities.
 *
 * @ingroup multiple_db
 */
interface DefaultEntityInterface extends ContentEntityInterface, EntityChangedInterface, EntityPublishedInterface, EntityOwnerInterface {

  /**
   * Add get/set methods for your configuration properties here.
   */

  /**
   * Gets the Default entity name.
   *
   * @return string
   *   Name of the Default entity.
   */
  public function getName();

  /**
   * Sets the Default entity name.
   *
   * @param string $name
   *   The Default entity name.
   *
   * @return \Drupal\multiple_db\Entity\DefaultEntityInterface
   *   The called Default entity entity.
   */
  public function setName($name);

  /**
   * Gets the Default entity creation timestamp.
   *
   * @return int
   *   Creation timestamp of the Default entity.
   */
  public function getCreatedTime();

  /**
   * Sets the Default entity creation timestamp.
   *
   * @param int $timestamp
   *   The Default entity creation timestamp.
   *
   * @return \Drupal\multiple_db\Entity\DefaultEntityInterface
   *   The called Default entity entity.
   */
  public function setCreatedTime($timestamp);

}
