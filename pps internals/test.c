#include <stdio.h> 
int main() { 
    int i, j, n; 
    printf("Enter number of rows:\n"); 
    scanf("%d", &n); 
    printf("The pattern is:\n"); 
    for (i = 1; i <= n; i++) { 
        for (j = 1; j <= i; j++) { 
            printf("%d", j); 
        } 
        printf("\n"); 
    } 
    return 0; 
}