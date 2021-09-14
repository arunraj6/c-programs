// Write a program structure and C program for a vending machine which dispenses
// chocolate (9 different types), with prices $0.50 (3 choc), $0.90 (3 Choc) and $1.20 (3 Choc).
// The machine accepts all Bruneian coins (1c, 2c, 5c, 10c, 20c & 50c) and $1, $5 and $10 notes.
// The program should start with a main menu which displays all the options and
// should go back to the main menu upon completion.
// (Use scanf to imitate inputting money into the machine)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void welcomeScreen();
int menu();
void chocolateChoosen(int selection);
float getPriceInCents(int selection);
int moneyInput();

int main()
{
    welcomeScreen();
    getch();
    int q, entered, proceed, select, selection, amount, balanceAmount, change;
    float drinkmax, billmoney, itemPrice, coinselected;
    float total = 0;

    selection = menu();
    chocolateChoosen(selection);
    if (selection == 0)
    {
        return 0;
    }
    else if (selection > 0 && selection <= 9)
    {
        printf("\n\nPress 1 to continue or 2 to cancel the order\n");
        scanf("%d", &proceed);

        if (proceed == 1)
        {
            itemPrice = getPriceInCents(selection);
        x:
            amount = moneyInput();
            if (amount == 1 || amount == 2 || amount == 5 || amount == 10 || amount == 20 || amount == 50)
            {
                while (total <= itemPrice)
                {
                    total = total + amount;
                    balanceAmount = itemPrice - total;

                    if (total < itemPrice)
                    {
                        printf("\n\nYour outstanding money is %d c", balanceAmount);
                        printf("\n\n");
                        goto x;
                    }
                    else if (total > itemPrice)
                    {
                        change = total - itemPrice;
                        printf("\t\t\tChocolate is being dispensed...\n");
                        printf("\n\t\t\tYour change is %d c\n\n", change);
                        printf("\n\t\t    *** Thank you! ***");
                        break;
                    }
                    else
                    {
                        printf("\t\t\tChocolate is being dispensed...\n");
                        printf("\n\t\t    *** Thank you! ***");
                        break;
                    }
                }
            }
            else
            {
                printf("\nMoney not acceptable, Please Try again!\n\n");
                goto x;
            }
            getch();
        }
        else
        {
            printf("Your order has been cancelled\n\n");
            main();
        }
    }
    else
    {
        printf("Your order has been cancelled\n\n");
        main();
    }
}

void welcomeScreen()
{
    printf("\t\t\tChocolate Vending Machine\n\n");
    printf("\t\t\t----------------------------\n");
    return;
}

int menu()
{
    int selection;
    printf("MENU: ");
    printf("\n\n");
    printf("1. Cadbury Chocolate");
    printf("\t\t\t$0.50\n");
    printf("2. Nestle Chocolate");
    printf("\t\t\t$0.50\n");
    printf("3. Amul Chocolate");
    printf("\t\t\t$0.50\n");
    printf("4. Parle Chocolate");
    printf("\t\t\t$0.90\n");
    printf("5. Mars Chocolate");
    printf("\t\t\t$0.90\n");
    printf("6. Ferrero Rocher Chocolate");
    printf("\t\t$0.90\n");
    printf("7. Lotus Chocolate");
    printf("\t\t\t$1.20\n");
    printf("8. Campco Chocolate");
    printf("\t\t\t$1.20\n");
    printf("9. LINDT Rocher Chocolate");
    printf("\t\t$1.20\n");
    printf("0. Quit");
    printf("\n\n");

    printf("Please enter your selection: \n");
    scanf("%d", &selection);

    return selection;
}

void chocolateChoosen(int selection)
{
    switch (selection)
    {
    case 0:
        break;
    case 1:
        printf("You have selected Cadbury Chocolate.");
        printf("\t\t\t$0.50\n");
        break;
    case 2:
        printf("You have selected Nestle Chocolate.");
        printf("\t\t\t$0.50\n");
        break;
    case 3:
        printf("You have selected Amul Chocolate.");
        printf("\t\t\t$0.50\n");
        break;
    case 4:
        printf("You have selected Parle Chocolate.");
        printf("\t\t\t$0.90\n");
        break;
    case 5:
        printf("You have selected Mars Chocolate.");
        printf("\t\t\t$0.90\n");
        break;
    case 6:
        printf("You have selected Ferrero Rocher Chocolate.");
        printf("\t\t\t$0.90\n");
        break;
    case 7:
        printf("You have selected Lotus Chocolate.");
        printf("\t\t\t£1.20\n");
        break;
    case 8:
        printf("You have Campco Chocolate.");
        printf("\t\t\t$1.20\n");
        break;
    case 9:
        printf("You have selected LINDT Rocher  Chocolate.");
        printf("\t\t\t$1.20\n");
        break;
    default:
        printf("Invalid input!\n");
        break;
    }
    return;
}

float getPriceInCents(int selection)
{
    float price = 0;

    switch (selection)
    {
    case 1:
        price = 50;
        break;
    case 2:
        price = 50;
        break;
    case 3:
        price = 50;
        break;
    case 4:
        price = 90;
        break;
    case 5:
        price = 90;
        break;
    case 6:
        price = 90;
        break;
    case 7:
        price = 120;
        break;
    case 8:
        price = 120;
        break;
    case 9:
        price = 120;
        break;
    }
    return price;
}

int moneyInput()
{
    // **** Not handled for $1, $5 and $10 notes *****
    int amount;
    printf("Enter your money in Cents: \n");
    printf("(1c, 2c, 5c, 10c, 20c 50c)\n");
    scanf("%d", &amount);
    return amount;
}