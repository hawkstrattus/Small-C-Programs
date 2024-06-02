#include <stdio.h>
#include <string.h>

/*
Author: Perengrine
Purpose: a program that reads a string input from keyboard, then displays it in reverse order, needs to use the strlen function
*/

//Declaring function up here so can be called anywhere in the program
void strrev();


int main() 
{
    //calling our function
    strrev();
}

void strrev() 
{
    //creating my array for input and then one for the reverse
    char input_Array[50];
    char reverse_Array[50];
    
    //grabbing input
    printf("Write the string you would like reversed below:\n");
    scanf("%s", input_Array);
    
    //putting strlen as a variable, removes some weird output
    long unsigned input_Length = strlen(input_Array);
    
    //loop that assignes charcaters in reverse order to reverse_Array. -1 is important for the null character. otherwise
    //it starts with the null character and dispplays nothing
    for(int i = 0; input_Array[i] != '\0'; i++) {
        reverse_Array[i] = input_Array[input_Length - i - 1];
    }
    printf("%s", reverse_Array);
}