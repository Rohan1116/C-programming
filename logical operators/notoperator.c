#include <stdio.h>

int main() {
  int x = 5;
  int y = 3;
  
  printf("%d", !(x > 3 && x < 10));
  return 0;
  //here the output is 1 but because of the not operrator it gets changed to 0 and 0 changes to 1.
}