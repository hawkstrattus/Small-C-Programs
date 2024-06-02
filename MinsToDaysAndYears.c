#include <stdio.h>
/*
Author: Perengrine
Purpose: Convert minutes to days and years
*/

int main()
{
    // Intializes minutes
    double mins;
    
    // Gets input in minutes
    printf("How many minutes do you want converted?: ");
    scanf("%lf", &mins);
    
    // Intializes formula for conversion
    double days = mins / 1440;
    double years = days / 365;
    
    // Prints the mins, days, and years
    printf("%lf minutes is %lf days and %lf years", mins, days, years);
    
}