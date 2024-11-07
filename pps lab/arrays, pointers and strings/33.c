#include <stdio.h>


// Function prototypes
void inputMatrix(int matrix[3][3], int rows, int cols);
void printMatrix(int matrix[3][3], int rows, int cols);
void addMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3], int rows, int cols);
void multiplyMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3], int rows1, int cols1, int cols2);

int main() {
    int rows1, cols1, rows2, cols2;
    int matrix1[3][3], matrix2[3][3], result[3][3];

    // Input matrices for addition and multiplication
    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter elements of Matrix 1:\n");
    inputMatrix(matrix1, rows1, cols1);

    printf("Enter elements of Matrix 2:\n");
    inputMatrix(matrix2, rows2, cols2);

    // Matrix Addition
    if (rows1 == rows2 && cols1 == cols2) {
        addMatrices(matrix1, matrix2, result, rows1, cols1);
        printf("\nResult of Matrix Addition:\n");
        printMatrix(result, rows1, cols1);
    } else {
        printf("\nMatrix addition not possible with these dimensions.\n");
    }

    // Matrix Multiplication
    if (cols1 == rows2) {
        multiplyMatrices(matrix1, matrix2, result, rows1, cols1, cols2);
        printf("\nResult of Matrix Multiplication:\n");
        printMatrix(result, rows1, cols2);
    } else {
        printf("\nMatrix multiplication not possible with these dimensions.\n");
    }

    return 0;
}

// Function to input matrix elements
void inputMatrix(int matrix[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
}

// Function to print matrix elements
void printMatrix(int matrix[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = matrix1[i][j] + matrix2[i][j];
}

// Function to multiply two matrices
void multiplyMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3], int rows1, int cols1, int cols2) {
    // Initialize result matrix to zero
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols2; j++)
            result[i][j] = 0;

    // Matrix multiplication logic
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols2; j++)
            for (int k = 0; k < cols1; k++)
                result[i][j] += matrix1[i][k] * matrix2[k][j];
}

/*Enter rows and columns for Matrix 1: 3 3
Enter rows and columns for Matrix 2: 3 3
Enter elements of Matrix 1:
Enter element [1][1]: 1
Enter element [1][2]: 2
Enter element [1][3]: 3
Enter element [2][1]: 4
Enter element [2][2]: 5
Enter element [2][3]: 6
Enter element [3][1]: 7
Enter element [3][2]: 8
Enter element [3][3]: 9
Enter elements of Matrix 2:
Enter element [1][1]: 1
Enter element [1][2]: 2
Enter element [1][3]: 3
Enter element [2][1]: 4
Enter element [2][2]: 5
Enter element [2][3]: 6
Enter element [3][1]: 7
Enter element [3][2]: 8
Enter element [3][3]: 9

Result of Matrix Addition:
2 4 6
8 10 12
14 16 18

Result of Matrix Multiplication:
30 36 42
66 81 96
102 126 150 */
