#include<stdio.h>
#include<string.h>
int main(){
char str1[] = "Hell!";
char str2[] = "Hell!";
char str3[] = "Hi";

//comparing string 1 and string 2 
printf("%d\n", strcmp(str1, str2));
//comparing string 1 and string 3 
printf("%d\n", strcmp(str1, str3));  
return 0;
}
