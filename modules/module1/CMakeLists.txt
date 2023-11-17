file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_library(module1 SHARED ${SRC_FILES})

target_include_directories(module1 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_compile_options(module1 PRIVATE -Wall -Werror)
target_compile_features(module1 PRIVATE cxx_std_17)

add_subdirectory(test)