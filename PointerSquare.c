#include <stdio.h>

/*
Author: Perengrine
Purpose: create a function that squars a number by itself, 
 * the function should have an int pointer as a parameter
*/

int square();

int main ()
{
    int a = 0;
    printf("Enter a number to square:\n");
    scanf("%d", &a);
    printf("\n\n Your number squared is: %d\n\n\n", square(&a));
    return 0;
}

int square (int* pnumber)
{
    *pnumber = ((*pnumber)*(*pnumber));
    return *pnumber;
}