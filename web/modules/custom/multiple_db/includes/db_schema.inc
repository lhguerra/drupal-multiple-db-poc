<?php

$tables = [
  'node' => [
    'fields' => [
      'nid' => [
        'unsigned' => TRUE,
        'type' => 'int',
        'length' => 10,
        'default' => NULL
      ],
      'vid' => [
        'unsigned' => TRUE,
        'type' => 'int',
        'length' => 10,
        'not null' => FALSE,
      ],
      'type' => [
        'type' => 'varchar',
        'length' => 32,
        'not null' => TRUE,
      ],
      'uuid' => [
        'type' => 'varchar',
        'not null' => TRUE,
        'length' => 128,
      ],
      'langcode' => [
        'type' => 'varchar',
        'not null' => TRUE,
        'length' => 12
      ],
    ],
  ],
  'node_revision' => [
    'fields' => [
      'nid' => [
        'unsigned' => TRUE,
        'type' => 'int',
        'length' => 10,
        'key' => 'MUL',
        'default' => NULL
      ],
      'vid' => [
        'unsigned' => TRUE,
        'type' => 'int',
        'length' => 10,
        'not null' => FALSE,
      ],
      'langcode' => [
        'type' => 'varchar',
        'not null' => TRUE,
        'length' => 12,
        'key' => 'MUL'
      ],
      'revision_uid' => [
        'type' => 'int',
        'not null' => FALSE,
        'key' => 'MUL',
        'length' => 10
      ],
      'revision_timestamp' => [
        'type' => 'int',
        'not null' => FALSE,
        'length' => 11
      ],
      'revision_log' => [
        'type' => 'text',
        'not null' => FALSE,
        'default' => NULL,
        'size' => 'big'
      ],
      'revision_default' => [
        'type' => 'int',
        'length' => 4,
        'size ' => 'tiny'
      ],
    ]
  ],
  'node_field_data' => [
    'fields' => [
      'nid' => [
        'type' => 'int',
        'unsigned' => TRUE,
        'size' => 'normal',
      ],
      'vid' => [
        'type' => 'int',
        'unsigned' => TRUE,
        'key' => 'MUL',
        'size' => 'normal',
        'not null' => FALSE,
      ],
      'type' => [
        'type' => 'varchar',
        'length' => 32,
        'key' => 'MUL',
        'not null' => TRUE,
      ],
      'langcode' => [
        'type' => 'varchar',
        'not null' => TRUE,
        'length' => 12
      ],
      'status' => [
        'type' => 'int',
        'size' => 'tiny',
        'key' => 'MUL'
      ],
      'uid' => [
        'type' => 'int',
        'size' => 'normal',
        'key' => 'MUL',
        'unsigned' => TRUE
      ],
      'title' => [
        'type' => 'varchar',
        'length' => 255,
        'key' => 'MUL',
        'NOT NULL' => TRUE
      ],
      'created' => [
        'type' => 'int',
        'size' => 'normal',
        'key' => 'MUL',
        'not null' => TRUE
      ],
      'changed' => [
        'type' => 'int',
        'size' => 'normal',
        'key' => 'MUL',
        'not null' => TRUE
      ],
      'promote' => [
        'key' => 'MUL',
        'type' => 'int',
        'size' => 'tiny'
      ],
      'sticky' => [
        'type' => 'int',
        'size' => 'tiny'
      ],
      'default_langcode' => [
        'type' => 'int',
        'size' => 'tiny'
      ],
      'revision_translation_affected' => [
        'type' => 'int',
        'size' => 'tiny'
      ],
    ]
  ]
];

// mysql> desc node_field_data;
// +-------------------------------+------------------+------+-----+---------+-------+
// | Field                         | Type             | Null | Key | Default | Extra |
// +-------------------------------+------------------+------+-----+---------+-------+
// | nid                           | int(10) unsigned | NO   | PRI | NULL    |       |
// | vid                           | int(10) unsigned | NO   | MUL | NULL    |       |
// | type                          | varchar(32)      | NO   | MUL | NULL    |       |
// | langcode                      | varchar(12)      | NO   | PRI | NULL    |       |
// | status                        | tinyint(4)       | NO   | MUL | NULL    |       |
// | uid                           | int(10) unsigned | NO   | MUL | NULL    |       |
// | title                         | varchar(255)     | NO   | MUL | NULL    |       |
// | created                       | int(11)          | NO   | MUL | NULL    |       |
// | changed                       | int(11)          | NO   | MUL | NULL    |       |
// | promote                       | tinyint(4)       | NO   | MUL | NULL    |       |
// | sticky                        | tinyint(4)       | NO   |     | NULL    |       |
// | default_langcode              | tinyint(4)       | NO   |     | NULL    |       |
// | revision_translation_affected | tinyint(4)       | YES  |     | NULL    |       |
// +-------------------------------+------------------+------+-----+---------+-------+
