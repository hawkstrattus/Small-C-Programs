#include <stdio.h>

/*
 * Author: Perengrine
 * Purpose: Input 2 ints from the user, perform bitwise operations, and print the results
*/

long long int decimalToBinary(long long int);

int main() 
{
    // intializing variables to hold numbers
    long long int num1 = 0;
    long long int num2 = 0;
    int shiftFactor = 0;
    
    // asking for numbers
    printf("Enter your first number: \n");
    scanf("%Ld", &num1);
    printf("\nYour first number in binary is:\n%lld", decimalToBinary(num1));
    printf("\nEnter your second number: \n");
    scanf("%Ld", &num2);
     printf("\nYour first number in binary is:\n%lld", decimalToBinary(num2));
    printf("\nFor bit shifting, what would you like your Shift Factor to be (shifting is performed on your first number)?:\n");
    scanf("%d", &shiftFactor);
    
    // performing bitwise operations
    long long int anding = decimalToBinary(num1 & num2);
    long long int oring = decimalToBinary(num1 | num2);
    long long int xoring = decimalToBinary(num1 ^ num2);
    long long int leftShift = decimalToBinary(num1 << shiftFactor);
    long long int rightShift = decimalToBinary(num1 >> shiftFactor);
    
    // printing results
    printf("\n&: %lld", anding);
    printf("\n|: %lld", oring);
    printf("\n^: %lld", xoring);
    printf("\n<<: %lld", leftShift);
    printf("\n>>: %lld", rightShift);
    printf("\n~num1: %lld", ~num1);
    printf("\n~num2: %lld", ~num2);
    
    return 0;
}

long long int decimalToBinary(long long int userNum)
{
    long long int binaryNum = 0;
    long long int remainder, i=1;
    
    // Formula
    while (userNum != 0)
    {
        remainder = userNum % 2;
        userNum = userNum / 2;
        binaryNum += remainder * i;
        i = i * 10;
    }
    return binaryNum;
}