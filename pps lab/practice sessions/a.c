#include <stdio.h>

int main() {
    int a, b;

    // Read two operands from the user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Arithmetic Operators
    printf("\nArithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Relational Operators
    printf("\nRelational Operators:\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical Operators
    printf("\nLogical Operators:\n");
    printf("a && b: %d\n", a && b);
    printf("a || b: %d\n", a || b);
    printf("!a: %d\n", !a);

    // Bitwise Operators
    printf("\nBitwise Operators:\n");
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("~a: %d\n", ~a);
    printf("a << 1: %d\n", a << 1);
    printf("a >> 1: %d\n", a >> 1);

    // Assignment Operators
    printf("\nAssignment Operators:\n");
    printf("a += b: %d\n", a += b); // a = a + b
    a -= b; // Reset a to its original value
    printf("a -= b: %d\n", a -= b); // a = a - b
    a += b; // Reset a to its original value
    printf("a *= b: %d\n", a *= b); // a = a * b
    a /= b; // Reset a to its original value
    printf("a /= b: %d\n", a /= b); // a = a / b
    printf("a %%= b: %d\n", a %= b); // a = a % b

    // Pre and Post Increment/Decrement Operators
    printf("\nPre and Post Increment/Decrement Operators:\n");
    printf("a++: %d\n", a++);
    printf("++a: %d\n", ++a);
    printf("a--: %d\n", a--);
    printf("--a: %d\n", --a);

    return 0;
}
/*
Arithmetic Operators:
a + b = 9
a - b = 1
a * b = 20
a / b = 1
a % b = 1

Relational Operators:
a == b: 0
a != b: 1
a > b: 1
a < b: 0
a >= b: 1
a <= b: 0

Logical Operators:
a && b: 1
a || b: 1
!a: 0

Bitwise Operators:
a & b: 4
a | b: 5
a ^ b: 1
~a: -6
a << 1: 10
a >> 1: 2

Assignment Operators:
a += b: 9
a -= b: 1
a *= b: 20
a /= b: 1
a %= b: 1

Pre and Post Increment/Decrement Operators:
a++: 1
++a: 3
a--: 3
--a: 1*/