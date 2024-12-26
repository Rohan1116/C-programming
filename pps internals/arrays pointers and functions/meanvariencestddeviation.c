#include <stdio.h>
#include <math.h>

void computeStatistics(int arr[], int n, float *mean, float *variance, float *standardeviation) {
    int sum = 0;
    *mean = 0;
    *variance = 0;
    *standardeviation = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    *mean = (float)sum / n;

    for (int i = 0; i < n; i++) {
        *variance += (arr[i] - *mean) * (arr[i] - *mean);
    }
    *variance /= n;

    *standardeviation = sqrt(*variance);
}

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    float mean, variance, standardeviation;

    computeStatistics(arr, n, &mean, &variance, &standardeviation);

    sortArray(arr, n);

    printf("\nMean: %f\n", mean);
    printf("Variance: %f\n", variance);
    printf("Standard Deviation: %f\n", standardeviation);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
