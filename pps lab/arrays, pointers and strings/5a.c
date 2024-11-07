#include <stdio.h>

// Recursive function to calculate factorial
int factorialRecursive(int n) {
    if (n <= 1) return 1;
    return n * factorialRecursive(n - 1);
}

// Non-recursive (iterative) function to calculate factorial
int factorialIterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;

    printf("Enter a number to calculate factorial: ");
    scanf("%d", &n);

    printf("Factorial of %d (recursive): %d\n", n, factorialRecursive(n));
    printf("Factorial of %d (iterative): %d\n", n, factorialIterative(n));

    return 0;
}


/*Enter a number to calculate factorial: 5
Factorial of 5 (recursive): 120
Factorial of 5 (iterative): 120*/