#include <stdio.h>

int main() {
    int rows, columns;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int mat1[rows][columns], mat2[rows][columns];

    printf("Enter first matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter second matrix:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            scanf("%d", &mat2[i][j]);

    printf("Sum of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\n ", mat1[i][j] + mat2[i][j]);
        }
    }

    return 0;
}