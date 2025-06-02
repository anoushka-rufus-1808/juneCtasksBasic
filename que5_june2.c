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
*/

    // Display values after swapping
    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}
