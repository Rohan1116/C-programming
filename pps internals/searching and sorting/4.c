#include <stdio.h> 
int main() { 
    int x, i, j, temp; 
 
    printf("Enter number of elements: "); 
    scanf("%d", &x); 
    int nums[x]; 
    printf("Enter the numbers:\n"); 
    for (i = 0; i < x; i++) { 
        scanf("%d", &nums[i]); 
    } 
    for (i = 0; i < x - 1; i++) { 
        for (j = i + 1; j < x; j++) { 
            if (nums[i] > nums[j]) { 
                temp = nums[i]; 
                nums[i] = nums[j]; 
                nums[j] = temp; 
            } 
        } 
    } 
    printf("The sorted list is: "); 
    for (int i = 0; i < x; i++) { 
        printf("%d ", nums[i]); 
    } 
    printf("\n");
    return 0; 
}