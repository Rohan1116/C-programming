#include <stdio.h>

int main() {
  int a;  
  int Password = 1729;
  printf("Please enter the password:");
  scanf("%d", &a);
  if (Password == a) {
    printf("Correct \nYou can use the phone now.");
  } else {
    printf("Wrong\nTry until you get it corret.");
  }

  return 0;
}
