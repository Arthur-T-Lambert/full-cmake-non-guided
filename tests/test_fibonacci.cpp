#include "fibonacci.h"
#include <cassert>
#include <iostream>

int main() {
    assert(fibonacci(2) == 1);
    std::cout << "Test passed!" << std::endl;
    return 0;
}