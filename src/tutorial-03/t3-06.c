// Write a program that converts number entered by the user to words.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* A function that prints given number in words only for 0 - 9 */
void convert_to_words(int num)
{
    if (num >= 0 && num <= 9)
    {
        char *single_digits[] = {"zero", "one", "two", "three", "four",
                                 "five", "six", "seven", "eight", "nine"};

        printf("%s\n", single_digits[num]);
        return;
    }
    else
    {
        fprintf(stderr,
                "Not supported\n");
        return;
    }
}

int main(void)
{
    int number;
    printf("Enter a positive single digit integer: ");
    if (scanf("%d", &number) == 1) // To check if the input is a number or not
    {
        convert_to_words(number);
    }
    return 0;
}
