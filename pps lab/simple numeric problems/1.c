#include <stdio.h>

int main() {
    // Variable declarations
    int num1, num2, num3;
    int max, min;
    
    // Input: Take three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Find maximum
    max = num1;  // Assume num1 is the max initially
    if (num2 > max) {
        max = num2;  // If num2 is greater, update max
    }
    if (num3 > max) {
        max = num3;  // If num3 is greater, update max
    }
    
    // Find minimum
    min = num1;  // Assume num1 is the min initially
    if (num2 < min) {
        min = num2;  // If num2 is smaller, update min
    }
    if (num3 < min) {
        min = num3;  // If num3 is smaller, update min
    }
    
    // Output: Display the maximum and minimum values
    printf("The maximum value is: %d\n", max);
    printf("The minimum value is: %d\n", min);
    
    return 0;
}
