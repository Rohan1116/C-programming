#include<stdio.h>

int main() {
    int a, b, d;
    
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    
    printf("Enter the second number (b): ");
    scanf("%d", &b);
    
    // Calculating the product
    d = a * b;
    
    printf("Product of the two numbers is: %d\n", d);
    
    return 0;
}
