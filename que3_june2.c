//Write a C program to display the size (in bytes) of int, float, double, and char data types.
#include <stdio.h>  // Include standard input-output header file

int main() {
    // Display the size of int data type
    printf("Size of int: %lu bytes\n", sizeof(int));

    // Display the size of float data type
    printf("Size of float: %lu bytes\n", sizeof(float));

    // Display the size of double data type
    printf("Size of double: %lu bytes\n", sizeof(double));

    // Display the size of char data type
    printf("Size of char: %lu bytes\n", sizeof(char));

    return 0; // Indicate that the program ended successfully
}
