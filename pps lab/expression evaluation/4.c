#include <stdio.h>

int main() {
    int num, original_num, digit, sum = 0, reversed_num = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    original_num = num;

    while (num > 0) {
        digit = num % 10; 
        sum += digit;     
        num /= 10;         
    }

    num = original_num;  
    while (num > 0) {
        remainder = num % 10;           
        reversed_num = reversed_num * 10 + remainder;  
        num /= 10;                    
    }

    printf("Sum of digits: %d\n", sum);

    if (original_num == reversed_num) {
        printf("%d is a palindrome.\n", original_num);
    } else {
        printf("%d is not a palindrome.\n", original_num);
    }

    return 0;
}

/*Output:-
Enter a positive integer: 98723
Sum of digits: 29
98723 is not a palindrome.*/
