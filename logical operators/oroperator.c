#include <stdio.h>

int main() {
  int x = 1;
  int y = 3;
  
  printf("%d", x > 3 || x < 10);
  return 0;
  //in || function says that even if one condition is satisfied then the output would be 1 and when both the conditions are not satisfied then the output would be 0.
}