#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 3

// Function to check and display student marks using dynamic memory
void dynamicStudentMarks() {
    int no, *pt, i;
    printf("\nEnter number of students: ");
    scanf("%d", &no);

    pt = (int *)malloc(no * sizeof(int));
    if (pt == NULL) {
        printf("Memory allocation failed!\n");
        exit(0);
    }

    printf("\nEnter marks for each student:\n");
    for (i = 0; i < no; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", pt + i);
    }

    printf("\nEntered marks:\n");
    for (i = 0; i < no; i++) {
        printf("Student %d: %d\n", i + 1, *(pt + i));
    }

    free(pt);
}

// Function to find and display prime numbers up to a limit
void findPrimes(int limit) {
    int *primes = malloc(limit * sizeof(int));
    int count = 0, num = 2, isPrime, i;

    while (num <= limit) {
        isPrime = 1;
        for (i = 0; i < count; i++) {
            if (num % primes[i] == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            primes[count++] = num;
        }
        num++;
    }

    printf("\nPrime numbers up to %d:\n", limit);
    for (i = 0; i < count; i++) {
        printf("%d ", *(primes + i));
    }
    printf("\n");
    free(primes);
}

// Function to find the largest element using dynamic memory and pointers
void findLargest() {
    int n, i, *ptr;
    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        exit(0);
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    int max = *ptr;
    for (i = 1; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    printf("Largest element: %d\n", max);
    free(ptr);
}

// Function to sum two arrays using dynamic memory and pointer arithmetic
void sumArrays() {
    int n, i;
    int *a, *b, *sum;

    printf("\nEnter number of elements in each array: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));
    b = (int *)malloc(n * sizeof(int));
    sum = (int *)malloc(n * sizeof(int));

    if (a == NULL || b == NULL || sum == NULL) {
        printf("Memory allocation failed!\n");
        exit(0);
    }

    printf("Enter elements for array A:\n");
    for (i = 0; i < n; i++) scanf("%d", a + i);

    printf("Enter elements for array B:\n");
    for (i = 0; i < n; i++) scanf("%d", b + i);

    for (i = 0; i < n; i++) *(sum + i) = *(a + i) + *(b + i);

    printf("Sum of arrays:\n");
    for (i = 0; i < n; i++) printf("%d ", *(sum + i));
    printf("\n");

    free(a); free(b); free(sum);
}

int main() {
    // Array of pointers example 1
    int var[] = {10, 100, 200};
    int *ptr1[MAX];
    for (int i = 0; i < MAX; i++) ptr1[i] = &var[i];
    for (int i = 0; i < MAX; i++) printf("Value of var[%d] = %d\n", i, *ptr1[i]);

    // Array of pointers example 2
    int arr[3] = {1, 2, 3};
    int *ptr2[3];
    for (int i = 0; i < 3; i++) ptr2[i] = arr + i;
    for (int i = 0; i < 3; i++) printf("%p %d\n", ptr2[i], *ptr2[i]);

    // Roman numeral converter using arrays of strings
    int decimal_number = 101, a = 0, b = 0;
    const char *x[11] = {"", "x", "xx", "xxx", "xl", "l", "lx", "lxx", "lxxx", "xc", "c"};
    const char *y[10] = {"", "i", "ii", "iii", "iv", "v", "vi", "vii", "viii", "ix"};
    while ((decimal_number > 100) || (decimal_number < 0)) {
        printf("Enter the decimal numbers in the range 1 to 100:\n");
        scanf("%d", &decimal_number);
    }
    a = decimal_number / 10;
    b = decimal_number % 10;
    printf("The equivalent roman is %s%s\n", x[a], y[b]);

    // Dynamic memory and pointer tasks
    dynamicStudentMarks();
    findPrimes(50);
    findLargest();
    sumArrays();

    return 0;
}
