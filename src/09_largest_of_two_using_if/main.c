/*
Program to find the largest of two numbers using if.
Author -> Sahil Gour
*/

#include <stdio.h>

int main(void) {
  int a, b;
  printf("Enter two numbers >>> ");
  scanf("%d %d", &a, &b);

  if (a >= b) {
    printf("Greatest is %d\n", a);
  } else {
    printf("Greatest if %d\n", b);
  }
  return 0;
}
