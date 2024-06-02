#include <stdio.h>
/*
Author: Perengrine
Purpose: Find all prime numbers within a given range
*/
int main() {
    int counter_min = 0;
    int counter_max = 0;

    printf("Welcome to prime finder! \nWhat is the minimum value of your range?: ");
    scanf("%d", &counter_min);
    printf("What is the maximum value of your range?: ");
    scanf("%d", &counter_max);
    printf("You inputted your range as: %d to %d. If this is not correct, restart the program.\n", counter_min, counter_max);
    printf("Your prime numbers are: ");

    int current_dividend = counter_min;
    int array_max = counter_max * 0.25;
    int prime_array[array_max];
    int array_index = 0;

    while (current_dividend <= counter_max) {
        int no_remainder = 0; // Reset the remainder counter for each number

        // Check divisors from 1 to current_dividend
        for (int current_divisor = 1; current_divisor <= current_dividend; current_divisor++) {
            if (current_dividend % current_divisor == 0) {
                no_remainder += 1;
            }
        }

        // Print the number only if it has exactly two divisors
        if (no_remainder == 2) {
            prime_array[array_index] = current_dividend;
            printf("%d ", prime_array[array_index]);
            array_index += 1;
        }

        current_dividend++;
    }

    return 0;
}