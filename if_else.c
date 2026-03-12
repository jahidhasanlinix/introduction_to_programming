/*
If-else statement is used to execute a block of code if a condition is true, otherwise execute another block of code.

Syntax:
        if (condition1) {
        // block of code to be executed if condition1 is true
        } else if (condition2) {
        // block of code to be executed if condition1 is false and condition2 is true
        } else {
        // block of code to be executed if both conditions are false
        }
*/

#include <stdio.h>

int main()
{
    // Example 1: If statement
    // int number = 10;
    // if (number > 5)
    // {
    //     printf("Number is greater than 5");
    // }

    // Example 1.1: Find even or odd numbers
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Even number \n");
    }
    // if n is not even then:
    // if (n % 2 != 0)
    // {
    //     printf("Odd number \n");
    // }
    // alternate
    // else {
    //     printf("Odd number \n");
    // }

    // Try on your own: Take any positive integer input and check if it si divisible by 5 or not?? If yes then print "Divisible by 5" else print "Not divisible by 5"





    // Example 2: Voting age check
    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age);
    // if (age >= 18)
    // {
    //     printf("Yay! You can vote \n");
    // }
    // else
    // {
    //     printf("Oh no! You cannot vote \n");
    // }





    // Example 3: Voting age check with multiple conditions
    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age);
    // if (age >= 18 )
    // {
    //     printf("Yay! You can vote \n");
    // }
    // else if (age == 0 )
    // {
    //     printf("Oh no! You are not born yet \n");
    // }
    // else if (age < 6)
    // {
    //     printf("Oh no! You are a child \n");
    // }
    // else
    // {
    //     printf("Oh no! You cannot vote \n");
    // }





    // example 4: Try build a grade scoring calculator and multiple conditions using OR (II)
    // int score; 
    // char grade; 
    // printf("Enter your score: ");
    // scanf("%d", &score); 
    // if (score < 0 || score > 100)
    // {
    //     printf("Invalid score \n");
    //     return 1;
    // }
    // if (score >= 90) grade = 'A';
    // else if (score >= 80) grade = 'B';
    // else if (score >= 70) grade = 'C';
    // else if (score >= 60) grade = 'D';
    // else grade = 'F';
    // printf("Your final grade is: %c \n", grade);

    return 0;
}