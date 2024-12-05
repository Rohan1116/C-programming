#include <stdio.h>
#include <string.h> 

int main()
{
    char word1[40], word2[40], word3[40], word4[40];
    char concatenated[160]; 

    printf("Enter text: \n");
    scanf("%s%s", word1, word2);
    scanf("%s", word3);
    scanf("%s", word4);

    
    strcpy(concatenated, word1);
    strcat(concatenated, " "); 
    strcat(concatenated, word2);
    strcat(concatenated, " "); 
    strcat(concatenated, word3);
    strcat(concatenated, " "); 
    strcat(concatenated, word4);

    printf("Concatenated string: %s\n", concatenated);

    return 0;
}
