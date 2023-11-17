cmake_minimum_required(VERSION 3.11)

project(
  CMakeTest
  VERSION 0.1
  DESCRIPTION "Test project for CMake configuration"
  LANGUAGES CXX)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(apps/main)
add_subdirectory(modules/module1)
add_subdirectory(modules/module2)
