#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//stdlib is for rand function
/*
Author: Perengrine
Purpose: Guess the number
Design/Requirements: 
    Generate a random number from 0 to 20
    Ask user to guess
    User can only enter numbers from 0 to 20
    Program will indicate to user if guess is too high or low
    The player wins if they can guess the number within 5 tries
    Output the amount of tries left
*/

int main()
{
    //Initializing variables and setting formulas
    int player_guess;
    int random_number;
    _Bool player_win = 0;
    
    //Initializing time variable then using it as a seed for random nmber
    time_t t;
    srand((unsigned) time(&t));
    random_number = rand() % 20;
    
    //Main code block/loop. Each round is made and decided in this loop. All logic inside too.
    for(int i = 5; i > 0; i--)
    {
        //Asking for and collecting user input
        printf("Guess a number from 0 to 20: ");
        scanf("%d", &player_guess);
        
        //Logic for winning or loosing
        if ((player_guess > 20) || (player_guess < 0)) {
            printf("Oh no, you guessed higher or lower than the max (20), restart to continue playing.\n\n\n\n\n");
            break;
        }
        else if (player_guess == random_number) {
            player_win = 1;
            printf("Congratulations! You Won! The number was %d\n\n\n\n\n", random_number);
            break;
        }
        
        //Initializing temperature variable with expression
        int temperature = player_guess - random_number;
        
        //Logic for temperature (how close you are to the right answer)
        if (temperature >= 5) {
            printf("Pretty frickin cold\n");
        }
        else if ((temperature = 4) || (temperature = 3)) {
            printf("Not so frosty anymore\n");
        }
        else if (temperature == 2) {
            printf("Getting hot\n");
        }
        else if (temperature == 1) {
            printf("You're burning up!\n");
        }
        
        //Dispaly tries remaining to the user
        printf("You have %d tries remaining\n", i - 1);
        
        //Display the number if player loses
         if (i == 1 && player_win != 1) {
            printf("The number was %d\n", random_number);
        }
    }
    return 0;
}