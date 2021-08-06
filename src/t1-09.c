// Write a menu-driven program that request the type of cars from a limited list of at least 5 cars
// that you obtained from the www.fueleconomy.gov website.
// It would then request the distance of travel and the current price of gas per gallon, to calculate and
// output the total cost of the travel.

#include <stdio.h>

float calculateCostOfTravel(int carType, float distance, float price)
{
    float totalCost;
    // In each case the car mileages are hardcoded
    switch (carType)
    {
    case 1:
        totalCost = (distance / 59) * price;
        break;
    case 2:
        totalCost = (distance / 54) * price;
        break;
    case 3:
        totalCost = (distance / 31) * price;
        break;
    case 4:
        totalCost = (distance / 30) * price;
        break;
    case 5:
        totalCost = (distance / 40) * price;
        break;
    default:
        totalCost = 0.;
        break;
    }
    return totalCost;
}

int main()
{
    int carType;
    float distance, price;

    // Menu options
    printf("-------------------------\n");
    printf("Choose an option below!\n");
    printf(" (1) Small Car\n");
    printf(" (2) Sedan\n");
    printf(" (3) Hatchback\n");
    printf(" (4) Sporty\n");
    printf(" (5) SUV\n");
    printf("-------------------------\n");
    scanf("%d", &carType);

    // input validation
    if (carType > 5 || carType < 1)
    {
        printf("\nInvalid Choice!");
        exit(0); // To stop the execution
    }

    // Additional details
    printf("How much distance need to travel in KM:\n");
    scanf("%f", &distance);
    printf("Current price of gas per gallon in $:\n");
    scanf("%f", &price);

    // Calculate the total cost and print the output
    float totalCost = calculateCostOfTravel(carType, distance, price);
    printf("Total cost of the travel is %.2f $", totalCost);

    return (0);
}
