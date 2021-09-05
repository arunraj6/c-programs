// Write a recursive function to take the value of 3 to the power of another number.
//For example, if 4 is passed, the function will return 81.

#include <stdio.h>
int power(int n1, int n2);
int main()
{
    int base = 3, a, result;
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}

int power(int base, int a)
{
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}

//For example, if 4 is passed, the function will return 81.

// 3 * three_power(3) =
// 3 * (3 * three_power(2)) =
// 3 * (3 * (3 * three_power(1)) =
// 3 * (3 * (3 * (3 * three_power(0))) =
// 3 * (3 * (3 * (3 * (1)))) =
// 3 * 3 * 3 * 3 = 81