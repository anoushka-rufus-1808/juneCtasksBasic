#include <stdio.h>
#include <stdlib.h>  // Needed for exit()

int main() {
    int i, n, low, high, mid, a[50], key;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    printf("Enter the elements (sorted in ascending order):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the key element to be searched:\n");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (key == a[mid]) {
            printf("Successful search: Element found at index %d\n", mid);
            return 0;
        }
        if (key < a[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("Unsuccessful search: Element not found.\n");
    return 0;
}
