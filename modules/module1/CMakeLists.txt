# Module declaration
project(
  module1
  DESCRIPTION "This is module 2"
  LANGUAGES CXX)

# Enable FetchContent
include(FetchContent)

# Load fmt
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG "7.1.3"
)

# Load spdlog
FetchContent_Declare(
    spdlog
    GIT_REPOSITORY https://github.com/gabime/spdlog.git
    GIT_TAG "v1.12.0"
)

FetchContent_MakeAvailable(fmt)
FetchContent_MakeAvailable(spdlog)

# Locate every .cpp files
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

# Create library
add_library(${PROJECT_NAME} SHARED ${SRC_FILES})

# Locate header files
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Compiler options
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Werror)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)

# Link libraries
target_link_libraries(${PROJECT_NAME} PUBLIC fmt spdlog)

# Run CMake for library test suites
add_subdirectory(test)
