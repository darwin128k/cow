#include <cow/entity.h>

void cow_entity_init(cow_entity_t *self, cow_layer_t *owner) {
  self->owner = owner;
}