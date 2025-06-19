#include <stdio.h>

int main() {
    // ----- PART 1: Print addresses and values -----
    int a = 10;
    float b = 2.5, c = 12.36;
    double d = 123443.66;
    char ch = 'A';

    printf("---- Part 1: Variable values and addresses ----\n");
    printf("a = %d is stored at location %p\n", a, (void*)&a);
    printf("b = %.2f is stored at location %p\n", b, (void*)&b);
    printf("c = %.2f is stored at location %p\n", c, (void*)&c);
    printf("d = %.2lf is stored at location %p\n", d, (void*)&d);
    printf("ch = %c is stored at location %p\n\n", ch, (void*)&ch);

    // ----- PART 2: Expressions using pointer -----
    int x, y, c2 = 5;
    int *p;

    x = 4 * (c2 + 5);   // x = 4 * 10 = 40
    p = &c2;            // pointer to c2
    y = 4 * (*p + 5);   // y = 4 * (5 + 5) = 40

    printf("---- Part 2: Expression values ----\n");
    printf("x = %d, y = %d\n\n", x, y);

    // ----- PART 3: Pointer dereferencing and memory address -----
    int m, n;
    int *ptr;

    m = 10;
    ptr = &m;
    n = *ptr;

    printf("---- Part 3: Pointer and address demonstrations ----\n");
    printf("m = %d is stored at %p\n", m, (void*)&m);
    printf("*&m = %d is stored at %p\n", *&m, (void*)&m);
    printf("*ptr = %d is stored at %p\n", *ptr, (void*)ptr);
    printf("n = %d is stored at %p\n", n, (void*)&n);
    printf("ptr (address of m) = %p is stored at %p\n", (void*)ptr, (void*)&ptr);

    // Changing value using pointer
    *ptr = 25;
    printf("\nNow m = %d after *ptr = 25\n", m);

    return 0;
}
