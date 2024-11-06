#include <stdio.h>

int main() {
    // Variable declarations
    int intInput;
    float floatInput;
    char charInput;
    
    // Taking input for integer
    printf("Enter an integer: ");
    scanf("%d", &intInput);
    
    // Implicit conversion (auto conversion): int to float
    float resultFloat = intInput;  // Implicit conversion from int to float
    
    // Output the result of implicit conversion
    printf("Implicit conversion (int to float): %.2f\n", resultFloat);
    
    // Taking input for character
    printf("Enter a character: ");
    scanf(" %c", &charInput);  // Note the space before %c to consume any leftover newline character
    
    // Explicit casting: char to int
    int resultCharToInt = (int)charInput;  // Explicit casting from char to int
    
    // Output the result of explicit casting
    printf("Explicit conversion (char to int): %d\n", resultCharToInt);

    // Taking input for float value
    printf("Enter a float: ");
    scanf("%f", &floatInput);
    
    // Explicit casting: float to int
    int resultFloatToInt = (int)floatInput;  // Explicit casting from float to int
    
    // Output the result of explicit casting
    printf("Explicit conversion (float to int): %d\n", resultFloatToInt);
    
    return 0;
}
