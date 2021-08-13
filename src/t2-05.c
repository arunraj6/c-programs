// The table below is sequence of Fibonacci numbers.
// The first two numbers in Fibonacci sequence are 0 and 1, and
// each subsequent number is the sum of the previous two numbers.

// Create a program that allow user to determine what the integer is at specific term.

#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 1, n3, i, number;
    printf("Enter the number of elements:");
    scanf("%d", &number);
    printf("\n%d %d", n1, n2);   //printing 0 and 1
    for (i = 2; i < number; ++i) //loop starts from 2 because 0 and 1 are already printed
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}