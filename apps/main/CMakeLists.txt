file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_executable(main ${SRC_FILES})
target_link_libraries(main PUBLIC module1)
target_link_libraries(main PUBLIC module2)