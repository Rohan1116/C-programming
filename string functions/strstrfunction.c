#include <stdio.h>
#include <string.h>

int main() {
    const char str1[] = "Hello, welcome to the world of programming.";
    const char str2[] = "ing";

    char *result = strstr(str1, str2);

    if (result != NULL) {
        printf("Substring found at position: %d\n", result - str1);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
