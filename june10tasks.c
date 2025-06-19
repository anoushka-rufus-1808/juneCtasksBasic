#include <stdio.h>

int main() {
    int m, n, i, j;
    int a[3][3];  // Max size is 3x3 for both examples

    // Part 1: User Input 2D Array
    printf("Enter number of rows and columns (max 3x3):\n");
    scanf("%d%d", &m, &n);

    if (m > 3 || n > 3 || m < 1 || n < 1) {
        printf("Invalid size. Please enter values between 1 and 3.\n");
        return 1;
    }

    printf("Enter array elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("User-entered array elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Part 2: Pre-initialized Array
    int arr[3][2] = { { 0, 1 }, { 2, 3 }, { 4, 5 } };

    printf("\nPre-initialized array elements with indices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("arr[%d][%d]: %d    ", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
