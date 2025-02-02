#include <stdio.h>
int main() {
  int n;
  char candidatename[100], fathername[100], college[100], joiningdate[20];
  float percentage;
  printf("Enter the number of students: ");
  scanf("%d", &n);

  FILE *file = fopen("C:/Users/Rohan/Documents/GitHub/C-programming/files/1.txt", "w");
  for (int i = 1; i <= n; i++) {
   printf("Name of the candidate: ");
   scanf("%s", candidatename);

   printf("Name of the candidate's father: ");
   scanf("%s", fathername);

   printf("Name of the college: ");
   scanf("%s", college);

   printf("joining date: ");
   scanf("%s", joiningdate);

   printf("Enter the percentage: ");
   scanf("%f",&percentage);

   fprintf(file,"This is to certify that %s S/o or D/O %s studying at %s joined on %s has completed the course successfully with a percentage of %.2f\n",candidatename,fathername,college,joiningdate,percentage);
  }
  fclose(file);

  
  return 0;
}