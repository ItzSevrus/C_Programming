// Program to calculate the sum and average of three numbers.
// Author - Sahil Gour

#include <stdio.h>

int sum(int a, int b, int c) { return a + b + c; }

float average(int a, int b, int c) { return (a + b + c) / 3.0; }

int main(void) {
  int a, b, c;
  a = 5;
  b = 6;
  c = 7;

  printf("Number 1 : %d\nNumber 2 : %d\nNumber 3 : %d\n", a, b, c);
  printf("Sum of numbers : %d\n", sum(a, b, c));
  printf("Average of numbers : %f\n", average(a, b, c));

  return 0;
}
