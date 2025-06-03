//task1
//Write a C program to declare an integer variable, assign a value to it, and print the value.
#include <stdio.h>

int main() {
    int num;        // Declare an integer variable
    num = 10;       // Assign a value to the variable

    printf("The value of num is: %d\n", num); // Print the value

    return 0;
}

//task2
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

//task3
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

//task4
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

//task5
//Write a C program to swap two integer variables without using a temporary variable.
#include <stdio.h>

int main() {
    int a, b;

    // Input two integers from the user
    printf("Enter two integers:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    // Display values before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping without using a temporary variable
    a = a + b;  // Step 1: sum of a and b stored in a
    b = a - b;  // Step 2: (a + b) - b = a, so b becomes original a
    a = a - b;  // Step 3: (a + b) - a = b, so a becomes original b

/* Swapping using XOR (no temporary variable)
a = a ^ b;
b = a ^ b;
a = a ^ b; 

assume a=5, b=10, binary value of a=5 is 0101 and b is 1010
a => a ^ b => 0101 ^ 1010 = 1111 (XOR means 1 if either of the bits is 1)
b => a ^ b => 1010 ^ 1111 = 0101 (diff bit =1, same bit=0)
a => a ^ b => 0101 ^ 0101 = 0000 (XOR of same bits is 0)

*/

    // Display values after swapping
    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}

//task6
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

//task7
/* Write a C program to calculate simple interest using the formula: SI = (P × R × T) / 100, where P is principal, R is rate, and T is time. */
#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    /* 
       Asking user for input values:
       - principal (P)
       - rate of interest (R)
       - time period (T)
    */
    printf("Enter the principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (R): ");
    scanf("%f", &rate);

    printf("Enter the time period in years (T): ");
    scanf("%f", &time);

    // Calculating Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Displaying the result
    printf("Simple Interest = %.2f\n", simpleInterest);   //%.2f means print 2 digits after decimal for this float number

    return 0;
}

//task8
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

//task9
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