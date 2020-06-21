#!/bin/bash

set -e

docker-compose run --rm app \
  bash -c "drush ev 'drop_database_tables();' && drush ev 'drupal_set_installed_schema_version('multiple_db', 8000)' && drush updb -y"
