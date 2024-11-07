#include <stdio.h>
#include <math.h> 

int main() {
    float x, result;

    printf("Enter the value of x (fractional value): ");
    scanf("%f", &x);

    result = 1 - (x / 2) + (pow(x, 2) / 4) - (pow(x, 3) / 6);

    printf("The result of the expression is: %.2f\n", result);

    return 0;
}
