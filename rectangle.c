#include <stdio.h>
/*
Author: Perengrine
Purpose: area of rectangle
 */
int main()
{
    //Settings variables and formulas
    double width;
    double height;
    
    //Prompting and grabbing data
    printf("What is the width you'd like: ");
    scanf("%lf", &width);
    printf("What is the height you'd like: ");
    scanf("%lf", &height);
    
    //Setting formulas for calculations
    double perimeter = (height + width) * 2;
    double area = width * height;
    
    //Printing output
    printf("The width is %lf and the height is %lf\n", width, height);
    printf("The perimeter is %lf and the area is %lf\n", perimeter, area);
    return 0;
}

