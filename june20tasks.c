#include <stdio.h>
#include <string.h>  // For using strcpy in struct part

// Function to find length of string using pointers
int myStrlen(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Function to copy string using pointers
void myStrcpy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Null-terminate destination
}

int main() {
    // --- Part 1: String Length and Copy ---
    char str[100], copied[100];

    printf("Enter a string: ");
    scanf("%s", str);  // Reads a word (no spaces)

    int len = myStrlen(str);
    printf("Length of the string: %d\n", len);

    myStrcpy(copied, str);
    printf("Copied string: %s\n", copied);

    // Flush input buffer before using fgets()
    getchar();

    // --- Part 2: Copy another string using fgets ---
    char source[100], dest[100];
    printf("\nEnter another string to copy: ");
    fgets(source, sizeof(source), stdin);  // Reads line including spaces

    myStrcpy(dest, source);
    printf("Copied string: %s", dest);

    // --- Part 3: Struct for Bank Customer Records ---
    printf("\n--- Bank Customer Details ---\n");

    typedef struct {
        int account_number;
        char account_type[20];
        char account_holder_name[40];
        double balance;
    } bank_customer;

    bank_customer bank_customers[5];

    // Assign values to first customer
    bank_customers[0].account_number = 1001;
    strcpy(bank_customers[0].account_type, "Checking");
    strcpy(bank_customers[0].account_holder_name, "John Paul");
    bank_customers[0].balance = 2100.50;

    // Default values for the rest
    for (int i = 1; i < 5; ++i) {
        bank_customers[i].account_number = 0;
        strcpy(bank_customers[i].account_type, "N/A");
        strcpy(bank_customers[i].account_holder_name, "N/A");
        bank_customers[i].balance = 0.0;
    }

    // Print all customers
    for (int i = 0; i < 5; ++i) {
        printf("\nCustomer %d:\n", i + 1);
        printf("Account Number: %d\n", bank_customers[i].account_number);
        printf("Account Type: %s\n", bank_customers[i].account_type);
        printf("Account Holder Name: %s\n", bank_customers[i].account_holder_name);
        printf("Balance: %.2lf\n", bank_customers[i].balance);
    }

    return 0;
}
