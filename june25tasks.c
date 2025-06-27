#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // --- Example 1: Dynamic string manipulation using realloc ---
    char name[100] = "Anoushka Rufus";
    char *description = malloc(200 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
        return 1;
    }
    strcpy(description, "Anoushka Rufus is a BIT, Durg student. ");

    // Reallocating to store bigger description
    description = realloc(description, 300 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to reallocate memory\n");
        return 1;
    } else {
        strcat(description, "She is in 3rd year.");
    }
    printf("Name = %s\n", name);
    printf("Description: %s\n", description);
    free(description);

    // --- Example 2: Pointer arithmetic for int and double types ---
    int n;
    int *pn = &n;
    int *pn1 = pn + 1;
    printf("\nInteger pointer arithmetic:\n");
    printf("Address of pn: %p\n", (void *)pn);
    printf("Address of pn1: %p\n", (void *)pn1);

    double d;
    double *pd = &d;
    double *pd1 = pd + 1;
    printf("\nDouble pointer arithmetic:\n");
    printf("Address of pd: %p\n", (void *)pd);
    printf("Address of pd1: %p\n", (void *)pd1);

    // --- Example 3: Pointer increment simulation ---
    int *ptr = (int *)1000;
    printf("\nPointer increment simulation:\n");
    printf("Old value of ptr: %p\n", (void *)ptr);
    ptr = ptr + 1;
    printf("New value of ptr: %p\n", (void *)ptr);

    // --- Example 4: Pointer subtraction ---
    float *ptr1 = (float *)1000;
    float *ptr2 = (float *)2000;
    printf("\nPointer subtraction (float *):\n");
    printf("Difference: %ld\n", ptr2 - ptr1);

    // --- Example 5: Accessing array using different notations ---
    int b[] = {10, 20, 30, 40};
    int *bPtr = b;
    int i, offset;

    printf("\nArray b printed with array subscript notation:\n");
    for (i = 0; i < 4; i++) {
        printf("b[%d] = %d\n", i, b[i]);
    }

    printf("\nPointer/offset notation where pointer is array name:\n");
    for (offset = 0; offset < 4; offset++) {
        printf("*(b + %d) = %d\n", offset, *(b + offset));
    }

    return 0;
}
