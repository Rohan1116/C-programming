#include <stdio.h>
#include <string.h>

void printDigit(char ch) {
    switch(ch) {
        case '0': printf("zero "); break;
        case '1': printf("one "); break;
        case '2': printf("two "); break;
        case '3': printf("three "); break;
        case '4': printf("four "); break;
        case '5': printf("five "); break;
        case '6': printf("six "); break;
        case '7': printf("seven "); break;
        case '8': printf("eight "); break;
        case '9': printf("nine "); break;
    }
}

void Inwords(char number[]) {
    for (int i = 0; i < strlen(number); i++) {
        printDigit(number[i]);
    }
}

int main() {
    char input[100];
    printf("Enter a number: ");
    scanf("%s", input);

    Inwords(input);

    return 0;
}

