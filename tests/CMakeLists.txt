add_executable(test_factorial test_factorial.cpp)
target_link_libraries(test_factorial tools)
target_include_directories(test_factorial PRIVATE "${PROJECT_SOURCE_DIR}/include")
add_test(NAME FactorialTest COMMAND test_factorial)

add_executable(test_fibonacci test_fibonacci.cpp)
target_link_libraries(test_fibonacci tools)
target_include_directories(test_fibonacci PRIVATE "${PROJECT_SOURCE_DIR}/include")
add_test(NAME FibonacciTest COMMAND test_fibonacci)


add_executable(test_palindrome test_palindrome.cpp)
target_link_libraries(test_palindrome tools)
target_include_directories(test_palindrome PRIVATE "${PROJECT_SOURCE_DIR}/include")
add_test(NAME PalindromeTest COMMAND test_palindrome)

add_executable(test_prime test_prime.cpp)
target_link_libraries(test_prime tools)
target_include_directories(test_prime PRIVATE "${PROJECT_SOURCE_DIR}/include")
add_test(NAME PrimeTest COMMAND test_prime)

add_executable(test_example_class test_example_class.cpp)
target_link_libraries(test_example_class tools)
target_include_directories(test_example_class PRIVATE "${PROJECT_SOURCE_DIR}/include")
add_test(NAME ExampleClassTest COMMAND test_example_class)

