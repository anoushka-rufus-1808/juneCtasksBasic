#include <stdio.h>

// Function to swap two numbers using call by reference
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function to print Fibonacci series up to n terms
void fibonacci(int n) {
    int a = 0, b = 1, next, i;

    if (n <= 0) {
        printf("Invalid input. n should be > 0\n");
        return;
    }

    printf("Fibonacci series (%d terms):\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int choice;

    printf("Select an option:\n");
    printf("1. Swap two numbers\n");
    printf("2. Generate Fibonacci series\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        int a, b;
        printf("\nEnter two numbers to swap:\n");
        scanf("%d %d", &a, &b);

        printf("Before swapping: a = %d, b = %d\n", a, b);
        swap(&a, &b);
        printf("After swapping:  a = %d, b = %d\n", a, b);

    } else if (choice == 2) {
        int n;
        printf("\nEnter the number of terms for Fibonacci series:\n");
        scanf("%d", &n);
        fibonacci(n);

    } else {
        printf("\nInvalid choice.\n");
    }

    return 0;
}
