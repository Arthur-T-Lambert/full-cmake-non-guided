#include "example_class.h"
#include <cassert>
#include <iostream>

int main() {
    ExampleClass test = ExampleClass(2);
    assert(test.getVal() == 2);
    std::cout << "Test passed!" << std::endl;
    return 0;
}