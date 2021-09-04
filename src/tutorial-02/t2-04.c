// Write a program that prints a table with each line giving an integer,
// its square and its cube. Request the user for the lower and upper limit,
//  and ensure that the lower limit is smaller than the upper limit,
//  by means of a do.. while loop.

#include <stdio.h>

int main(void)
{
    long upper = -1, lower = 0;
    int reads;

    do
    {
        printf("Enter lower and upper integer limits (in that order): ");
        reads = scanf("%ld%ld", &lower, &upper);
        if (reads != 2)
        {
            while (getchar() != '\n'); // if read fails, clear input buffer
        }
    } while (lower > upper); // if lower is greater than upper, get new input

    printf("\n");

    printf(" Integer       | Square        | Cube          \n");
    printf("---------------|---------------|---------------\n");
    for (long int i = lower; i <= upper; i++)
    {
        printf(" %-14ld| %-14ld| %-14ld\n", i, i * i, i * i * i);
    }
    printf("\n");

    return 0;
}