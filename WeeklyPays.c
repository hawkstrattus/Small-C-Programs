#include <stdio.h>
/*
Author: Perengrine
Purpose: Gross, Tax, And Net Pay Calculator (weekly pay). Input Hours of week you work and your hourly pay rate
*/

int main() 
{
    //Variable intialization
    double hours;
    double pay;
    double weeklytax;
    double overtimehours;
    
     //Asking for and collecting input of hours and pay rate
    printf("How many hours do you work this week?: ");
    scanf("%lf", &hours);
    printf("What is your hourly pay rate?: ");
    scanf("%lf", &pay);
    
    //Calculation for overtime hours
    if (hours > 40)
    {
        overtimehours = hours - 40;
        printf("Your overtime is %lf hours", overtimehours);
    } else {
        printf("You've worked no overtime this week");
    }
    
    //Initializing weeklygross with formula
    double weeklygross = (hours * pay) + (overtimehours * (pay * 1.5));
    
    //Formula for weeklytax
    if (weeklygross <= 300) {
        weeklytax = weeklygross * 0.15;
    } else if (weeklygross > 300 && weeklygross <= 450) {
        weeklytax = ((weeklygross - 300) * 0.20) + 45;
    } else if (weeklygross > 450) {
        weeklytax = (weeklygross - 450) * 0.25;
    } else {
        printf("Something broke I guess");
    }
    
    //Initializing weeklynet with formula
    double weeklynet = weeklygross - weeklytax;
    
    //Printing final results
    printf("\nYou worked %lf hours with a %lf per hour pay rate, making %lf before taxes and %lf after taxes, paying %lf in taxes\n", hours, pay, weeklygross, weeklynet, weeklytax);
}