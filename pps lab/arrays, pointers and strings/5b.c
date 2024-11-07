#include <stdio.h>

// Recursive function to calculate GCD using Euclidean algorithm
int gcdRecursive(int a, int b) {
    if (b == 0) return a;
    return gcdRecursive(b, a % b);
}

// Non-recursive (iterative) function to calculate GCD using Euclidean algorithm
int gcdIterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    printf("Enter two integers to find their GCD: ");
    scanf("%d %d", &a, &b);

    printf("GCD of %d and %d (recursive): %d\n", a, b, gcdRecursive(a, b));
    printf("GCD of %d and %d (iterative): %d\n", a, b, gcdIterative(a, b));

    return 0;
}


/*Enter two integers to find their GCD: 4 6
GCD of 4 and 6 (recursive): 2
GCD of 4 and 6 (iterative): 2*/