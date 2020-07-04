<?php

// $tables = [
//   'node' => array(
//     'description' => 'The base table for nodes.',
//     'fields' => array(
//       'nid' => array(
//         'type' => 'serial',
//         'unsigned' => TRUE,
//         'not null' => TRUE,
//       ),
//       'vid' => array(
//         'type' => 'int',
//         'unsigned' => TRUE,
//         'not null' => TRUE,
//         'default' => 0,
//       ),
//       'type' => array(
//         'type' => 'varchar',
//         'length' => 32,
//         'not null' => TRUE,
//         'default' => '',
//       ),
//       'langcode' => array(
//         'type' => 'varchar',
//         'length' => 12,
//         'not null' => TRUE,
//         'default' => '',
//       ),
//       'title' => array(
//         'type' => 'varchar',
//         'length' => 255,
//         'not null' => TRUE,
//         'default' => '',
//       ),
//       'uuid' => array(
//         'type' => 'int',
//         'not null' => TRUE,
//         'default' => 0,
//       ),
//       'status' => array(
//         'type' => 'int',
//         'not null' => TRUE,
//         'default' => 1,
//       ),
//       'created' => array(
//         'type' => 'int',
//         'not null' => TRUE,
//         'default' => 0,
//       ),
//       'changed' => array(
//         'type' => 'int',
//         'not null' => TRUE,
//         'default' => 0,
//       ),
//       'comment' => array(
//         'type' => 'int',
//         'not null' => TRUE,
//         'default' => 0,
//       ),
//       'promote' => array(
//         'type' => 'int',
//         'not null' => TRUE,
//         'default' => 0,
//       ),
//       'moderate' => array(
//         'type' => 'int',
//         'not null' => TRUE,
//         'default' => 0,
//       ),
//       'sticky' => array(
//         'type' => 'int',
//         'not null' => TRUE,
//         'default' => 0,
//       ),
//       'translate' => array(
//         'type' => 'int',
//         'not null' => TRUE,
//         'default' => 0,
//       ),
//     ),
//     'indexes' => array(
//       'node_changed' => array(
//         'changed',
//       ),
//       'node_created' => array(
//         'created',
//       ),
//       'node_moderate' => array(
//         'moderate',
//       ),
//       'node_frontpage' => array(
//         'promote',
//         'status',
//         'sticky',
//         'created',
//       ),
//       'node_status_type' => array(
//         'status',
//         'type',
//         'nid',
//       ),
//       'node_title_type' => array(
//         'title',
//         array(
//           'type',
//           4,
//         ),
//       ),
//       'node_type' => array(
//         array(
//           'type',
//           4,
//         ),
//       ),
//       'uuid' => array(
//         'uuid',
//       ),
//       'translate' => array(
//         'translate',
//       ),
//     ),
//     'unique keys' => array(
//       'vid' => array(
//         'vid',
//       ),
//     ),
//     'primary key' => array(
//       'nid',
//     ),
//   ),
//   'node_revision' => [
//     'unique keys' => [
//       'nid' => [
//         'nid',
//       ],
//     ],
//     'primary key' => [
//       'nid',
//     ],
//     'fields' => [
//       'nid' => [
//         'unsigned' => TRUE,
//         'type' => 'int',
//         'length' => 10,
//         'default' => 0,
//         'not null' => TRUE
//       ],
//       'vid' => [
//         'unsigned' => TRUE,
//         'type' => 'int',
//         'length' => 10,
//         'not null' => FALSE,
//       ],
//       'langcode' => [
//         'type' => 'varchar',
//         'not null' => TRUE,
//         'length' => 12,
//       ],
//       'revision_uid' => [
//         'type' => 'int',
//         'not null' => FALSE,
//         'length' => 10
//       ],
//       'revision_timestamp' => [
//         'type' => 'int',
//         'not null' => FALSE,
//         'length' => 11
//       ],
//       'revision_log' => [
//         'type' => 'text',
//         'not null' => FALSE,
//         'default' => NULL,
//         'size' => 'big'
//       ],
//       'revision_default' => [
//         'type' => 'int',
//         'length' => 4,
//         'size ' => 'tiny'
//       ],
//     ]
//   ],
//   'node_field_data' => [
//     'fields' => [
//       'nid' => [
//         'type' => 'int',
//         'unsigned' => TRUE,
//         'size' => 'normal',
//       ],
//       'vid' => [
//         'type' => 'int',
//         'unsigned' => TRUE,
//         'size' => 'normal',
//         'not null' => FALSE,
//       ],
//       'type' => [
//         'type' => 'varchar',
//         'length' => 32,
//         'not null' => TRUE,
//       ],
//       'langcode' => [
//         'type' => 'varchar',
//         'not null' => TRUE,
//         'length' => 12
//       ],
//       'status' => [
//         'type' => 'int',
//         'size' => 'tiny',
//       ],
//       'uid' => [
//         'type' => 'int',
//         'size' => 'normal',
//         'unsigned' => TRUE
//       ],
//       'title' => [
//         'type' => 'varchar',
//         'length' => 255,
//         'NOT NULL' => TRUE
//       ],
//       'created' => [
//         'type' => 'int',
//         'size' => 'normal',
//         'not null' => TRUE
//       ],
//       'changed' => [
//         'type' => 'int',
//         'size' => 'normal',
//         'not null' => TRUE
//       ],
//       'promote' => [
//         'type' => 'int',
//         'size' => 'tiny'
//       ],
//       'sticky' => [
//         'type' => 'int',
//         'size' => 'tiny'
//       ],
//       'default_langcode' => [
//         'type' => 'int',
//         'size' => 'tiny'
//       ],
//       'revision_translation_affected' => [
//         'type' => 'int',
//         'size' => 'tiny'
//       ],
//     ]
//   ],
//   'node_field_revision' => [
//     'fields' => [
//       'nid' => [
//         'type' => 'int',
//         'unsigned' => TRUE,
//         'size' => 'normal',
//       ],
//       'vid' => [
//         'type' => 'int',
//         'unsigned' => TRUE,
//         'size' => 'normal',
//         'not null' => FALSE,
//       ],
//       'langcode' => [
//         'type' => 'varchar',
//         'not null' => TRUE,
//         'length' => 12
//       ],
//       'status' => [
//         'type' => 'int',
//         'size' => 'tiny',
//       ],
//       'uid' => [
//         'type' => 'int',
//         'size' => 'normal',
//         'unsigned' => TRUE
//       ],
//       'title' => [
//         'type' => 'varchar',
//         'length' => 255,
//         'NOT NULL' => TRUE
//       ],
//       'created' => [
//         'type' => 'int',
//         'size' => 'normal',
//         'not null' => TRUE
//       ],
//       'changed' => [
//         'type' => 'int',
//         'size' => 'normal',
//         'not null' => TRUE
//       ],
//       'promote' => [
//         'type' => 'int',
//         'size' => 'tiny'
//       ],
//       'sticky' => [
//         'type' => 'int',
//         'size' => 'tiny'
//       ],
//       'default_langcode' => [
//         'type' => 'int',
//         'size' => 'tiny'
//       ],
//       'revision_translation_affected' => [
//         'type' => 'int',
//         'size' => 'tiny'
//       ],
//     ]
//   ],
//   'node__comment' => [
//     // 'primary key' => ['deleted', 'entity_id', 'langcode', 'delta'],
//     'fields' => [
//       'bundle' => [
//         'type' => 'varchar',
//         'length' => 128,
//         'not null' => TRUE,
//       ],
//       'deleted' => [
//         'type' => 'int',
//         'size' => 'tiny',
//         'not null' => TRUE,
//         'default' => 0
//       ],
//       'entity_id' => [
//         'type' => 'int',
//         'length' => 10,
//         'not null' => TRUE,
//         'unsigned' => true
//       ],
//       'revision_id' => [
//         'type' => 'int',
//         'length' => 10,
//         'unsigned' => true
//       ],
//       'langcode' => [
//         'type' => 'varchar',
//         'not null' => TRUE,
//         'length' => 32
//       ],
//       'delta' => [
//         'type' => 'int',
//         'length' => 10,
//         'not null' => TRUE,
//         'unsigned' => true
//       ],
//       'comment_status' => [
//         'type' => 'int',
//         'length' => 10,
//         'unsigned' => true
//       ],
//     ]
//   ],
//   'node_revision__comment' => [
//     'fields' => [
//       'bundle' => [
//         'type' => 'varchar',
//         'length' => 128,
//       ],
//       'deleted' => [
//         'type' => 'int',
//         'size' => 'tiny'
//       ],
//       'entity_id' => [
//         'type' => 'int',
//         'length' => 10,
//         'unsigned' => true
//       ],
//       'revision_id' => [
//         'type' => 'int',
//         'length' => 10,
//         'unsigned' => true
//       ],
//       'langcode' => [
//         'type' => 'varchar',
//         'not null' => TRUE,
//         'length' => 32
//       ],
//       'delta' => [
//         'type' => 'int',
//         'length' => 10,
//         'unsigned' => true
//       ],
//       'comment_status' => [
//         'type' => 'int',
//         'length' => 10,
//         'unsigned' => true
//       ],
//     ]
//   ]
// ];

$tables = [
  "node" => [
    "description" => "The base table for node entities.",
    "primary key" => [
      "nid",
    ],
    "indexes" => [
      "node_field__type__target_id" => [
        "type",
      ]
    ],
    "foreign keys" => [
      "node__revision" => [
        "table" => "node_revision",
        "columns" => [
          "vid" => "vid"
        ]
      ]
    ],
    "unique keys" => [
      "node__vid" => [
        "vid",
      ],
      "node_field__uuid__value" => [
        "uuid",
      ]
    ],
    "fields" => [
      "nid" => [
        "type" => "serial",
        "unsigned" => true,
        "size" => "normal",
        "not null" => true,
      ],
      "vid" => [
        "type" => "int",
        "unsigned" => true,
        "size" => "normal",
        "not null" => false,
      ],
      "type" => [
        "description" => "The ID of the target entity.",
        "type" => "varchar_ascii",
        "length" => 32,
        "not null" => true,
      ],
      "uuid" => [
        "type" => "varchar_ascii",
        "length" => 128,
        "binary" => false,
        "not null" => true,
      ],
      "langcode" => [
        "type" => "varchar_ascii",
        "length" => 12,
        "not null" => true,
      ]
    ]
  ],
  "node_revision" => [
    "description" => "The revision table for node entities.",
    "primary key" => [
      "vid",
    ],
    "indexes" => [
      "node__nid" => [
        "nid",
      ],
      "node_field__langcode" => [
        "langcode",
      ],
      "node_field__revision_uid__target_id" => [
        "revision_uid",
      ]
    ],
    "foreign keys" => [
      "node__revisioned" => [
        "table" => "node",
        "columns" => [
          "nid" => "nid"
        ]
      ],
      "node_field__revision_uid" => [
        "table" => "users",
        "columns" => [
          "revision_uid" => "uid"
        ]
      ]
    ],
    "fields" => [
      "nid" => [
        "type" => "int",
        "unsigned" => true,
        "size" => "normal",
        "not null" => true,
      ],
      "vid" => [
        "type" => "serial",
        "unsigned" => true,
        "size" => "normal",
        "not null" => true,
      ],
      "langcode" => [
        "type" => "varchar_ascii",
        "length" => 12,
        "not null" => true,
      ],
      "revision_uid" => [
        "description" => "The ID of the target entity.",
        "type" => "int",
        "unsigned" => true,
        "not null" => false,
      ],
      "revision_timestamp" => [
        "type" => "int",
        "not null" => false,
      ],
      "revision_log" => [
        "type" => "text",
        "size" => "big",
        "not null" => false,
      ],
      "revision_default" => [
        "type" => "int",
        "size" => "tiny",
        "not null" => false,
      ]
    ],
    "unique keys" => []
  ],
  "node_field_data" => [
    "description" => "The data table for node entities.",
    "primary key" => [
      "nid",
      "langcode",
    ],
    "indexes" => [
      "node__id__default_langcode__langcode" => [
        "nid",
        "default_langcode",
        2 => "langcode"
      ],
      "node__vid" => [
        "vid",
      ],
      "node_field__type__target_id" => [
        "type",
      ],
      "node_field__uid__target_id" => [
        "uid",
      ],
      "node_field__created" => [
        "created",
      ],
      "node_field__changed" => [
        "changed",
      ],
      "node__status_type" => [
        "status",
        "type",
        2 => "nid"
      ],
      "node__frontpage" => [
        "promote",
        "status",
        2 => "sticky",
        3 => "created"
      ],
      "node__title_type" => [
        "title",
        [
          "type",
          4,
        ]
      ]
    ],
    "foreign keys" => [
      "node" => [
        "table" => "node",
        "columns" => [
          "nid" => "nid"
        ]
      ]
    ],
    "fields" => [
      "nid" => [
        "type" => "int",
        "unsigned" => true,
        "size" => "normal",
        "not null" => true,
      ],
      "vid" => [
        "type" => "int",
        "unsigned" => true,
        "size" => "normal",
        "not null" => true,
      ],
      "type" => [
        "description" => "The ID of the target entity.",
        "type" => "varchar_ascii",
        "length" => 32,
        "not null" => true,
      ],
      "langcode" => [
        "type" => "varchar_ascii",
        "length" => 12,
        "not null" => true,
      ],
      "status" => [
        "type" => "int",
        "size" => "tiny",
        "not null" => true,
      ],
      "uid" => [
        "description" => "The ID of the target entity.",
        "type" => "int",
        "unsigned" => true,
        "not null" => true,
      ],
      "title" => [
        "type" => "varchar",
        "length" => 255,
        "binary" => false,
        "not null" => true,
      ],
      "created" => [
        "type" => "int",
        "not null" => true
      ],
      "changed" => [
        "type" => "int",
        "not null" => true
      ],
      "promote" => [
        "type" => "int",
        "size" => "tiny",
        "not null" => true
      ],
      "sticky" => [
        "type" => "int",
        "size" => "tiny",
        "not null" => true
      ],
      "default_langcode" => [
        "type" => "int",
        "size" => "tiny",
        "not null" => true
      ],
      "revision_translation_affected" => [
        "type" => "int",
        "size" => "tiny",
        "not null" => false
      ]
    ],
    "unique keys" => []
  ],
  "node_field_revision" => [
    "description" => "The revision data table for node entities.",
    "primary key" => [
      "vid",
      "langcode",
    ],
    "indexes" => [
      "node__id__default_langcode__langcode" => [
        "nid",
        "default_langcode",
        2 => "langcode"
      ],
      "node_field__uid__target_id" => [
        "uid",
      ]
    ],
    "foreign keys" => [
      "node" => [
        "table" => "node",
        "columns" => [
          "nid" => "nid"
        ]
      ],
      "node__revision" => [
        "table" => "node_revision",
        "columns" => [
          "vid" => "vid"
        ]
      ]
    ],
    "fields" => [
      "nid" => [
        "type" => "int",
        "unsigned" => true,
        "size" => "normal",
        "not null" => true
      ],
      "vid" => [
        "type" => "int",
        "unsigned" => true,
        "size" => "normal",
        "not null" => true
      ],
      "langcode" => [
        "type" => "varchar_ascii",
        "length" => 12,
        "not null" => true
      ],
      "status" => [
        "type" => "int",
        "size" => "tiny",
        "not null" => true
      ],
      "uid" => [
        "description" => "The ID of the target entity.",
        "type" => "int",
        "unsigned" => true,
        "not null" => true
      ],
      "title" => [
        "type" => "varchar",
        "length" => 255,
        "binary" => false,
        "not null" => false
      ],
      "created" => [
        "type" => "int",
        "not null" => false
      ],
      "changed" => [
        "type" => "int",
        "not null" => false
      ],
      "promote" => [
        "type" => "int",
        "size" => "tiny",
        "not null" => false
      ],
      "sticky" => [
        "type" => "int",
        "size" => "tiny",
        "not null" => false
      ],
      "default_langcode" => [
        "type" => "int",
        "size" => "tiny",
        "not null" => true
      ],
      "revision_translation_affected" => [
        "type" => "int",
        "size" => "tiny",
        "not null" => false
      ]
    ],
    "unique keys" => []
  ]
];
