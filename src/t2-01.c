// Create a printing program that print 1 to 100 in increment of 5, and
// then back from 100 to 1, in decrement of 5. Print the output on the screen.

#include <stdio.h>

int main()
{
    printf("From 1 to 100\n");
    for (int x = 5; x <= 100; x += 5)
    {
        printf("%d\n", x);
    }

    printf("\nFrom 100 to 1\n");
    for (int x = 100; x >= 5; x -= 5)
    {
        printf("%d\n", x);
    }
    return (0);
}