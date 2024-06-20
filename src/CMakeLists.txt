add_library(tools factorial.cpp fibonacci.cpp palindrome.cpp prime.cpp example_class.cpp)
target_include_directories(tools PRIVATE "${PROJECT_SOURCE_DIR}/include")