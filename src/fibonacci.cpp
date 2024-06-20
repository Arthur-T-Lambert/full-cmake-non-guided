/**
 * @file fibonacci.cpp
 * @brief Implementation of fibonacci function.
 */

#include "fibonacci.h"

int fibonacci(int a) {
    if (a <= 1)
    {
        return a;
    }

    int fn_minus_two = 0;
    int fn_minus_one = 1;
    int ret = 1;
    for (int i = 2; i <= a; i++)
    {
        ret = fn_minus_two + fn_minus_one;
        fn_minus_two = fn_minus_one;
        fn_minus_one = ret;
    }
    return ret;
}