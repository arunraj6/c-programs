// Write a program that request temperature in Celsius and Fahrenheit
// and then convert it, and display the result.The conversion equation is :
#include <stdio.h>

int main()
{
    float fh, cl;
    int input;

    printf("\n(1): Convert temperature from Fahrenheit to Celsius.");
    printf("\n(2): Convert temperature from Celsius to Fahrenheit.");
    printf("\nEnter your choice (1) or (2): ");
    scanf("%d", &input);

    if (input == 1)
    {
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f", &fh);
        cl = (fh - 32) / 1.8;
        printf("Temperature in Celsius: %.2f", cl);
    }
    else if (input == 2)
    {
        printf("\nEnter temperature in Celsius: ");
        scanf("%f", &cl);
        fh = (cl * 1.8) + 32;
        printf("Temperature in Fahrenheit: %.2f", fh);
    }
    else
    {
        printf("\nInvalid Choice!");
    }
    return 0;
}