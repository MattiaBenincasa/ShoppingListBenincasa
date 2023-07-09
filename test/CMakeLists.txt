cmake_minimum_required(VERSION 3.25)

add_subdirectory(./lib/googletest-1.13.0)
set(gtest_SOURCE_DIR, ./lib/googletest-1.13.0)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTests.cpp UserTest.cpp ListTest.cpp)
add_executable(runShoppingListTests ${TEST_SOURCE_FILES})
target_link_libraries(runShoppingListTests gtest gtest_main gmock_main core)