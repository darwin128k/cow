#include <cow/display.h>
#include <cow/entity.h>

void cow_display_init(cow_display_t *self, cow_layer_t *owner) {
  cow_entity_init((cow_entity_t *)self, owner);
}