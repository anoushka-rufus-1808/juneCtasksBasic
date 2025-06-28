#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    FILE *fptr;
    char filename[] = "file2.dat";

    // --- File creation example ---
    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        fprintf(stderr, "ERROR IN FILE CREATION\n");
        exit(1);
    } else {
        fprintf(fptr, "This file was created successfully.\n");
        fclose(fptr);
    }

    // --- Standard input/output with fprintf/fscanf ---
    int i;
    fprintf(stdout, "Give value of i: ");
    fscanf(stdin, "%d", &i);
    fprintf(stdout, "Value of i = %d\n", i);
    fprintf(stderr, "No error: Just an example to show error message.\n");

    // --- Echo input using getchar/putchar ---
    int c;
    printf("\nType text and press return to see it again\n");
    printf("For exiting press <CTRL + D> (Linux/Mac) or <CTRL + Z> (Windows)\n");
    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    // --- Command line file copy example ---
    if (argc == 3) {
        FILE *ifp, *ofp;
        char src_file[100], dst_file[100];

        strcpy(src_file, argv[1]);
        strcpy(dst_file, argv[2]);

        if ((ifp = fopen(src_file, "r")) == NULL) {
            printf("Source file does not exist.\n");
            exit(1);
        }

        if ((ofp = fopen(dst_file, "w")) == NULL) {
            printf("Destination file not created.\n");
            fclose(ifp);
            exit(1);
        }

        while ((c = fgetc(ifp)) != EOF) {
            fputc(c, ofp);
        }

        fclose(ifp);
        fclose(ofp);
        printf("\nFile copied successfully from '%s' to '%s'.\n", src_file, dst_file);
    } else {
        printf("\nCommand line file copy not executed. Usage: ./a.out <src_file> <dst_file>\n");
    }

    return 0;
}
