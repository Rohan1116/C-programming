#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", ptr + i); 
    }

    printf("\nThe entered elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, *(ptr + i));
    }

    return 0;
}

/*Enter the number of elements: 3
Enter 3 elements:
Enter element 1: 1
Enter element 2: 2
Enter element 3: 3

The entered elements are:
Element 1: 1
Element 2: 2
Element 3: 3*/