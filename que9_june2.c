//Write a C program to calculate the average of three float numbers.
#include <stdio.h>

int main() {
    float num1, num2, num3, average;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%f", &num1);

    // Prompt the user to enter the second number
    printf("\n Enter the second number: ");
    scanf("%f", &num2);

    // Prompt the user to enter the third number
    printf("\n Enter the third number: ");
    scanf("%f", &num3);

    // Calculate the average of the three numbers
    average = (num1 + num2 + num3) / 3;

    // Display the average with two decimal places
    printf("\n Average = %.2f\n", average);

    return 0;
}
