#include<stdio.h>

int main() {
    int a, b, d;
    
    // Asking the user to input the values of a and b
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    
    printf("Enter the second number (b): ");
    scanf("%d", &b);
    
    // Calculating the difference
    d = a - b;
    
    // Printing the result
    printf("Difference of the two numbers is: %d\n", d);
    
    return 0;
}
