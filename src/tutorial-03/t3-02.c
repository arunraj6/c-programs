// Write a program that request an integer from the user and then, performs the following:

// Call a function that sum together all the digits of the integer and then print the total,
// Call a function that multiply all the digits of the integer and then, print the result,
// Call a function that find the average of all the digits of the integer and then, print the result.
// C program to compute sum of digits in
// number.

#include <stdio.h>

/* Function to get sum of digits */
int getSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

/* Function to get multiply of digits */
int getMultiply(int n)
{
    int multiply = 1;
    while (n != 0)
    {
        multiply = multiply * (n % 10);
        n = n / 10;
    }
    return multiply;
}

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int sum = getSum(number);
    printf("\nSum is %d ", sum);
    printf("\nAverage is %d ", sum / 2);
    printf("\nMultiply is %d ", getMultiply(number));

    return 0;
}
