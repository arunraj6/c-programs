// Write a program that request two integer values and print all
// the prime numbers between the two intervals and the total of the all
//the prime numbers, using functions.

#include <stdio.h>

int checkPrimeNumber(int n);
int main()
{
    int n1, n2, i, flag, sum;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);
    for (i = n1 + 1; i < n2; ++i)
    {
        // flag will be equal to 1 if i is prime
        flag = checkPrimeNumber(i);

        if (flag == 1)
        {
            sum = sum + i;
            printf("%d ", i);
        }
    }
    printf("\nTotal of the all the prime numbers are: %d ", sum);
    return 0;
}

// function to check prime number
int checkPrimeNumber(int n)
{
    int j, flag = 1;
    for (j = 2; j <= n / 2; ++j)
    {
        if (n % j == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
