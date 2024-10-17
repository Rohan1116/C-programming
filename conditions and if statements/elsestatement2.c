#include <stdio.h>

int main() {
  int age = 101;
  if (age < 18) {
    printf("Not Eligible to Vote.");
  } else if (age < 100) {
    printf("Eligible to vote.");
  } else {
    printf("VOTER ID CARD EXPIRED");
  }
  return 0;
}