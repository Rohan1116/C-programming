#include<stdio.h>
#include<string.h>
int main(){
    int n,p;
    char strin[100];
    printf("Enter the string:\n");
    scanf("%s",&strin);
    printf("Enter the position and number of characters need to be deleted:\n");
    scanf("%d%d", &p,&n);
    int x = strlen(strin), y=0;
    char strnew[x];
    for(int i=0; i<p; i++){
        strnew[y] = strin[i];
        y++;
    }
    for(int i=p+n;i<x;i++){
        strnew[y] = strin[i];
        y++;
    }
    printf("The edited string is: %s", strnew);
    
    return 0;
}
