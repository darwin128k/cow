#include <cow/driver/gl.h>

void cow_driver_gl_init(cow_driver_gl_t *self,
                        cow_driver_gl_settings_t *settings) {
  self->settings = settings;
}
