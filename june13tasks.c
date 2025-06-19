#include <stdio.h>

// 1. Function with parameters and return value
// Adds two numbers and returns the result
int add(int a, int b) {
    return a + b;
}

// 2. Function with parameters and no return value
// Prints a greeting with the user's name
void greet(char name[]) {
    printf("Hello, %s! Welcome!\n", name);
}

// 3. Function with no parameters and return value
// Returns a fixed integer value
int getNumber() {
    int num = 10;
    return num;
}

// 4. Function with no parameters and no return value
// Simply prints a goodbye message
void sayGoodbye() {
    printf("Goodbye! See you again.\n");
}

int main() {
    // Calling function with parameters and return value
    int x = 5, y = 7;
    int sum = add(x, y);
    printf("1. Sum of %d and %d is: %d\n", x, y, sum);

    // Calling function with parameters and no return value
    char username[] = "Anoushka";
    printf("2. Greeting:\n");
    greet(username);

    // Calling function with no parameters but return value
    int number = getNumber();
    printf("3. Returned number is: %d\n", number);

    // Calling function with no parameters and no return value
    printf("4. Saying goodbye:\n");
    sayGoodbye();

    return 0;
}
