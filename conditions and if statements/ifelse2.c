#include <stdio.h>

int main() {
  int number;
  printf("Enter the number: ");
  scanf("%d", &number);
  
  if (number > 0) {
    printf("The value is a positive number.");
  } else if (number < 0) {
    printf("The value is a negative number.");
  } else {
    printf("The value is 0");
  }
  
  return 0;
}