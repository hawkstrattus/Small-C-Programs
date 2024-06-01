#include <stdio.h>
#include <stdlib.h>

/*
Author: Perengrine
Purpose: input text string with scanf or gets
 * Need to add error handling
*/

int display_String();

int main ()
{
    //calling function
    display_String();
    
    return 0;
    
}

int display_String()
{
    //asking for number of characters, storing it in var, and allocating memory
    int byte_Size = 0;
    printf("How many characters?: ");
    scanf("%d", &byte_Size);
    char* puser_String = (char*) malloc(byte_Size * sizeof(char));
    
    // to clear the stdin buffer, removes the new line character
    // while ((getchar()) != '\n');
    
    // if there is space allocated
    if (puser_String != NULL)
    {
        printf("\nWhat would you like your string to be?:\n");
        // scanf so gets can be used
        scanf(" ");
        gets(puser_String);
    }
    
    // printing string
    printf("\nYour string was:\n");
    printf("%s", puser_String);
    
    // freeing memory allocated to prevent memory leak
    free(puser_String);
    // setting our string to null to prevent dangling pointer
    puser_String = NULL;
    
    return 0;
}