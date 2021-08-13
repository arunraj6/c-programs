// Have a program request the use to enter and uppercase letter.
// Use nested loops to produce a pyramid pattern like the figure below,
// where the pattern should extend to the character entered. For example,
// an input value of B is entered to produce the pattern in the figure below.
//   A
//  ABA
// ABCBA

// Hint: Multiple loop is needed for the exercise.

#include <stdio.h>

int main(void)
{
    char ch, row, spaces, letter;

    printf("Please, insert an uppercase letter: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        for (row = 'A'; row <= ch; row++)
        {
            for (spaces = ch; spaces > row; spaces--)
            {
                printf(" ");
            }
            for (letter = 'A'; letter < row; letter++)
            {
                printf("%c", letter);
            }
            for (; letter >= 'A'; letter--)
            {
                printf("%c", letter);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Character is Not Upper Case Letters");
    }
    return 0;
}