#include <stdio.h>

#define MAX 10 // Maximum size of the matrix

// Function prototypes
void inputMatrix(int matrix[MAX][MAX], int rows, int cols);
void printMatrix(int matrix[MAX][MAX], int rows, int cols);
void addMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols);
void multiplyMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows1, int cols1, int cols2);

int main() {
    int rows, cols, rows1, cols1, rows2, cols2;

    // Matrix Addition
    printf("Enter the number of rows and columns for matrix addition: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[MAX][MAX], matrix2[MAX][MAX], resultAdd[MAX][MAX];

    printf("Enter elements of the first matrix:\n");
    inputMatrix(matrix1, rows, cols);

    printf("Enter elements of the second matrix:\n");
    inputMatrix(matrix2, rows, cols);

    addMatrices(matrix1, matrix2, resultAdd, rows, cols);

    printf("\nResult of Matrix Addition:\n");
    printMatrix(resultAdd, rows, cols);

    // Matrix Multiplication
    printf("\nEnter the number of rows and columns for the first matrix (for multiplication): ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the number of rows and columns for the second matrix (for multiplication): ");
    scanf("%d %d", &rows2, &cols2);

    // Check if multiplication is possible
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible with these dimensions.\n");
        return 1;
    }

    int matrix3[MAX][MAX], matrix4[MAX][MAX], resultMult[MAX][MAX];

    printf("Enter elements of the first matrix:\n");
    inputMatrix(matrix3, rows1, cols1);

    printf("Enter elements of the second matrix:\n");
    inputMatrix(matrix4, rows2, cols2);

    multiplyMatrices(matrix3, matrix4, resultMult, rows1, cols1, cols2);

    printf("\nResult of Matrix Multiplication:\n");
    printMatrix(resultMult, rows1, cols2);

    return 0;
}

// Function to input matrix elements
void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print matrix elements
void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows1, int cols1, int cols2) {
    // Initialize result matrix to zero
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
