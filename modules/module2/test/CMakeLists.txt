# Load gtest
include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.12.0
)

FetchContent_MakeAvailable(googletest)

# Locate every .cpp files
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

# Create test executable
add_executable(calculator_test ${SRC_FILES})

# Link libraries
target_link_libraries(calculator_test PRIVATE module2 gmock gtest_main) # gtest is already linked

# Save test executable at test output directory
set_target_properties(calculator_test PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_TEST_OUTPUT_DIRECTORY}/${PROJECT_NAME}")
