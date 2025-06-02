/* Write a C program to calculate simple interest using the formula: SI = (P × R × T) / 100, where P is principal, R is rate, and T is time. */
#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    /* 
       Asking user for input values:
       - principal (P)
       - rate of interest (R)
       - time period (T)
    */
    printf("Enter the principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (R): ");
    scanf("%f", &rate);

    printf("Enter the time period in years (T): ");
    scanf("%f", &time);

    // Calculating Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Displaying the result
    printf("Simple Interest = %.2f\n", simpleInterest);   //%.2f means print 2 digits after decimal for this float number

    return 0;
}
