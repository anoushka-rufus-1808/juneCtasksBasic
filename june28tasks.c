#include <stdio.h>

int main() {
    FILE *fptr;
    char tline[100];

    // Open the file in read mode
    fptr = fopen("sillyfile.txt", "r");

    // Check if file opened successfully
    if (fptr == NULL) {
        printf("Error opening file 'sillyfile.txt'\n");
        return 1;
    }

    // Read and print lines until EOF
    while (fgets(tline, sizeof(tline), fptr) != NULL) {
        printf("%s", tline);
    }

    // Close the file
    fclose(fptr);

    return 0;
}
