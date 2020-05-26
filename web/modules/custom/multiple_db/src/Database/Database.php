<?php

namespace Drupal\multiple_db\Database;

use Drupal\Core\Database\Database as CoreDatabase;

class Database extends CoreDatabase {

  /**
   * Gets the connection object for the specified database key and target.
   *
   * @param string $target
   *   The database target name.
   * @param string $key
   *   The database connection key. Defaults to NULL which means the active key.
   *
   * @return \Drupal\Core\Database\Connection
   *   The corresponding connection object.
   */
  final public static function getConnection($target = 'default', $key = NULL) {
    dump('truco');
    die();
    if (!isset($key)) {
      // By default, we want the active connection, set in setActiveConnection.
      $key = self::$activeKey;
    }
    // If the requested target does not exist, or if it is ignored, we fall back
    // to the default target. The target is typically either "default" or
    // "replica", indicating to use a replica SQL server if one is available. If
    // it's not available, then the default/primary server is the correct server
    // to use.
    if (!empty(self::$ignoreTargets[$key][$target]) || !isset(self::$databaseInfo[$key][$target])) {
      $target = 'default';
    }

    if (!isset(self::$connections[$key][$target])) {
      // If necessary, a new connection is opened.
      self::$connections[$key][$target] = self::openConnection($key, $target);
    }
    return self::$connections[$key][$target];
  }

}
