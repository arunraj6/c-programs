// Write a program for the concentration game.  For this program, you need to learn and use the following functions:
// a) rand () function : generates and return a whole number between 0 to a library-defined number
// b) time(NULL) function : return the current time
// c) system(“clear”) : a system command which can be executed from your C program in order to clear the display of previous value

// Concentration game:
// a) Ask the player if he wants to play concentration game
// b) If No, exit the program. If yes, start playing
// c) To play, generate three random integer numbers between 1-100 and print on the screen
// d) The program shall give the user a 5 seconds to memorize the 3 numbers
// e) Clear the screen from previously displayed numbers
// f) Request the three numbers from the user
// g) If all 3 numbers are correct, print congratulation, otherwise, correct the user by giving the three correct numbers.
// h) Request the user if he wants to continue playing

#include <conio.h>
#include <dos.h>
#include <stdio.h>
#include <stdlib.h>

// Function to generate the random
// number at each new level
int randomnum(long level)
{
    clrscr();
    printf("Level %ld \n", level);

    long num;
    num = (rand() % 100 * level) + 1 + level * 5.2f;

    printf("Number : %ld \n", num);
    delay(2000 - (10 * level));
    clrscr();

    // Return the number
    return num;
}

void main()
{
    clrscr();
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
