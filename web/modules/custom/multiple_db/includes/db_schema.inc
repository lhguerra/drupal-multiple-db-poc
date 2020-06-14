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
  ],
  'node_field_revision' => [
    'fields' => [
      'nid' => [
        'type' => 'int',
        'unsigned' => TRUE,
        'size' => 'normal',
        'key' => 'MUL',
      ],
      'vid' => [
        'type' => 'int',
        'unsigned' => TRUE,
        'size' => 'normal',
        'not null' => FALSE,
      ],
      'langcode' => [
        'type' => 'varchar',
        'not null' => TRUE,
        'length' => 12
      ],
      'status' => [
        'type' => 'int',
        'size' => 'tiny',
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
        'NOT NULL' => TRUE
      ],
      'created' => [
        'type' => 'int',
        'size' => 'normal',
        'not null' => TRUE
      ],
      'changed' => [
        'type' => 'int',
        'size' => 'normal',
        'not null' => TRUE
      ],
      'promote' => [
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
  ],
  'node__comment' => [
    'fields' => [
      'bundle' => [
        'type' => 'varchar',
        'length' => 128,
        'key' => 'MUL'
      ],
      'deleted' => [
        'type' => 'int',
        'size' => 'tiny'
      ],
      'entity_id' => [
        'type' => 'int',
        'length' => 10,
        'unsigned' => true
      ],
      'revision_id' => [
        'type' => 'int',
        'length' => 10,
        'key' => 'MUL',
        'unsigned' => true
      ],
      'langcode' => [
        'type' => 'varchar',
        'not null' => TRUE,
        'length' => 32
      ],
      'delta' => [
        'type' => 'int',
        'length' => 10,
        'unsigned' => true
      ],
      'comment_status' => [
        'type' => 'int',
        'length' => 10,
        'unsigned' => true
      ],
    ]
  ],
  'node_revision__comment' => [
    'fields' => [
      'bundle' => [
        'type' => 'varchar',
        'length' => 128,
        'key' => 'MUL'
      ],
      'deleted' => [
        'type' => 'int',
        'size' => 'tiny'
      ],
      'entity_id' => [
        'type' => 'int',
        'length' => 10,
        'unsigned' => true
      ],
      'revision_id' => [
        'type' => 'int',
        'length' => 10,
        'unsigned' => true
      ],
      'langcode' => [
        'type' => 'varchar',
        'not null' => TRUE,
        'length' => 32
      ],
      'delta' => [
        'type' => 'int',
        'length' => 10,
        'unsigned' => true
      ],
      'comment_status' => [
        'type' => 'int',
        'length' => 10,
        'unsigned' => true
      ],
    ]
  ]
];
