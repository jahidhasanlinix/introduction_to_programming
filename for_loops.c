/*
For loop is used to iterate a block of code a specific number of times.

Expression 1: Init counter variable
Expression 2: Condition to check
Expression 3: Increment/Decrement

Syntax:
        for (expression 1; expression 2; expression 3) {
        // code block to be executed
        }
*/

#include <stdio.h>

int main()
{
    // Example 1: Print numbers from 0 to 9
    for (int i =0; i < 10; i++) {
        printf("%d \n", i);
    }




    // Example 2: Sum of 1 to 100 (1+2+3+...+100)
    // int sum = 0;
    // for (int i =1; i <= 100; i++) {
    //     sum = sum + i; // sum += i;
    // }
    // printf("Sum = %d \n", sum);





    // Example 3: Sum of even numbers from 0 to 100
    // int sum = 0;
    // for (int i =2; i <= 100; i=i+2) {
    //     sum = sum + i;
    // }
    // printf("Sum of even numbers = %d \n", sum);




    // Example 4: Nested for loop
    // int i, j;
  
    // // Outer loop
    // for (i = 1; i <= 2; ++i) {
    //     printf("Outer: %d\n", i);  // Executes 2 times
        
    //     // Inner loop
    //     for (j = 1; j <= 3; ++j) {
    //     printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
    //     }
    // }




    // Example 5: countdown
    // for (int i = 10; i >= 0; i--) {
    //     printf("%d \n", i);
    // }

    return 0;
}