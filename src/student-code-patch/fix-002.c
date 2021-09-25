#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int level = 1; // Game Level
int fin();

// Function to use a delay
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}

void Game()
{
    level++;
    int i, r, c, Question1, Question2, Question3, Answer1, Answer2, Answer3;
    printf("\nHere are your 3 numbers in order, you have 5 seconds to memorise.\n\n");
    Question1 = 1 + (clock() % 100);
    printf("%d\n", Question1);
    Question2 = 1 + (clock() % 100);
    printf("%d\n", Question2);
    Question3 = 1 + (clock() % 100);
    printf("%d\n", Question3);

    //sleep(5); //5 seconds
    delay(3000 - (200 * level));
    system("clear");
    printf("Please enter the three numbers you saw in order\nFirst number = ");
    scanf("%d", &Answer1);
    if (Answer1 == Question1)
    {
        printf("\nSecond number = ");
        scanf("%d", &Answer2);
        if (Answer2 == Question2)
        {
            printf("\nThird number = ");
            scanf("%d", &Answer3);
            if (Answer3 == Question3)
            {
                fin();
            }
            else
            {
                printf("\nNumber incorrect, the three numbers were = %d and %d and %d", Question1, Question2, Question3);
            }
        }
        else
        {
            printf("\nNumber incorrect, the three numbers were = %d and %d and %d", Question1, Question2, Question3);
        }
    }
    else
    {
        printf("\nNumber incorrect, the three numbers were = %d and %d and %d", Question1, Question2, Question3);
    }
}

int fin()
{
    int fin;
    printf("\nCongratulation, would you like to play again? \n 1)Yes or 2)No =");
    scanf("%d", &fin);
    if (fin == 1)
    {
        Game();
    }
    else if (fin == 2)
    {
        return (0);
    }
    else
    {
        printf("\nOption invalid");
        return (0);
    }
}

int main()
{
    int a;
    printf("Would you like to play the Concentration game? \n1 = Yes\n2 = No\n\n");
    scanf("%d", &a);
    if (a == 1)
    {
        Game();
    }
    else if (a == 2)
    {
        return (0);
    }
    else
    {
        printf("Option Invalid\n");
        return (0);
    }
}
