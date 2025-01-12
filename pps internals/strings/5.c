#include<stdio.h>
#include<string.h>
int main(){
    char ch[1000];
    printf("Enter the string:\n");
    scanf("%s", ch);
    int i, x = strlen(ch);
    for (i = 0;i<x;i++){
        if(ch[i]!=ch[x-i-1]){
            printf("It is not a palindrome.");
            return 0;
        }
    }
    printf("It is a palindrome.");
    return 0;
}
