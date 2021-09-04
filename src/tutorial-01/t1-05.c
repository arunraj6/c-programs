// Write a program that request the length and width of a rectangle
// from the keyboard, and then output the area and perimeter of the rectangle

#include <stdio.h>

/* height and width of a rectangle in inches */
int main()
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

    return (0);
}