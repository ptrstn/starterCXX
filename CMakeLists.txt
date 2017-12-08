cmake_minimum_required(VERSION 3.2.2)
project(starterCXX)

add_compile_options(-Wall -Wextra -Wpedantic)
add_definitions(-std=c++1z)

include_directories(inc)

set(SOURCE_FILES src/myclass.cc)
add_executable(main_target main.cc ${SOURCE_FILES})

set(CATCH_INCLUDE_DIR test/catch)
add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CATCH_INCLUDE_DIR})

enable_testing()
set(TEST_SOURCES test/tests-main.cc test/tests-myclass.cc)
add_executable(tests ${TEST_SOURCES} ${SOURCE_FILES})
target_link_libraries(tests Catch)
add_test(Tester test)