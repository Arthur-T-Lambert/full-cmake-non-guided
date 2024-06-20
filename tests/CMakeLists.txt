add_executable(test_factorial test_factorial.cpp)
target_link_libraries(test_factorial full-cmake-non-guided)
add_test(NAME FactorialTest COMMAND test_factorial)