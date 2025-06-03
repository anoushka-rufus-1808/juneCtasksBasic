//Write a C program to swap the values of two variables using a temporary variable.
#include <stdio.h> // Header file for input and output functions

int main() {
    int a, b, temp; // Declare three integer variables

    // Ask the user to enter values for 'a' and 'b'
    printf("Enter the value of a: ");
    scanf("%d", &a); // Read the value of 'a' from the user

    printf("Enter the value of b: ");
    scanf("%d", &b); // Read the value of 'b' from the user

    // Display values before swapping
    printf("\nBefore swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swapping process using a temporary variable
    temp = a;  // Store the value of 'a' in 'temp'
    a = b;     // Copy the value of 'b' into 'a'
    b = temp;  // Copy the original value of 'a' from 'temp' into 'b'

    // Display values after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0; // End of the program
}