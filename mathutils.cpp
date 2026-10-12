#include "mathutils.h"

int add(int a, int b)
{
    return a + b;
}

int factorial(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}