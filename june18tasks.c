#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. What is a pointer in C? Simple example.
void pointer_basics() {
    printf("\n--- 1. What is a pointer in C? ---\n");
    int a = 10;
    int *p = &a;  // p stores the address of a
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value stored at pointer p: %d\n", *p);  // Dereferencing pointer
}

// 2. Swap two numbers using pointers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_demo() {
    printf("\n--- 2. Swap two numbers using pointers ---\n");
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
}

// 3. Dynamic memory allocation using malloc()
void malloc_demo() {
    printf("\n--- 3. Dynamic array using malloc() ---\n");
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated!\n");
        return;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("You entered: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    free(arr);  // Free allocated memory
}

// 4. Output of basic pointer code
void pointer_output() {
    printf("\n--- 4. Pointer Output Demo ---\n");
    int a = 10;
    int *p = &a;
    printf("Output of *p where a = 10: %d\n", *p);  // Prints 10
}

// 5. Pointer to a pointer
void pointer_to_pointer() {
    printf("\n--- 5. Pointer to a pointer ---\n");
    int a = 20;
    int *p = &a;
    int **pp = &p;  // Pointer to pointer

    printf("Value of a: %d\n", a);
    printf("Value via *p: %d\n", *p);
    printf("Value via **pp: %d\n", **pp);
}

// 6. Reverse an array using pointers
void reverse_array(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverse_demo() {
    printf("\n--- 6. Reverse array using pointers ---\n");
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverse_array(arr, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}

// 7. Pass pointer to function
void doubleValue(int *n) {
    *n = (*n) * 2;
}

void pointer_to_function_demo() {
    printf("\n--- 7. Pass pointer to a function ---\n");
    int num = 15;
    printf("Before: %d\n", num);
    doubleValue(&num);
    printf("After: %d\n", num);
}

// 8. Read string and print each character using pointer arithmetic
void string_char_pointer() {
    printf("\n--- 8. Print string using pointer arithmetic ---\n");
    char str[100];
    printf("Enter a string: ");
    getchar(); // Clear newline left from previous input
    fgets(str, sizeof(str), stdin);

    char *ptr = str;
    while (*ptr != '\0') {
        printf("%c\n", *ptr);
        ptr++;
    }
}

// 9. Find string length using pointer (no indexing)
void string_length_pointer() {
    printf("\n--- 9. String length using pointer ---\n");
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char *ptr = str;
    int len = 0;
    while (*ptr != '\0' && *ptr != '\n') {
        len++;
        ptr++;
    }
    printf("Length of string: %d\n", len);
}

// 10. Array of pointers to strings
void array_of_pointers_demo() {
    printf("\n--- 10. Array of pointers to strings ---\n");
    const char *names[] = {"Alice", "Bob", "Charlie", "Daisy"};
    int n = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < n; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }
}

int main() {
    pointer_basics();
    swap_demo();
    malloc_demo();
    pointer_output();
    pointer_to_pointer();
    reverse_demo();
    pointer_to_function_demo();
    string_char_pointer();
    string_length_pointer();
    array_of_pointers_demo();

    return 0;
}
