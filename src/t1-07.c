// Write a program that request two Cartesian points (x,y) and
// then compute the slope of the straight line between these points and
// their midpoint. Output your result.

#include <stdio.h>

int main()
{
    float x1, x2, y1, y2, slope, midX, midY;

    printf("Enter the X Coordinate of Endpoint 1: \n");
    scanf("%f", &x1);
    printf("Enter the Y Coordinate of Endpoint 1:\n");
    scanf("%f", &y1);

    printf("Enter the X Coordinate of Endpoint 2:\n");
    scanf("%f", &x2);
    printf("Enter the Y Coordinate of Endpoint 2:\n");
    scanf("%f", &y2);

    printf("\t\n");
    printf("(%.2f,%.2f)---------------(%.2f,%.2f)\n", x1, y1, x2, y2);
    printf("\t\n");

    slope = (y2 - y1) / (x2 - x1);
    midX = (x1 + x2) / 2;
    midY = (y1 + y2) / 2;

    printf("Slope of the line is : %.2f\n", slope);
    printf("Midpoint of the line is : (%.2f,%.2f)", midX, midY);

    return (0);
}