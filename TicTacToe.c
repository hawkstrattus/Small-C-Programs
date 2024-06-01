#include <stdio.h>
#include <stdlib.h>

/*
 * Author: Perengrine
 * Purpose: TicTacToe
*/

int printboard(int, int);
int playermove();

char charSet[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int winner = 0; // determines if someone has won the game. This becomes 1 if the game is won

int main()
{
    playermove(); // initiates the program
}

int printboard(int playerMove, int moveCounter)
{

    int movesArray1[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 }; // temporary store used to store all the moves that have been made and keep them for display
    
    // This is used to set the values in the data store movesArray
    switch(playerMove) {
        case 1: // if playerMove is 1 then the following gets executed
            movesArray1[0] = 1;
            break;
        case 2:
            movesArray1[1] = 2;
            break;
        case 3:
            movesArray1[2] = 3;
            break;
        case 4:
            movesArray1[3] = 4;
            break;
        case 5:
            movesArray1[4] = 5;
            break;
        case 6:
            movesArray1[5] = 6;
            break;
        case 7:
            movesArray1[6] = 7;
            break;
        case 8:
            movesArray1[7] = 8;
            break;
        case 9:
            movesArray1[8] = 9;
            break;
    }
    
    /* depending on who's move it is and where their symbol was placed, the following will determine if they placed an X or O
      * and add the play to the global data store (charSet) which contains all the plays and will be used to determine a winner.
      * Elseif satements are being used just to show another way to do it then the single if statement thing that follows
    */
    if(movesArray1[0] == 1 && moveCounter == 1) {
        charSet[0] = 'X'; 
    }
    else if (movesArray1[0] == 1 && moveCounter == 2) {
        charSet[0] = 'O';
    }
    else if(movesArray1[1] == 2 && moveCounter == 1) {
        charSet[1] = 'X';
    }
    else if (movesArray1[1] == 2 && moveCounter == 2) {
        charSet[1] = 'O';
    }
    else if(movesArray1[2] == 3 && moveCounter == 1) {
        charSet[2] = 'X';
    }
    else if (movesArray1[2] == 3 && moveCounter == 2) {
        charSet[2] = 'O';
    }
    else if(movesArray1[3] == 4 && moveCounter == 1) {
        charSet[3] = 'X';
    }
    else if (movesArray1[3] == 4 && moveCounter == 2) {
        charSet[3] = 'O';
    }
    else if(movesArray1[4] == 5 && moveCounter == 1) {
        charSet[4] = 'X';
    }
    else if (movesArray1[4] == 5 && moveCounter == 2) {
        charSet[4] = 'O';
    }
    else if(movesArray1[5] == 6 && moveCounter == 1) {
        charSet[5] = 'X';
    }
    else if (movesArray1[5] == 6 && moveCounter == 2) {
        charSet[5] = 'O';
    }
    else if(movesArray1[6] == 7 && moveCounter == 1) {
        charSet[6] = 'X';
    }
    else if (movesArray1[6] == 7 && moveCounter == 2) {
        charSet[6] = 'O';
    }
    else if(movesArray1[7] == 8 && moveCounter == 1) {
        charSet[7] = 'X';
    }
    else if (movesArray1[7] == 8 && moveCounter == 2) {
        charSet[7] = 'O';
    }
    else if(movesArray1[8] == 9 && moveCounter == 1) {
        charSet[8] = 'X';
    }
    else if (movesArray1[8] == 9 && moveCounter == 2) {
        charSet[8] = 'O';
    }
    
    // this single if statement containes all the possible winning combinations for tictactoe. If there is a winning combo, winner = 1
    // depending on whos turn it is, which is evaluated by playermove, the given player will be crowned winner
    if ((charSet[0] == 'X' && charSet[1] == 'X' && charSet[2] == 'X') || 
        (charSet[3] == 'X' && charSet[4] == 'X' && charSet[5] == 'X') || 
        (charSet[6] == 'X' && charSet[7] == 'X' && charSet[8] == 'X') || 
        (charSet[2] == 'X' && charSet[5] == 'X' && charSet[8] == 'X') || 
        (charSet[1] == 'X' && charSet[4] == 'X' && charSet[7] == 'X') || 
        (charSet[0] == 'X' && charSet[3] == 'X' && charSet[6] == 'X') || 
        (charSet[0] == 'X' && charSet[4] == 'X' && charSet[8] == 'X') || 
        (charSet[2] == 'X' && charSet[4] == 'X' && charSet[6] == 'X') ||
        (charSet[0] == 'O' && charSet[1] == 'O' && charSet[2] == 'O') || 
        (charSet[3] == 'O' && charSet[4] == 'O' && charSet[5] == 'O') || 
        (charSet[6] == 'O' && charSet[7] == 'O' && charSet[8] == 'O') || 
        (charSet[2] == 'O' && charSet[5] == 'O' && charSet[8] == 'O') || 
        (charSet[1] == 'O' && charSet[4] == 'O' && charSet[7] == 'O') || 
        (charSet[0] == 'O' && charSet[3] == 'O' && charSet[6] == 'O') || 
        (charSet[0] == 'O' && charSet[4] == 'O' && charSet[8] == 'O') || 
        (charSet[2] == 'O' && charSet[4] == 'O' && charSet[6] == 'O')) {
            winner = 1;
        }

    // this series of print statements write/display the current board containing all moves based on the permanent data store charSet
    printf("\n\n\n\t\t\t  |\t|\n\t\t       %c  |  %c\t|  %c\n\t\t\t  |\t|\n", charSet[0], charSet[1], charSet[2]);
    printf("\t\t    -------------------\n");
    printf("\t\t\t  |\t|\n\t\t       %c  |  %c\t|  %c\n\t\t\t  |\t|\n", charSet[3], charSet[4], charSet[5]);
    printf("\t\t    -------------------\n");
    printf("\t\t\t  |\t|\n\t\t       %c  |  %c\t|  %c\n\t\t\t  |\t|\n", charSet[6], charSet[7], charSet[8]);
    
    return 0;
}

// this function controls the flow of the game and references printboard for determining a winning combination and printing the current board
int playermove()
{
    int playerMove = 0; // this variable stores the specific box where the current player will place their symbol
    int moveCounter = 1; // counts the current move going on in the game
    
    printf("\n\n\t\t        Tic Tac Toe\n\n\t    Player 1 (X)\t  Player 2 (O)");
    printboard(playerMove, moveCounter); // this function displays the board
    
    
    for (int counter = 0; counter <= 4; counter++) {
        printf("\n\n\n\nIt's your move Player 1:  ");
        scanf("%d", &playerMove);
        system("clear");
        printf("\n\n\t\t        Tic Tac Toe\n\n\t    Player 1 (X)\t  Player 2 (O)");
        printboard(playerMove, moveCounter);
        
        // if there is a winner at this point in the code, based on moveCounter, player 1 wins
        if (winner == 1) {
            printf("\n\nCONGRATULATIONS PLAYER 1! YOU WON!\n\n\n");
            return 0;
        }
        
        // the counter determines if the maximum amount of moves has been made, if so, it's a tie
        if (counter == 4) {
            printf("\n\nRIP... IT's a TIE\n\n\n");
            return 0;
        }
        
        printf("\n\n\n\nIt's your move Player 2:  ");
        moveCounter = 2; // setting it so that it's player 2's turn
        scanf("%d", &playerMove);
        system("clear");
        printf("\n\n\t\t        Tic Tac Toe\n\n\t    Player 1 (X)\t  Player 2 (O)");
        printboard(playerMove, moveCounter);
        if (winner == 1) {
            printf("\n\nCONGRATULATIONS PLAYER 2! YOU WON!\n\n\n");
            return 0;
        }
        moveCounter = 1;
    }
    return 0;
}