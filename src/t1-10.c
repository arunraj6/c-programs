// Write a program that request the taxable income of an individual, and
//then output the amount of tax and its effective tax rate.

#include <stdio.h>

int getTaxPercentage(float amount)
{
    float percentage;
    if (amount <= 11000)
    {
        percentage = 0;
    }
    else if (amount > 11000 && amount <= 43000)
    {
        percentage = 20;
    }
    else if (amount > 43000 && amount <= 150000)
    {
        percentage = 40;
    }
    else
    {
        percentage = 45;
    }
    return percentage;
}

float calculateTax(float taxableIncome)
{
    float percentage = getTaxPercentage(taxableIncome);
    return (percentage > 0) ? (taxableIncome * percentage) / 100 : 0;
}

int main()
{
    float taxableIncome;

    printf("Enter the taxable income in pound : \n");
    scanf("%f", &taxableIncome);

    // input validation
    if (taxableIncome <= 0)
    {
        printf("\nInvalid entry!");
        exit(0); // To stop the execution
    }

    // Calculate the tax and rate
    int taxRate = getTaxPercentage(taxableIncome);
    float taxAmount = calculateTax(taxableIncome);

    printf("Effective tax rate %d", taxRate);
    printf("\nAmount of tax to pay %.2f $", taxAmount);

    return (0);
}