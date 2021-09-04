// Write a program that requests two integer values and then,
// calls functions (by defining function prototypes and function definitions)
// to find the following:

// the sum of two numbers,
// the larger of two numbers,
// the difference of two numbers,
// the product of the two numbers,
// the quotient from the division of the two numbers (with the larger number as the dividend and the smaller number as the divisor)
// the remainder from the division of the two numbers (with the larger number as the dividend and the smaller number as the divisor)
// the  average of the two number.
// The program then prints all these values.

#include <stdio.h>
#include <stdlib.h>

void division(int dividend, int divisor)
{
    int quotient, remainder;
    quotient = dividend / divisor;  // Computes quotient
    remainder = dividend % divisor; // Computes remainder

    printf("\nQuotient = %d", quotient);
    printf("\nRemainder = %d", remainder);
    return;
}

void findLargest(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("\nFirst number is Largest");
        division(num1, num2); // Find quotient, remainder
    }
    else if (num2 > num1)
    {
        printf("\nSecond number is Largest");
        division(num2, num1); // Find quotient, remainder
    }
    else
    {
        printf("\nBoth are Equal");
        division(num2, num1); // Find quotient, remainder
    }
}

int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nSum of %d + %d", num1, num2);
    printf(" = %d", (num1 + num2));
    findLargest(num1, num2); // Find largest
    printf("\nDifference of %d - %d", num1, num2);
    printf(" = %d", (num1 - num2));
    printf("\nProduct of %d X %d", num1, num2);
    printf(" = %d", (num1 * num2));
    printf("\nAverage of  %d , %d", num1, num2);
    printf(" = %d", (num1 + num2) / 2);

    return 0;
}
