#include <stdio.h>

int matrixaddn(int rows, int columns, int a[10][10], int b[10][10]){
    int i,j,c[3][3];
    for (i=0;i<rows;i++){
        for (j=0;j<columns;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The added matrix C is: \n");
    for (i=0;i<rows;i++){
        for (j=0;j<columns;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");  
    }
    return 0;
}
int main(){
    int a[10][10], b[10][10];
    int i,j,x,y;
    printf("Enter the number of rows and columns in a matrix A:\n ");
    scanf("%d %d",&x,&y);
    printf("Enter the values of matrix A: \n");
    for (i=0;i<x;i++){
        for (j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the values of matrix B: \n");
    for (i=0;i<x;i++){
        for (j=0;j<y;j++){
            scanf("%d",&b[i][j]);
        }
    }
    matrixaddn(x,y,a,b);
    return 0;
}