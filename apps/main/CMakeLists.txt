# Locate every .cpp files
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

# Create executable
add_executable(main ${SRC_FILES})

# Link libraries
target_link_libraries(main PUBLIC module1)
target_link_libraries(main PUBLIC module2)

# Declare dependencies
add_dependencies(main module1)
add_dependencies(main module2)
