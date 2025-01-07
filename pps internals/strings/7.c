#include<stdio.h>
#include<string.h>
void main(){
    char text[1000];
    printf("Enter the text: \n");
    gets(text);
    int n=strlen(text);
    int linecount=1, wordcount=1;
    for (int i=0; i<n; i++){
        char a = text[i];
        if(a=='\n'){
            linecount++;
        }
        else if(a == ' '){
            wordcount++;
        }
    }
printf("The number of lines = %d\n Then number of words = %d\n The number of characters=%d\n",linecount,wordcount,n);


}