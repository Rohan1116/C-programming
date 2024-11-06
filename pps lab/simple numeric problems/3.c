#include <stdio.h>

int main() {
    float percentage;

    
    printf("Enter the percentage of marks: ");
    scanf("%f", &percentage);

    if (percentage < 40) {
        printf("The awarded class is: Failed\n");
    } else if (percentage >= 40 && percentage < 60) {
        printf("The awarded class is: Second class\n");
    } else if (percentage >= 60 && percentage < 70) {
        printf("The awarded class is: First class\n");
    } else {
        printf("The awarded class is: Distinction\n");
    }

    return 0;
}

/*output
Enter the percentage of marks: 90
The awarded class is: Distinction*/
