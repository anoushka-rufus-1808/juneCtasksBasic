//Write a C program to multiply two integers and display the result.
#include <stdio.h>

int main() {
    int num1, num2, product;

    // Ask the user to enter the first integer
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    // Ask the user to enter the second integer
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Multiply the two integers
    product = num1 * num2;

    // Display the result
    printf("Product of %d and %d is %d\n", num1, num2, product);

    return 0;
}
