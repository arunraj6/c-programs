#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>

void Rectangle();
void Square();
void Circle();
void Triangle();
void Trapezium();

int main()
{
	int input;
	printf("_________________________\n");
	printf("Choose an option below!\n");
	printf(" (1) Rectangle\n");
	printf(" (2) Square\n");
	printf(" (3) Circle\n");
	printf(" (4) Triangle\n");
	printf(" (5) Trapezium\n");
	printf("_________________________\n");
	scanf("%d", &input);

	switch (input)
	{
	    case 1:
			Rectangle();
			break;
		case 2:
			Square();
			break;
		case 3:
			Circle();
			break;
		case 4:
			Triangle();
			break;
		case 5:
			Trapezium();
			break;
		default:
		printf("Bad inout\n");
		break;

		return(0);
	}
}

void Rectangle()
{
	int length, breadth, perimeter, area;

	printf("Enter length in cm: ");
	scanf("%d", &length);

	printf("Enter width in cm: ");
	scanf("%d", &breadth);

	perimeter = 2 * (length + breadth);
	printf("Perimeter of Rectangle = %d cm\n", perimeter);

	area = length * breadth;
	printf("Area of Rectangle = %d cm\n", area);
}

void Square()
{
	int length, perimeter, area;

	printf("Enter length in cm: ");
	scanf("%d", &length);

	perimeter = 4 * length;
	printf("Perimeter of Square = %d cm\n", perimeter);

	area = pow(length, 2);
	printf("Area of Square = %d cm\n", area);
}

void Circle()
{
	int radius;
	float circumference, area;

	printf("Enter radius in cm: ");
	scanf("%d", &radius);

	circumference = 2 * 3.14 * radius;
	printf("Circumference of Circle = %.2f cm\n", circumference);

	area = 3.14 * pow(radius, 2);
	printf("Area of Circle = %.2f cm\n", area);
}

void Triangle()
{
	int breadth, height, perimeter;
	float area;

	printf("Enter breadth in cm: ");
	scanf("%d", &breadth);

	printf("Enter height in cm: ");
	scanf("%d", &height);

	perimeter = 3 * breadth;
	printf("Perimeter of Triangle = %d cm\n", perimeter);

	area = 0.5 * breadth * height;
	printf("Area of Triangle = %.2f cm\n", area);
}

void Trapezium()
{
	printf("lengthA and lengthB is the parallel sides length of the Trapezium");
	printf("whereas, lengthC and lengthD is the slunted sides length of the Trapezium");

	int lengthA, lengthB, lengthC, lengthD, height, perimeter;
	float area;

	printf("Enter lengthA in cm: ");
	scanf("%d", &lengthA);

	printf("Enter lengthB in cm: ");
	scanf("%d", &lengthB);

	printf("Enter lengthC in cm: ");
	scanf("%d", &lengthC);

	printf("Enter lengthD in cm: ");
	scanf("%d", &lengthD);

	printf("Enter height in cm: ");
	scanf("%d", &height);

	perimeter = lengthA + lengthB + lengthC + lengthD;
	printf("Perimeter of Trapezium = %d cm\n", perimeter);

	area = 0.5 * (lengthA + lengthB) * height;
	printf("Area of Trapezium = %f cm\n", area);
}