#include <stdio.h>

int main() {
  int x = 5;
  int y = 3;
  
  printf("%d", x > 3 && x < 10);
  return 0;
  //Always remember that && says that both conditions need to be satified to get the output 1 and if a single condition is not satified then the output would be 0.
  }