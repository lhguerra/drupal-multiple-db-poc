<?php

namespace Drupal\multiple_db\Storage;

use Drupal\Core\Entity\EntityTypeInterface;
use Drupal\Core\Entity\Sql\SqlContentEntityStorage;
use Symfony\Component\DependencyInjection\ContainerInterface;

class SecondDbStorage extends SqlContentEntityStorage {
  public static function createInstance(ContainerInterface $container, EntityTypeInterface $entityType) {
    return new static(
      $entityType,
      $container->get('multiple_db.database.second'),
      $container->get('entity.manager'),
      $container->get('cache.entity'),
      $container->get('language_manager'),
      $container->get('entity.memory_cache')
    );
  }

  public function getQueryServiceName() {
    return 'multiple_db.database.second.entity.query.sql';
  }
}
