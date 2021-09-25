#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to use a delay
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

// Function to generate the random
// number at each new level
int randomnum(long level)
{
    system("clear");
    printf("Level %ld \n", level);

    long num;
    num = rand() % 100 * level;

    printf("Number : %ld \n", num);
    delay(1000 - (100 * level));

    system("clear");
    return num;
}

void main()
{
    system("clear");
    long num;
    long guessnum;
    long level = 1;
    long inputnum;

    // Start the game
    printf("Press 1 to start Game! ");
    scanf("%ld", &inputnum);

    // Game Starts
    if (inputnum == 1)
    {
        // Iterate until game ends
        do
        {
            // Generate a random number
            num = randomnum(level);

            // Get the guessed number
            scanf("%ld", &guessnum);
            level++;

            // Condition for the Game
            // Over State
            if (guessnum != num)
            {
                printf("You Failed! ");
            }
        } while (num == guessnum);
    }

    getch();
}