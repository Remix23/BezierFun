cmake_minimum_required(VERSION 3.15)
project(RayMarcher)

find_package(raylib 3.0 REQUIRED) # Requires at least version 3.0

set (CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17) # Requires C11 standard

file (GLOB SOURCES "src/*.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})

include_directories("headers")

target_link_libraries(${PROJECT_NAME} raylib)

# Checks if OSX and links appropriate frameworks (only required on MacOS)
if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()