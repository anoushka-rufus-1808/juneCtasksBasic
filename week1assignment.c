#include <stdio.h>

int main() {
    // 1. Print name, roll number, and branch
    printf("----- 1. Name, Roll No, Branch -----\n");
    printf("Name: Anoushka Rufus\n");
    printf("Roll Number: 23CSE1808\n");
    printf("Branch: Computer Science and Engineering\n\n");

    // 2. Sum of two numbers
    printf("----- 2. Sum of Two Numbers -----\n");
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum = %d\n\n", num1 + num2);

    // 3. Check if number is positive, negative or zero
    printf("----- 3. Positive, Negative or Zero -----\n");
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0)
        printf("The number is positive.\n\n");
    else if (number < 0)
        printf("The number is negative.\n\n");
    else
        printf("The number is zero.\n\n");

    // 4. Greatest of two numbers using if-else
    printf("----- 4. Greatest of Two Numbers -----\n");
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d is greater.\n\n", a);
    else if (b > a)
        printf("%d is greater.\n\n", b);
    else
        printf("Both numbers are equal.\n\n");

    // 5. Switch-case for day of the week
    printf("----- 5. Day of the Week -----\n");
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    switch (day) {
        case 1: printf("Monday\n\n"); break;
        case 2: printf("Tuesday\n\n"); break;
        case 3: printf("Wednesday\n\n"); break;
        case 4: printf("Thursday\n\n"); break;
        case 5: printf("Friday\n\n"); break;
        case 6: printf("Saturday\n\n"); break;
        case 7: printf("Sunday\n\n"); break;
        default: printf("Invalid day number!\n\n");
    }

    // 6. Check voting eligibility
    printf("----- 6. Voting Eligibility -----\n");
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("You are eligible to vote.\n\n");
    else
        printf("You are not eligible to vote.\n\n");

    // 7. Difference between '=' and '=='
    printf("----- 7. Difference between '=' and '==' -----\n");
    printf("'=' is an assignment operator: a = 5 assigns 5 to a\n");
    printf("'==' is a comparison operator: (a == 5) checks if a is equal to 5\n");

    int x = 5;
    if (x == 5)
        printf("x == 5 is true (comparison using ==)\n");
    else
        printf("x == 5 is false\n");

    return 0;
}