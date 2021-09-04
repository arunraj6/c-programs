// Write a program that request the user to enter
// 1) beginning number to start counting,
// 2) ending number to start counting, and
// 3) Increment number used.
// Then, use the numbers to build a counting program
// (that counts the number between the start and ending number with the increment) and display the result.

#include <stdio.h>

int main()
{
    int start, end, increment;
    printf("Enter the start value : \n");
    scanf("%d", &start);
    printf("Enter the end value : \n");
    scanf("%d", &end);
    printf("Enter the increment value : \n");
    scanf("%d", &increment);

    if (start >= end)
    {
        printf("\nStart value cannot be greater or equals to End value!");
        exit(0); // To stop the execution
    }

    printf("\nResult is:\n");
    for (int x = start; x <= end; x+= increment)
    {
        printf("%d\n", x);
    }
    return (0);
}