//Write a program that request three integer numbers and sort them in descending order.
// Extend the program to calculate the Lowest Common Multiples (L.C.M.) and Highest Common Factor (H.C.F) of the three numbers.

#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, z;
    printf("Input 3 integers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("\n---------------------------\n");
    printf("Original numbers: %d, %d, %d", x, y, z);
    printf("\nSorted numbers: ");
    if (x <= y && y <= z)
    {
        printf("%d, %d, %d", x, y, z);
    }
    else
    {
        if (x <= z && z <= y)
        {
            printf("%d, %d, %d", x, z, y);
        }
        else
        {
            if (y <= x && x <= z)
            {
                printf("%d, %d, %d", y, x, z);
            }
            else
            {
                if (y <= z && z <= x)
                {
                    printf("%d, %d, %d", y, z, x);
                }
                else
                {
                    if (z <= x && x <= y)
                    {
                        printf("%d, %d, %d", z, x, y);
                    }
                    else
                    {
                        if (x == y && y == z)
                        {
                            printf("%d, %d, %d", x, y, z);
                        }
                        else
                        {
                            printf("%d, %d, %d", z, y, x);
                        }
                    }
                }
            }
        }
    }
}