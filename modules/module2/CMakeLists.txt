file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

add_library(module2 SHARED ${SRC_FILES})

target_include_directories(module2 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_compile_options(module2 PRIVATE -Wall -Werror)
target_compile_features(module2 PRIVATE cxx_std_17)

target_link_libraries(module2 PUBLIC module1)

# add_subdirectory(test)
