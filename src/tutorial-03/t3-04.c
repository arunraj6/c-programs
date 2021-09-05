// Expand the function in question 3, to construct a function which calculates
// the power of base number to its exponential number.
// (E.g. : 5 is the base and 10 is the exponential).
// The main function shall request the base and the exponential for
// the purpose of calculation.

#include <stdio.h>
int power(int n1, int n2);
int main()
{
    int base, exponential, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponential number(positive integer): ");
    scanf("%d", &exponential);
    result = power(base, exponential);
    printf("%d^%d = %d", base, exponential, result);
    return 0;
}

int power(int base, int exponential)
{
    if (exponential != 0)
        return (base * power(base, exponential - 1));
    else
        return 1;
}
