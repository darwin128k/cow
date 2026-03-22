#ifndef COW_LAYER_H
#define COW_LAYER_H

#include <cow/entity_fields.h>

typedef struct cow_layer {
  cow_entity_fields(struct cow_layer);
} cow_layer_t;

void cow_layer_init(cow_layer_t *self, cow_layer_t *owner);

#endif // COW_LAYER_H
