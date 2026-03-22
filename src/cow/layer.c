#include <cow/entity.h>
#include <cow/layer.h>

void cow_layer_init(cow_layer_t *self, cow_layer_t *owner) {
  cow_entity_init((cow_entity_t *)self, owner);
}