#include <stdio.h>

void printBinary(int num) {
    for (int i = 7; i >= 0; i--) {
        // Shift the bits and check if the i-th bit is 1 or 0
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int num;
    
    // Input the number between 0 and 255
    printf("Enter a number between 0 and 255: ");
    scanf("%d", &num);
    
    // Check if the number is within the valid range
    if (num >= 0 && num <= 255) {
        printf("Binary equivalent of %d is: ", num);
        printBinary(num);
    } else {
        printf("Please enter a number between 0 and 255.\n");
    }
    
    return 0;
}

/*Output:-
Enter a number between 0 and 255: 6
Binary equivalent of 6 is: 00000110*/

