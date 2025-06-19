#include <stdio.h>

int main() {
    int i, n, a[10], sum = 0, big;

    // Step 1: Input and display array elements
    printf("Enter number of array elements (max 10):\n");
    scanf("%d", &n);

    if (n > 10 || n < 1) {
        printf("Invalid number of elements. Please enter between 1 and 10.\n");
        return 1;
    }

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nArray elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Step 2: Sum of array elements
    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    printf("Sum of array elements: %d\n", sum);

    // Step 3: Find the biggest element
    big = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > big)
            big = a[i];
    }
    printf("Biggest element in array: %d\n", big);

    // Step 4: Fibonacci Series
    int fib[10];
    fib[0] = 0;
    fib[1] = 1;

    printf("Fibonacci series (first %d terms):\n", n);
    if (n == 1) {
        printf("%d\n", fib[0]);
    } else if (n >= 2) {
        printf("%d %d ", fib[0], fib[1]);
        for (i = 2; i < n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
            printf("%d ", fib[i]);
        }
        printf("\n");
    }

    return 0;
}