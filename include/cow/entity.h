#ifndef COW_ENTITY_H
#define COW_ENTITY_H

#include <cow/entity_fields.h>

typedef struct cow_layer cow_layer_t;

typedef struct cow_entity {
  cow_entity_fields(cow_layer_t);
} cow_entity_t;

void cow_entity_init(cow_entity_t *self, cow_layer_t *owner);

#endif // COW_ENTITY_H
