<?php

namespace Drupal\multiple_db;

use Drupal\Core\DependencyInjection\ContainerBuilder;
use Drupal\Core\DependencyInjection\ServiceProviderBase;
use Drupal\Core\DependencyInjection\ServiceProviderInterface;

class MultipleDbServiceProvider extends ServiceProviderBase implements ServiceProviderInterface {
  public function alter(ContainerBuilder $container) {
    $definition = $container->getDefinition('entity_type.manager');
    $definition->setClass('\Drupal\multiple_db\Entity\EntityTypeManager');
    // dump($definition);
    // die();
    // override service class or service factory?
    // $definition->setArguments(['second_db', 'second_db']);
    // $definition->setFactory(['Drupal\multiple_db\Database\Database', 'getConnection']);
  }
}
