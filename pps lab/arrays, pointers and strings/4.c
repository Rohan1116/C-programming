#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void inputMatrix(int **matrix, int rows, int cols);
void printMatrix(int **matrix, int rows, int cols);
int** transposeMatrix(int **matrix, int rows, int cols);

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Allocate memory for the original matrix
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Enter the elements of the matrix:\n");
    inputMatrix(matrix, rows, cols);

    printf("\nOriginal Matrix:\n");
    printMatrix(matrix, rows, cols);

    // Transpose the matrix
    int **transpose = transposeMatrix(matrix, rows, cols);

    printf("\nTransposed Matrix:\n");
    printMatrix(transpose, cols, rows);

    // Free the allocated memory for both matrices
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    for (int i = 0; i < cols; i++) {
        free(transpose[i]);
    }
    free(transpose);

    return 0;
}

// Function to input matrix elements
void inputMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print matrix elements
void printMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to transpose a matrix with dynamic memory allocation for the result
int** transposeMatrix(int **matrix, int rows, int cols) {
    // Allocate memory for the transposed matrix
    int **transpose = (int **)malloc(cols * sizeof(int *));
    for (int i = 0; i < cols; i++) {
        transpose[i] = (int *)malloc(rows * sizeof(int));
    }

    // Transpose the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    return transpose;
}
/*Enter the number of rows and columns for the matrix: 3 3 
Enter the elements of the matrix:
Enter element [1][1]: 1
Enter element [1][2]: 1
Enter element [1][3]: 1
Enter element [2][1]: 1
Enter element [2][2]: 1
Enter element [2][3]: 1
Enter element [3][1]: 1
Enter element [3][2]: 1
Enter element [3][3]: 1

Original Matrix:
1 1 1 
1 1 1
1 1 1

Transposed Matrix:
1 1 1 
1 1 1
1 1 1 */