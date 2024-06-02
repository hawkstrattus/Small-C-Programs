#include <stdio.h>
#include <math.h>
/*
 Author: Perengrine
 Purpose: To convert binary to decimal and decimal to binary
*/
long long binaryToDecimal();
long long decimalToBinary();


int main()
{
    int decision = 0;
    long long userNum = 0;
    printf("Do you wish to convert binary to decimal or decimal to binary?\nEnter 1 for for binary to decimal or 2 for decimal to binary\n");
    scanf("%d", &decision);
    
    if (decision == 1)
    {
        printf("\nYou chose binary to decimal\nEnter your value below:\n");
        scanf("%lld", &userNum);
        long long result = binaryToDecimal(userNum);
        printf("%lld is the equivalant to %lld in decimal", userNum, result);
    }
    else if (decision == 2)
    {
        printf("\nYou chose decimal to binary\nEnter your value below:\n");
        scanf("%lld", &userNum);
        long long result = decimalToBinary(userNum);
        printf("%lld is the equivalant to %lld in binary", userNum, result);
    }
    else
    {
        printf("Input Error");
    }
    
    return 0;
}

long long binaryToDecimal(userNum)
{
    long long decimalNum = 0, i = 0, remainder = 0;
    
    while (userNum != 0)
    {
        // tells us what the last digit is, the remained will either be 1 or 0
        remainder = userNum % 10;
        // removes the last number
        userNum = userNum / 10;
        decimalNum += remainder*pow(2, i);
        ++i;
    }
    return decimalNum;
}

long long decimalToBinary(userNum)
{
    long long binaryNum = 0;
    long long remainder, i=1;
    
    while (userNum != 0)
    {
        remainder = userNum % 2;
        userNum = userNum / 2;
        binaryNum += remainder * i;
        i = i * 10;
    }
    return binaryNum;
}