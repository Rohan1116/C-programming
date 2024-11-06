#include <stdio.h>

int main() {
    int num, rows;
    
    // Input the number and number of rows
    printf("Enter the number for the multiplication table: ");
    scanf("%d", &num);
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    // Print the multiplication table
    for (int i = 1; i <= rows; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}

/*Enter the number for the multiplication table: 5
Enter the number of rows: 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25*/