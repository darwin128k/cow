cmake_minimum_required(VERSION 3.12)
project(cow C)

set(CMAKE_C_STANDARD 11)

# GLFW 3.3.x still says cmake_minimum_required 3.0; 
# CMake 4.x rejects that without this (ignored on CMake 3.x).
if(CMAKE_VERSION VERSION_GREATER_EQUAL "4.0.0")
  set(CMAKE_POLICY_VERSION_MINIMUM 3.5 CACHE STRING "" FORCE)
endif()

set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)
add_subdirectory(lib/glfw EXCLUDE_FROM_ALL)

set(CGLM_STATIC ON CACHE BOOL "" FORCE)
set(CGLM_SHARED OFF CACHE BOOL "" FORCE)
add_subdirectory(lib/cglm EXCLUDE_FROM_ALL)

add_executable(cow
    lib/glad/src/glad.c
    src/cow/main.c
    src/cow/entity.c
    src/cow/layer.c
    src/cow/display.c
    src/cow/driver/driver.c
    src/cow/driver/custom.c
    src/cow/driver/gl.c
    src/cow/driver/gl/settings.c
)
target_include_directories(cow PRIVATE include "${CMAKE_CURRENT_SOURCE_DIR}/lib/glad/include")
target_link_libraries(cow PRIVATE glfw cglm)

if(WIN32)
  target_link_libraries(cow PRIVATE opengl32)
elseif(APPLE)
  find_package(OpenGL REQUIRED)
  target_link_libraries(cow PRIVATE OpenGL::GL)
else()
  target_link_libraries(cow PRIVATE GL m)
endif()
