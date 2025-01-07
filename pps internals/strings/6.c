#include<stdio.h>
#include<string.h>
int main(){
    char text[1000], targ;
    printf("Enter the text:\n");
    gets(text);
    int n = strlen(text), arr[n], j=0;
    printf("Enter the target character:\n");
    scanf("%c", &targ);
    for(int i=0; i<n; i++){
        if(targ==text[i]){
            arr[j]=i;
            j++;
        }
    }
    printf("The character '%c' is at the index/indexes:",targ);
    for(int i=0; i<j; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}
