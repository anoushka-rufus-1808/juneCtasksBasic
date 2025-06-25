#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n1, n2, i, *ptr, sum = 0;
    char name[100];
    char *description;

    // ---------- Malloc Example ----------
    printf("[1] Malloc - Enter number of elements: ");
    scanf("%d", &n1);
    ptr = (int *)malloc(n1 * sizeof(int));
    if (ptr == NULL) {
        printf("Error! memory not allocated.\n");
        exit(0);
    }
    printf("Enter elements: ");
    for (i = 0; i < n1; ++i) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum using malloc = %d\n", sum);
    free(ptr);

    // ---------- Calloc Example ----------
    sum = 0;
    printf("\n[2] Calloc - Enter number of elements: ");
    scanf("%d", &n1);
    ptr = (int *)calloc(n1, sizeof(int));
    if (ptr == NULL) {
        printf("Error! memory not allocated.\n");
        exit(0);
    }
    printf("Enter elements: ");
    for (i = 0; i < n1; ++i) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum using calloc = %d\n", sum);
    free(ptr);

    // ---------- Realloc Example ----------
    printf("\n[3] Realloc - Enter initial size: ");
    scanf("%d", &n1);
    ptr = (int *)malloc(n1 * sizeof(int));
    printf("Initial memory addresses: ");
    for (i = 0; i < n1; ++i)
        printf("%p\t", (void *)(ptr + i));
    printf("\nEnter new size: ");
    scanf("%d", &n2);
    ptr = (int *)realloc(ptr, n2 * sizeof(int));
    printf("New memory addresses: ");
    for (i = 0; i < n2; ++i)
        printf("%p\t", (void *)(ptr + i));
    printf("\n");
    free(ptr);

    // ---------- Dynamic Memory for String ----------
    printf("\n[4] Dynamic Memory for String\n");
    strcpy(name, "Anoushka");
    description = malloc(200 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(description, "Zara Ali is a DPS student in class 10th.");
        printf("Name = %s\n", name);
        printf("Description = %s\n", description);
        free(description);
    }

    return 0;
}
