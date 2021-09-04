// Write a program which prints the character code of lowercase a-z and uppercase A-Z.

#include <stdio.h>
#include <ctype.h> // for tolower

int main(void)
{
    printf("char \t code \t char \t code \n");
    for (char c = 'A'; c <= 'Z'; ++c)
    {
        printf("%c \t", tolower(c));
        printf("%d \t", tolower(c));
        printf("%c \t", c);
        printf("%d \t", c);
        printf("\n");
    }
    return 0;
}
