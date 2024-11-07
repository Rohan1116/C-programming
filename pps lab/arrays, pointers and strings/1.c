#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int min = arr[0];
    int max = arr[0];
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
    }
    
    float average = (float)sum / n; 
    
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", average);
    
    return 0;
}
/*Enter the number of elements: 5
Enter the elements of the array:
1
2
3
4
5
Minimum value: 1
Maximum value: 5
Average value: 3.00*/