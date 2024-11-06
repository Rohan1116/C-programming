#include <stdio.h>
#include <math.h> 

int isPrime(int n) {
    if (n <= 1) {
        return 0;  
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;  
        }
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

/*
Enter a number: 7
7 is a prime number.
*/

