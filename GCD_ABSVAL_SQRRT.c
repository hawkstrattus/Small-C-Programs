#include <stdio.h>
#include <math.h>
/*
Author: Perengrine
Purpose: 3 functions. 1. greatest common denominator. 2. absolute values. 3. square roots
*/

int gcd(int var1, int var2);
float absval(float var1);
float sqrrt(float var1);

int main()
{
    printf("%d\n", gcd(300, 400));
    printf("%f\n", absval(-300.4));
    printf("%f\n", sqrrt(16));
}

//Greatest Common Denominator function
int gcd(int var1, int var2)
{
    //initializing variables
    int tempvar = var1;
    int gcdresult = 0;
    
    //making sure var1 is highest number for loop
    if (var2 < var1) {
        var1 = var2;
        var2 = tempvar;
    }
    
    //main loop that computes gdc
    for (int i = 1; i <= var1; i++) {
        if ((var1 % i == 0) && (var2 % i == 0)) {
            gcdresult = i;
        }

    }
    //returning the result
    return gcdresult;
}

float absval(float var1)
{
    // turns negative number into positive
    if (var1 < 0) {
        var1 = -var1;
    }
    return var1;
}

float sqrrt(float var1) 
{
    const float epsilon = .00001;
    float guess = 1.0;
    float returnValue = -1.0;
    if (var1 < 0) {
        printf("negative argument to sqrrt.\n");
        return -1.0;
    }
    
    else {
        while (absval(guess * guess - var1) >= epsilon) {
        guess = (var1 / guess + guess) / 2.0;
        returnValue = guess;
        }
    }
    return returnValue;
}