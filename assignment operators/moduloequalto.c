#include <stdio.h>

int main() {
  int x = 5;
  x %= 4;
  printf("%d", x);
  return 0;
  //here the value of x is divided with the value of %= and the remainder from that divison is updated as the new x value.
}