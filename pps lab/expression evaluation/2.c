#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    int result;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    
    printf("Enter second integer: ");
    scanf("%d", &num2);
    
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {  
                result = num1 / num2;
                printf("Result: %d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) { 
                result = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
            break;
    }

    return 0;
}

/*Output:-
Enter first integer: 4
Enter second integer: 3
Enter an operator (+, -, *, /, %): /
Result: 4 / 3 = 1
*/

