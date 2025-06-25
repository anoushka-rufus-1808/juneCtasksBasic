#include <stdio.h>
#include <string.h>

// Structure for student address
typedef struct {
    char address[30];
    char city[20];
    int zipcode;
} student_address;

// Structure for student
struct student {
    int id;
    char name[20];
    char grade;
    student_address addr;
};

void printStudent(struct student stud) {
    printf("\n-- Student Details --\n");
    printf("ID: %d\n", stud.id);
    printf("Name: %s\n", stud.name);
    printf("Grade: %c\n", stud.grade);
    printf("Address: %s, %s - %d\n", stud.addr.address, stud.addr.city, stud.addr.zipcode);
}

// Structure for complex numbers
typedef struct {
    double realpart;
    double imaginarypart;
} complex;

complex addcomp(complex a, complex b) {
    complex result;
    result.realpart = a.realpart + b.realpart;
    result.imaginarypart = a.imaginarypart + b.imaginarypart;
    return result;
}

complex subcomp(complex a, complex b) {
    complex result;
    result.realpart = a.realpart - b.realpart;
    result.imaginarypart = a.imaginarypart - b.imaginarypart;
    return result;
}

// Structure for customer name
typedef struct {
    char first_name[20];
    char last_name[20];
} customer_name;

// Structure for bank customer
typedef struct {
    int account_number;
    char account_type[20];
    customer_name account_holder_name;
    double balance;
} bank_customer;

int main() {
    // Bank Customers
    bank_customer bank_customers[5];

    // Customer 1
    bank_customers[0].account_number = 1001;
    strcpy(bank_customers[0].account_type, "Checking");
    strcpy(bank_customers[0].account_holder_name.first_name, "John");
    strcpy(bank_customers[0].account_holder_name.last_name, "Paul");
    bank_customers[0].balance = 2100.50;

    // Customer 2
    bank_customers[1].account_number = 1002;
    strcpy(bank_customers[1].account_type, "Checking");
    strcpy(bank_customers[1].account_holder_name.first_name, "Mary");
    strcpy(bank_customers[1].account_holder_name.last_name, "Paul");
    bank_customers[1].balance = 30100.50;

    // Default for others
    for (int i = 2; i < 5; ++i) {
        bank_customers[i].account_number = 0;
        strcpy(bank_customers[i].account_type, "N/A");
        strcpy(bank_customers[i].account_holder_name.first_name, "N/A");
        strcpy(bank_customers[i].account_holder_name.last_name, "N/A");
        bank_customers[i].balance = 0.0;
    }

    printf("\n-- Bank Customer Records --\n");
    for (int i = 0; i < 5; ++i) {
        printf("\nAccount Number: %d\n", bank_customers[i].account_number);
        printf("Account Type: %s\n", bank_customers[i].account_type);
        printf("Account Holder First Name: %s\n", bank_customers[i].account_holder_name.first_name);
        printf("Account Holder Last Name: %s\n", bank_customers[i].account_holder_name.last_name);
        printf("Balance: %.2lf\n", bank_customers[i].balance);
        printf("-----------------------------\n");
    }

    // Student Example
    struct student astud;
    astud.id = 9401;
    strcpy(astud.name, "Joe");
    astud.grade = 'A';
    strcpy(astud.addr.address, "123 Main Street");
    strcpy(astud.addr.city, "New York");
    astud.addr.zipcode = 10001;
    printStudent(astud);

    // Complex Number Operations
    complex c1, c2, c3;
    c1.realpart = 2.3;
    c1.imaginarypart = 2.3;
    c2.realpart = 2.3;
    c2.imaginarypart = 2.3;

    c3 = addcomp(c1, c2);
    printf("\nAddition: %.2lf + %.2lfi\n", c3.realpart, c3.imaginarypart);

    c3 = subcomp(c1, c2);
    printf("Subtraction: %.2lf + %.2lfi\n", c3.realpart, c3.imaginarypart);

    return 0;
}
