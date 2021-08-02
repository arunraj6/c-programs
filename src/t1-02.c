// Write a program to determine the ranges of float and double.
// (An exercise in your resourcefulness in finding the correct functions)

#include <stdio.h>
#include <float.h>

int main(void)
{
    printf("Range of float is [%g, %g] \n", FLT_MIN, FLT_MAX);
    printf("Range of double is [%g, %g] \n", DBL_MIN, DBL_MAX);

    return 0;
}