//Write a C program to display the ASCII value of a character.
#include <stdio.h>  // Preprocessor directive to include standard input/output functions

int main() {
    char ch;  // Variable to store the character input by the user

    // Ask the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);  // Read the character input and store it in variable 'ch'

    // Display the ASCII value of the character
    // %d is used to print the integer (ASCII) value of the character
    printf("The ASCII value of '%c' is %d\n", ch, ch);

    return 0;  // Indicate that the program ended successfully
}
