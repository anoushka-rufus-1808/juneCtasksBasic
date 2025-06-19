#include <stdio.h>

int main() {
    // 1. Fahrenheit to Celsius (int result using type casting)
    float fahrenheit = 98.6;
    int celsius = (int)((fahrenheit - 32) * 5 / 9);
    printf("1. Fahrenheit to Celsius: %d°C\n", celsius);

    // 2. Integer Division with Float Result
    int a = 7, b = 2;
    float result = (float)a / b;
    printf("2. Integer Division as Float: %.2f\n", result);

    // 3. Implicit vs Explicit Casting
    int i = 10;
    float f = 5.5;
    float sum1 = i + f;             // Implicit casting
    float sum2 = (float)i + f;      // Explicit casting
    printf("3. Implicit Casting Sum: %.2f, Explicit Casting Sum: %.2f\n", sum1, sum2);

    // 4. Character to ASCII Conversion
    char ch = 'A';
    int ascii = (int)ch;
    printf("4. ASCII of '%c' is: %d\n", ch, ascii);

    // 5. Float Salary to Integer
    float salary = 45678.89;
    int reported_salary = (int)salary;
    printf("5. Reported Salary: ₹%d\n", reported_salary);

    // 6. Average Marks as Float
    int m1 = 85, m2 = 90, m3 = 95;
    float avg = (float)(m1 + m2 + m3) / 3;
    printf("6. Average Marks: %.2f\n", avg);

    // 7. Double to Int Conversion (Precision loss)
    double d = 123.987654;
    int d_to_int = (int)d;
    printf("7. Double to Int: %d (Precision lost from %.6f)\n", d_to_int, d);

    // 8. Weight Conversion for Packaging
    float weight = 23.9;
    int packaged_weight = (int)weight;
    printf("8. Packaged Weight: %d kg (rounded down)\n", packaged_weight);

    // 9. Mixed-Type Billing Calculation
    int rupees = 50;
    float paise = 75.5;
    float total_price = rupees + (paise / 100);
    printf("9. Total Price: ₹%.2f\n", total_price);

    // 10. Compare Results With and Without Casting
    int num1 = 5, num2 = 2;
    int int_div = num1 / num2;
    float float_div = (float)num1 / num2;
    printf("10. Integer Division: %d, Float Division: %.2f\n", int_div, float_div);

    return 0;
}