#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    long long int a = 0, b = 1;

    if (n <= 0) {
        printf("Please enter a positive integer for the number of terms.\n");
    } else if (n == 1) {
        printf("Fibonacci sequence up to %d term: 0\n", n);
    } else {
        printf("Fibonacci sequence up to %d terms: \n", n);

        printf("%lld ", a);
        printf("%lld ", b);
        for (int i = 3; i <= n; i++) {
            long long int nextTerm = a + b;
            printf("%lld ", nextTerm);
            a = b;
            b = nextTerm;
        }
        printf("\n");
    }

    return 0;
}

/*Output:-
Enter the number of terms: 8
Fibonacci sequence up to 8 terms: 
0 1 1 2 3 5 8 13 */
