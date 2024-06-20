/**
 * @file factorial.cpp
 * @brief Implementation of factorial function.
 */

#include "factorial.h"

int factorial(int a) {
    int ret = 2;

    if (a <= 2)
    {
        return a;
    }

    for (int i = 3; i <= a; i++)
    {
        ret *= i;
    }
    return ret;
}