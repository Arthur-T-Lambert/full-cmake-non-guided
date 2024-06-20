/**
 * @file example_class.cpp
 * @brief Implementation of ExampleClass.
 */

#include "example_class.h"

ExampleClass::ExampleClass(int val) : val_(val) {}

int ExampleClass::getVal() const {
    return val_;
}

void ExampleClass::setVal(int val) {
    val_ = val;
}