cmake_minimum_required(VERSION 3.10)

project(full-cmake-non-guided)

add_executable(full-cmake-non-guided main.cpp)
target_include_directories(full-cmake-non-guided PRIVATE include)
target_link_libraries(full-cmake-non-guided PUBLIC tools)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)