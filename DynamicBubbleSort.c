#include <stdio.h>
#include <string.h>

/*
Author: Perengrine
Purpose: a program that bubble sorts (just moving the bigger element to the right) using strcmp and strncpy. Input 3 strings
*/

void bubblesrt();

int main() 
{
    bubblesrt();
}

void bubblesrt()
{
    // creating my arrays
    int string_Number = 0;
    char input[25][50];
    char temp_hold[50];
    
    printf("How many strings would you like to sort? (Max 25): ");
    scanf("%d", &string_Number);
    printf("\nNumber of Strings: %d", string_Number);
    
    for (int i = 0; i < string_Number; i++) {
        printf("\nEnter String %d:\n", i);
        scanf("%s", input[i]);
    }
    
    // try using sizeof instead of strlen
    for (int i = 0; i < string_Number; i ++) {
        for (int j = 0; j < string_Number; j++) {
            if (strcmp(input[j], input[j + 1]) != 0) {
                if (strlen(input[j]) > strlen(input[j + 1])) {
                    strncpy(temp_hold, input[j + 1], 50);
                    strncpy(input[j + 1], input[j], 50);
                    strncpy(input[j], temp_hold, 50);
                }
            }
        }
    }
    
    //displaying the sorted characters
    for (int i = 0; i < string_Number; i++) {
        printf("\nThe Bubble Sorted Strings Are:\n");
        printf("\n%s", input[i]);
    }
    
}