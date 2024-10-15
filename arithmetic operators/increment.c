#include<stdio.h>
int main(){
    int a = 98;
    int b = ++a;
    printf("the pre-increment of a is: %d\n", a);
    int c = 98;
    int d = a++;
    printf("the post-increment of a is: %d", d);
    return 0;

} 