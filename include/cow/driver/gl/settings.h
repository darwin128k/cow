#ifndef COW_DRIVER_GL_SETTINGS_H
#define COW_DRIVER_GL_SETTINGS_H

#include <lh/bool.h>
#include <lh/byte.h>

typedef struct cow_driver_gl_settings {
  lh_byte_t color_bits;
  lh_byte_t depth_bits;
  lh_bool_t is_double_buffer;
} cow_driver_gl_settings_t;

void cow_driver_gl_settings_init(cow_driver_gl_settings_t *settings);

#endif // COW_DRIVER_GL_SETTINGS_H