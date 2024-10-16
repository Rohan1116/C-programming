#include <stdio.h>

int main() {
  int myAge = 28;
  int votingAge = 18;
  
  printf("%d", myAge >= votingAge);
  if(myAge >= votingAge){
    printf("\nYou are eligible for voting.");
  }
  else(myAge < votingAge);{
    printf("You are not eligible for voting.");
  }
  return 0;
}