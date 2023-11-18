# Module declaration
project(module1)

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

add_subdirectory(test)

# Provide public header files
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/include DESTINATION ${CMAKE_LIBRARY_OUTPUT_DIRECTORY}/include/${PROJECT_NAME})
