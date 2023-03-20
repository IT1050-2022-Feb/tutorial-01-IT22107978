/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {
  float num1, num2, avg = 0;
  printf("Enter the mark of subject 1 : ");
  scanf("%f", &num1);
  printf("Enter the mark of subject 2 : ");
  scanf("%f", &num2);
  avg = (num1 + num2) / 2;
  printf("Average of the two marks : %.2f", avg);
  return 0;
}
