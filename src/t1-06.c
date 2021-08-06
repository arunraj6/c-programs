// Extend the program in question 5, to make it into a menu-driven software
// (whereby the program gives choices 1-5 to find the area and perimeter of
// rectangle, square, circle, triangle and trapezium).
// Once the user choose (1)-(5), the program shall ask the relevant
// information to find and output the area and perimeter of the shapes.
// (e.g. for circle, input the radius of the circle).

#include <stdio.h>

/* height and width of a rectangle in inches */
int main()
{
    int input;

    printf("-------------------------\n");
    printf("Choose an option below!\n");
    printf(" (1) Rectangle\n");
    printf(" (2) Square\n");
    printf(" (3) Circle\n");
    printf(" (4) Triangle\n");
    printf(" (5) Trapezium\n");
    printf("-------------------------\n");
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        handelRectangle();
        break;
    case 2:
        handelSquare();
        break;
    case 3:
        handelCircle();
        break;
    case 4:
        handelTriangle();
        break;
    case 5:
        handelTrapezium();
        break;
    default:
        printf("Bad input\n");
        break;

        return (0);
    }
}

void handelRectangle()
{
    int width, length, area, perimeter;

    printf("Input length: ");
    scanf("%d", &length);

    printf("Input width: ");
    scanf("%d", &width);

    perimeter = 2 * (length + width);
    printf("Perimeter of the rectangle = %d inches\n", perimeter);

    area = length * width;
    printf("Area of the rectangle = %d square inches\n", area);
}

void handelSquare()
{
    // Logic to print Perimeter & Area for Square
}

void handelCircle()
{
    // Logic to print Perimeter & Area for Circle
}

void handelTriangle()
{
    // Logic to print Perimeter & Area for Triangle
}

void handelTrapezium()
{
    // Logic to print Perimeter & Area for Trapezium
}