#include <stdio.h>

int main() {
  int myAge = 8;
  int votingAge = 18;

  printf("%d", myAge >= votingAge);
  if(myAge >= votingAge)
    printf("\nYou are eligible for voting.");
  else if(myAge < votingAge)
    printf("\nYou are not eligible for voting.");
  return 0;
}