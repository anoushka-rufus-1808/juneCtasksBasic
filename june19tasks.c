#include <stdio.h>

// -------- 1. Find Maximum in Array using Pointers --------
void findMax() {
    int arr[100], n;
    int *ptr;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (ptr = arr; ptr < arr + n; ptr++) {
        scanf("%d", ptr);
    }

    int max = *arr;
    for (ptr = arr + 1; ptr < arr + n; ptr++) {
        if (*ptr > max) {
            max = *ptr;
        }
    }

    printf("Maximum number in the array: %d\n\n", max);
}

// -------- 2. Custom strcmp using Pointers --------
int myStrcmp(char *s1, char *s2) {
    while (*s1 && *s2) {
        if (*s1 != *s2) {
            return *s1 - *s2;
        }
        s1++;
        s2++;
    }
    return *s1 - *s2;  // Covers unequal length strings
}

void compareStrings() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    int result = myStrcmp(str1, str2);

    if (result == 0) {
        printf("Strings are equal.\n\n");
    } else {
        printf("Strings are not equal. Difference = %d\n\n", result);
    }
}

// -------- 3. 3x3 Matrix Using Pointer Arithmetic --------
void printMatrix() {
    int matrix[3][3];
    int *ptr = &matrix[0][0];

    printf("Enter 9 elements for 3x3 matrix:\n");
    for (int i = 0; i < 9; i++) {
        scanf("%d", ptr + i);
    }

    printf("Matrix elements:\n");
    for (int i = 0; i < 9; i++) {
        printf("%d ", *(ptr + i));
        if ((i + 1) % 3 == 0)
            printf("\n");
    }
    printf("\n");
}

// -------- Main Program --------
int main() {
    printf("------ Find Max in Array ------\n");
    findMax();

    printf("------ String Comparison ------\n");
    compareStrings();

    printf("------ 3x3 Matrix Printing ------\n");
    printMatrix();

    return 0;
}
