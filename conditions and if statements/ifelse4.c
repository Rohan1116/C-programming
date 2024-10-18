#include <stdio.h>

int main() {
    int number, i, Prime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 1) {
        Prime = 0;
    } else {
        for (i = 2; i <= number / 2; ++i) {
            if (number % i == 0) {
                Prime = 0;
                break;
            }
        }
    }

    if (Prime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is a composite number.\n", number);
    }

    return 0;
}
