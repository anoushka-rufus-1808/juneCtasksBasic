//Write a C program to add two float numbers and print the result.
#include <stdio.h>  // Include standard input-output header file

int main() {
    float num1, num2, sum;  // Declare float variables to store two numbers and their sum

    // Ask the user to input the first float number
    printf("Enter the first float number: ");
    scanf("%f", &num1);  // Read the first float number from user

    // Ask the user to input the second float number
    printf("Enter the second float number: ");
    scanf("%f", &num2);  // Read the second float number from user

    // Add the two numbers
    sum = num1 + num2;

    // Print the result
    printf("The sum of %.2f and %.2f is %.2f\n", num1, num2, sum);

    return 0;  // Indicate that the program ended successfully
}