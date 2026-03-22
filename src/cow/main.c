#include <cow/display.h>
#include <cow/driver/gl.h>
#include <cow/driver/gl/settings.h>
#include <lh/null.h>

int main(void) {
  cow_driver_gl_settings_t settings;
  cow_driver_gl_settings_init(&settings);

  cow_driver_gl_t driver_gl;
  cow_driver_gl_init(&driver_gl, &settings);

  cow_display_t display;
  cow_display_init(&display, lh_null);

  return 0;
}