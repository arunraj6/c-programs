// Write a program that request the number of seconds from the keyboard,
// convert it into hours, minutes & second and then, display it on the screen.

#include <stdio.h>

int main(void)
{
    int sec, h, m, s;

    printf("Input seconds: ");
    scanf("%d", &sec);

    h = (sec / 3600);
    m = (sec - (3600 * h)) / 60;
    s = (sec - (3600 * h) - (m * 60));

    printf("H:M:S - %d:%d:%d\n", h, m, s);

    return 0;
}