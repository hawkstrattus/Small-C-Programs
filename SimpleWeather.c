#include <stdio.h>
#include <stdlib.h>

#define MONTHS 13
#define YEARS 6
/*
Author: Perengrine
Purpose: Using a 2D array, for the past five years, calculate the total rainfall for that year, the average yearly rainfall,
and the average rainfall for each month
*/

int main ()
{
    
    //initializing 2d array of rainfall
    float rainfall[YEARS][MONTHS] = {
    { 2018, 2.95, 2.40, 2.17, 3.60, 9.23, 6.50, 8.00, 7.61, 4.91, 2.12, 3.15, 7.18 },
    { 2019, 3.98, 1.98, 1.94, 3.12, 3.41, 7.99, 7.53, 8.79, 1.73, 5.16, 1.83, 4.64 },
    { 2020, 1.57, 3.48, 0.53, 4.31, 5.25, 7.19, 7.99, 7.92, 9.30, 4.26, 3.85, 2.33 },
    { 2021, 1.79, 4.12, 1.74, 4.55, 1.53, 8.48, 8.85, 8.75, 7.07, 3.90, 2.87, 1.72 },
    { 2022, 2.27, 1.19, 5.42, 3.27, 4.63, 6.70, 7.48, 7.05, 9.52, 1.38, 3.76, 1.94 }
    };
    
    float total_averages[4];

    //initializing yearly average variable
    float yearly_average = 0;
    float five_year_average = 0;

    //nested loop. for every row in rainfall, each collumn will increment by one and add the value to the yearly_average
    for (int row = 0; row <= 4; row++) {
        printf("In %.0f the average rainfall for each month was: \n", rainfall[row][0]);
        printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
        for (int column = 1; column <= 12; column++) {
           yearly_average += rainfall[row][column];
           printf("%.2f ", rainfall[row][column]);
        }
        
        //the prinf prints the year for each row and the yearly average after the inside for loop finishes adding to yearly average
        printf("\n\nThe average rainfall for %.0f is %.2f\n\n", rainfall[row][0], yearly_average);
        total_averages[row] = yearly_average;
        five_year_average += total_averages[row];
        //yearly average is reset to 0 before the next row/year begins
        yearly_average = 0;
        
    }
    printf("The average rainfall over the past 5 years is: %f", five_year_average / 5); 
    
}