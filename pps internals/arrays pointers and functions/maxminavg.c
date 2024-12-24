#include <stdio.h>
    int MinMaxAvg(int arr[], int limit, int *min, int *max, float *avg){
        *min = arr[0];
        *max = arr[0];
        int sum = 0;

        for (int i=0; i<limit; i++){
            if (arr[i]<*min){
                *min = arr [i];
            }
            if (arr[i] > *max){
                *max = arr[i];
            }
            sum += arr[i];
        }
        *avg = (float)sum/limit;
    }

int main(){
    int n;
    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the %d integers: \n", n);
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int min,max;
    float avg;
    MinMaxAvg(arr, n, &min, &max, &avg);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %f\n", avg);

    return 0;
}