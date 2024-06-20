#include "prime.h"
#include <cassert>
#include <iostream>

int main() {
    assert(prime(2) == 1);
    std::cout << "Test passed!" << std::endl;
    return 0;
}