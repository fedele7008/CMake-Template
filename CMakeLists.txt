# State minimum CMake version
cmake_minimum_required(VERSION 3.11)

# Main project declaration
project(
  CMakeTest
  VERSION 0.1
  DESCRIPTION "Test project for CMake configuration"
  LANGUAGES CXX)

# Set libraries to be saved in artifact/lib/
set(OUTPUT_DIRECTORY artifact)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/${OUTPUT_DIRECTORY}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/${OUTPUT_DIRECTORY}/lib)
set(CMAKE_TEST_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/${OUTPUT_DIRECTORY}/test)

# Set executables to be saved in artifact/bin/
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/artifact/bin)

# Run recursive CMake
add_subdirectory(apps/main)
add_subdirectory(modules)
