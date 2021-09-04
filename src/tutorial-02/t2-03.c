// Write a program that prints the Celsius to Fahrenheit conversion
// between 0 degree celsius to 300 degree Celsius, at increment of 5 celsius,
// using formulae given at tutorial 1.

#include <stdio.h>

int main()
{
    float fh;
    for (int x = 0; x <= 300; x += 5)
    {
        fh = (x * 1.8) + 32;
        printf("%d Celsius => %.2f Fahrenheit\n", x, fh);
    }
    return 0;
}