#ifndef COW_DISPLAY_H
#define COW_DISPLAY_H

#include <cow/layer.h>

typedef struct cow_display {
  cow_layer_t *owner;
} cow_display_t;

void cow_display_init(cow_display_t *self, cow_layer_t *owner);

#endif // COW_DISPLAY_H
