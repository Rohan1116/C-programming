#include<stdio.h>
#include<string.h>

int main(){
    char str[1000]="",substr[1000]="",resstr[1000]="";
    int n,i,j,k, sublength, length;
    printf("Enter the main string:\n");
    scanf("%s",&str);
    printf("Enter the sub string:\n");
    scanf("%s", &substr);
    printf("Enter the position:\n");
    scanf("%s", &n);
    for(i=0;i<n;i++){
        resstr[i]=str[i];
    }
    sublength = strlen(substr);
    j = n;
    for(i=0;i<sublength;i++){
        resstr[j] = substr[i];
        j++;
    }
    length = strlen(str);
    for(i=j;i<length+sublength;i++){
        resstr[i] = str[n];
        n++;
    }
    printf("The result is %s", resstr);
    return 0;
}