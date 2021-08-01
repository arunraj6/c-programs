// Write a program to determine the ranges of char, short int, int and long int,
// both signed and unsigned, by printing appropriate values
// from standard headers (standard library) and direct computations.

#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("Range of signed char is [%d, %d] \n", SCHAR_MIN, SCHAR_MAX);
    printf("Range of unsigned char is [%d, %u] \n", 0, UCHAR_MAX);

    printf("Range of signed short int is [%hd, %hd] \n", (short)SHRT_MIN, (short)SHRT_MAX);
    printf("Range of unsigned short int is [%d, %hu] \n", 0, (unsigned short)USHRT_MAX);

    printf("Range of signed int is [%d, %d] \n", INT_MIN, INT_MAX);
    printf("Range of unsigned int is [%d, %u] \n", 0, UINT_MAX);

    printf("Range of signed long int is [%ld, %ld] \n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long int is [%d, %lu] \n", 0, (unsigned long)ULONG_MAX);

    return 0;
}