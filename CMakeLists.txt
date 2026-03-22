cmake_minimum_required(VERSION 4.1)
project(cow C)

set(CMAKE_C_STANDARD 11)

add_executable(cow
    src/cow/main.c
    src/cow/entity.c
    src/cow/layer.c
    src/cow/display.c
    src/cow/driver/driver.c
    src/cow/driver/custom.c
    src/cow/driver/gl.c
    src/cow/driver/gl/settings.c
)
target_include_directories(cow PRIVATE include)
