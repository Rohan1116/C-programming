#include <stdio.h>

// Function to count unique characters after removing common ones
int sameletters(char name1[], char name2[]) {
    int i, j, num = 0;
    
    for (i = 0; name1[i] != '\0'; i++) {
        for (j = 0; name2[j] != '\0'; j++) {
            if (name1[i] == name2[j]) {
                name2[j] = '*';
                name1[i] = '*';
                break;
            }
        }
    }
    
    for (i = 0; name1[i] != '\0'; i++)
        if (name1[i] != '*') num++;

    for (i = 0; name2[i] != '\0'; i++)
        if (name2[i] != '*') num++;

    return num;
}

// Function to determine the FLAMES result
void flames_result(int num) {
    char flames[] = "FLAMES";
    int length = 6;
    int start = 0;

    while (length > 1) {
        int index = (start + num - 1) % length;

        for (int i = index; i < length - 1; i++) {
            flames[i] = flames[i + 1];
        }
        length--;
        flames[length] = '\0'; 

        start = index % length; 
    }

    printf("The result is: %c\n", flames[0]);
}

int main() {
    char name1[50], name2[50];
    printf("Let's play the FLAMES game\n");
    printf("NOTE: If your name has more than 2 words, enter them without spaces.\n");
    printf("Enter the first name: ");
    scanf("%s", name1);
    printf("Enter the second name: ");
    scanf("%s", name2);

    int num = sameletters(name1, name2);
    flames_result(num);

    return 0;
}
