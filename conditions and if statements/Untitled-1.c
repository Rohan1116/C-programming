#include <stdio.h>

int main(){
    int numbers = 12345;
    int revnumbers = 0;
    while (numbers) {
        revnumbers = revnumbers * 10 + numbers % 10;
        numbers /=10;
    }
    printf("%d", revnumbers);
    return 0;
}
