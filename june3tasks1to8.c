//task1
//Write a C program to demonstrate arithmetic operators (+, -, *, /, %).
#include<stdio.h>
int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("\n Enter the second number: ");
    scanf("%d", &b);
    printf("\n Addition: %d + %d = %d", a, b, a + b);
    printf("\n Subtraction: %d - %d = %d", a, b, a - b);
    printf("\n Multiplication: %d * %d = %d", a, b, a*b);
    printf("\n Division: %d / %d = %d", a, b, a/b);
    printf("\n Modulus: %d %% %d = %d", a, b, a %b);
}

//task2
//Write a C program to demonstrate relational operators (>, <, ==, !=, >=, <=).
#include<stdio.h>
int main()
{
 int a,b;                         //initializing 2 numbers as a and b
 printf("enter a\n");           //prompting user to enter their values
 scanf("%d",&a);             //storing their values
 printf("enter b\n");           //prompting user to enter their values
 scanf("%d",&b);             //storing their values
 printf("%d < %d = %d \n", a, b, a < b );    //comparing a and b using less than (<) operator and returns 1 if true and 0 if not
 printf("%d <= %d = %d \n", a, b, a <= b );  //comparing a and b using less than or equal to (<=) operator and returns 1 if true and 0 if not
 printf("%d > %d = %d \n", a, b, a > b );    //comparing a and b using greater than (>) operator and returns 1 if true and 0 if not
 printf("%d >= %d = %d \n", a, b, a >= b );  //comparing a and b using greater than or equal to (>=) operator and returns 1 if true and 0 if not
 printf("%d == %d = %d \n", a, b, a== b );  //comparing whether a and b are equal using == (relational equal to operator) and returns 1 if true and 0 if not
 printf("%d != %d = %d \n", a, b, a!= b );  //checking is a is not equal to b
}

//task3
//Write a C program to demonstrate logical operators (&&, ||, !)
#include<stdio.h>
int main(){
    int a, b;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("\n enter second number: ");
    scanf("%d", &b);
    printf("%d && %d is %d \n", a, b, a && b);  // logical AND which is && returns true (1) if both values are non zero
    printf("%d || %d is %d \n", a, b, a||b);    // logical OR which is || returns true (1) if either of the values is non zero
    printf("!%d is %d \n", a, !a);      // logical NOT which is ! returns true (1) if the value is zero
    printf("!%d is %d \n", b, !b);      // logical NOT which is ! returns true (1) if the value is zero
}

//task4
//Write a C program to demonstrate bitwise operators (&, |, ^, ~, <<, >>)
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("%d & %d is %d \n", a, b, a & b);   // bitwise AND: if both bits are 1 → result 1
    printf("%d | %d is %d \n", a, b, a | b);   // bitwise OR: if either bits are 1 → result 1
    printf("%d ^ %d is %d \n", a, b, a ^ b);   // bitwise XOR: if bits are different → result 1
    printf("~%d is %d \n", a, ~a);             // bitwise NOT: flips all bits (also ~x=-(1+x))
    printf("%d << 1 is %d \n", a, a << 1);     // left shift by 1: multiplies by 2                       (generally x<<n is x*(2^n))
    printf("%d >> 1 is %d \n", a, a >> 1);     // right shift by 1: divides by 2 (for positive numbers)  (generally x>>n is x/(2^n))

    return 0;
}

//task5
//Write a C program to demonstrate compound assignment operators (+=, -=, *=, /=, %=)
#include<stdio.h>
int main(){
    int a, b;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("\nenter second number: ");
    scanf("%d", &b);

    // adds b to a and assigns the result to a
    a += b;    //  a=a+b
    printf("After a += b, a = %d\n", a);

    // subtracts b from a and assigns the result to a
    a -= b;   //  a=a-b
    printf("After a -= b, a = %d\n", a);

    // multiplies a by b and assigns the result to a
    a *= b;    //  a=a*b
    printf("After a *= b, a = %d\n", a);

    //since dividing by 0 will give error, we check if denominator (which is b in this case) is 0
    if(b != 0) {
        // divides a by b and assigns the result to a
        a /= b;   // a=a/b
        printf("After a /= b, a = %d\n", a);

        // assigns remainder of a / b to a
        a %= b;  //  a=a%b
        printf("After a %%= b, a = %d\n", a);
    } else {
        printf("Cannot perform /= or %%= operations as divisor is 0.\n");
    }

    return 0;
}

//task6
//Write a C program to demonstrate increment and decrement operators (++ and --)
#include<stdio.h>
int main(){
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Original value of a: %d\n", a);

    // Post-increment: value of a is assigned to b, then a is incremented
    b = a++;
    printf("After b = a++ -> b = %d, a = %d\n", b, a);

    // Pre-increment: a is incremented first, then assigned to b
    b = ++a;
    printf("After b = ++a -> b = %d, a = %d\n", b, a);

    // Post-decrement: value of a is assigned to b, then a is decremented
    b = a--;
    printf("After b = a-- -> b = %d, a = %d\n", b, a);

    // Pre-decrement: a is decremented first, then assigned to b
    b = --a;
    printf("After b = --a -> b = %d, a = %d\n", b, a);

    return 0;
}

//task7
//Write a C program to find the maximum of two numbers using the ternary operator
#include<stdio.h>
int main(){
    int a, b, max;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    //how does ternary operator work?
    //syntax-> (condition) ? (if true then do this):(if false then do this)
    max = (a > b) ? a : b;
    //if a is greater than b then max will be a otherwise max will be b
    printf("The maximum number out of %d and %d is %d\n", a, b, max);

    return 0;
}

//task8
//Write a C program to display the size of various data types using the sizeof operator
#include<stdio.h>
int main(){
    printf("Size of int: %lu bytes\n", sizeof(int));      
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu byte\n", sizeof(char));
    printf("Size of short: %lu bytes\n", sizeof(short));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of long long: %lu bytes\n", sizeof(long long));
    printf("Size of unsigned int: %lu bytes\n", sizeof(unsigned int));
    printf("Size of long double: %lu bytes\n", sizeof(long double));
    //we use %lu (unsigned long int datatype) to display sizeof value because it matches return type of sizeof()
    return 0;
}
