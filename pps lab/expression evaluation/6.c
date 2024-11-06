#include <stdio.h>

int Prime(int number)
{
    if (number <= 1) return 0;     
    if (number <= 3) return 1;     
    if (number % 2 == 0 || number % 3 == 0) return 0;

    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) return 0;
    } 
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (Prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
