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
