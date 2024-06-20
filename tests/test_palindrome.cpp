#include "palindrome.h"
#include <cassert>
#include <iostream>

int main() {
    assert(palindrome("aozeifnze", 9) == false);
    std::cout << "Test passed!" << std::endl;
    return 0;
}