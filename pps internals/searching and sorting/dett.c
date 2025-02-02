#include <stdio.h>

// Function to calculate the determinant of a 3x3 matrix
int determinantOfMatrix(int matrix[3][3]) {
    int determinant = 0;

    // Apply the determinant formula for 3x3 matrices
    determinant = matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1]))
               - matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[1][2] * matrix[2][0]))
               + matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0]));

    return determinant;
}

int main() {
    int matrix[3][3];

    // Input the matrix elements
    printf("Enter the elements of the 3x3 matrix (row-wise):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate the determinant
    int det = determinantOfMatrix(matrix);

    // Display the determinant
    printf("\nThe determinant of the matrix is: %d\n", det);

    return 0;
}
