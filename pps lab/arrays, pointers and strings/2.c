#include <stdio.h>
#include <math.h>

void computeStats(float arr[], int n, float *mean, float *variance, float *std_dev);
void sortArray(float arr[], int n);

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    float mean, variance, std_dev;
    computeStats(arr, n, &mean, &variance, &std_dev);

    printf("\nMean: %.2f", mean);
    printf("\nVariance: %.2f", variance);
    printf("\nStandard Deviation: %.2f\n", std_dev);

    printf("\nArray before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }

    sortArray(arr, n);

    printf("\nArray after sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }

    return 0;
}

void computeStats(float arr[], int n, float *mean, float *variance, float *std_dev) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    *mean = sum / n;

    float sum_square_diff = 0.0;
    for (int i = 0; i < n; i++) {
        sum_square_diff += (arr[i] - *mean) * (arr[i] - *mean);
    }
    *variance = sum_square_diff / n;
    *std_dev = sqrt(*variance);
}

void sortArray(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                float temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

/*Enter the number of elements: 5
Enter the elements:
2
7
3
7
4

Mean: 4.60
Variance: 4.24
Standard Deviation: 2.06

Array before sorting: 2.00 7.00 3.00 7.00 4.00
Array after sorting: 2.00 3.00 4.00 7.00 7.00*/