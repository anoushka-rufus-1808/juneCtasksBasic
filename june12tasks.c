#include <stdio.h>
#include <string.h>

int main() {
    char sec;
    char str1[100], str2[100], str3[100];

    // Section Input
    printf("Enter your section (single character):\n");
    // Clear buffer before reading single character
    while ((getchar()) != '\n');  // flush newline if needed
    sec = getchar();
    printf("Your section is: ");
    putchar(sec);
    printf("\n\n");

    // String Input
    printf("Enter a string for string operations:\n");
    scanf("%s", str1);  // reads string without spaces

    // strlen() - String Length
    printf("1. Length of the string \"%s\" is: %lu\n", str1, strlen(str1));

    // strrev() - Reverse (works in Turbo C, not in modern GCC by default)
    // Simulate reverse manually
    int len = strlen(str1);
    char reversed[100];
    for (int i = 0; i < len; i++) {
        reversed[i] = str1[len - 1 - i];
    }
    reversed[len] = '\0';
    printf("2. Reversed string: %s\n", reversed);

    // strcpy() - Copy
    strcpy(str2, str1);
    printf("3. Copied string into str2: %s\n", str2);

    // strcat() - Concatenate
    printf("Enter another string to concatenate with \"%s\":\n", str1);
    scanf("%s", str3);
    strcat(str1, str3);
    printf("4. Concatenated string: %s\n", str1);

    // strcmp() - Compare
    printf("5. Comparing copied string \"%s\" with concatenated string \"%s\":\n", str2, str1);
    if (strcmp(str2, str1) == 0)
        printf("   Strings are equal.\n");
    else
        printf("   Strings are not equal.\n");

    return 0;
}
