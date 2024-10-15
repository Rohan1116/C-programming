#include<stdio.h>
#include<string.h>
int main(){
char str1[20] = "Evadaithe endhukura";
char str2[20] = "Hello World!";

strcpy(str2, str1);

printf("%s", str2);
return 0;
}
