#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", ptr + i);  
    }

    for (int i = 0; i < n; i++) {
        sum += *(ptr + i); 
    }
    printf("\nThe sum of the elements is: %d\n", sum);

    return 0;
}

/*Enter the number of elements: 3
Enter 3 elements:
Enter element 1: 1
Enter element 2: 2
Enter element 3: 3

The sum of the elements is: 6*/