#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of values:\n");
    scanf("%d", &n);
    int arr[n], i, req;
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the required number:\n");
    scanf("%d", &req);
    for(i=0;i<n;i++){
        if(arr[i]==req){
        printf("The number %d is at the index %d", req, i);
        return 0;
        }
    }
    printf("The required number is not found.");
    return 0;
}