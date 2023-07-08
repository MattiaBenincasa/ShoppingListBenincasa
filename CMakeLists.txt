cmake_minimum_required(VERSION 3.25)
project(ShoppingList)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Test)
set(SOURCE_FILES Item.h Observer.h Subject.h List.cpp List.h Item.cpp User.cpp User.h)
add_executable(ShoppingList main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(ShoppingList core)
