#include <stdio.h>

// Recursive function to calculate x^n
int powerRecursive(int x, int n) {
    if (n == 0) return 1;
    return x * powerRecursive(x, n - 1);
}

// Non-recursive (iterative) function to calculate x^n
int powerIterative(int x, int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, n;

    printf("Enter base (x) and exponent (n) to calculate x^n: ");
    scanf("%d %d", &x, &n);

    printf("%d raised to the power of %d (recursive): %d\n", x, n, powerRecursive(x, n));
    printf("%d raised to the power of %d (iterative): %d\n", x, n, powerIterative(x, n));

    return 0;
}

/*Enter base (x) and exponent (n) to calculate x^n: 5 2
5 raised to the power of 2 (recursive): 25
5 raised to the power of 2 (iterative): 25*/