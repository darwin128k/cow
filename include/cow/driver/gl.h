#ifndef COW_DRIVER_GL_H
#define COW_DRIVER_GL_H

#include <cow/driver/gl/settings.h>

typedef struct cow_driver_gl {
  cow_driver_gl_settings_t *settings;
} cow_driver_gl_t;

void cow_driver_gl_init(cow_driver_gl_t *driver,
                        cow_driver_gl_settings_t *settings);

#endif // COW_DRIVER_GL_H
