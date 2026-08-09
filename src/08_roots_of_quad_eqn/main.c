/*
Program to find the roots of a Quadratic Equation
Author -> Sahil Gour
*/

#include <math.h>
#include <stdio.h>

int main(void) {
  /* a*x^2 + b*x + c is a quadratic equation */
  int a, b, c;
  printf("Enter value for a,b and c >>> ");
  scanf("%d %d %d", &a, &b, &c);

  if (a == 0) {
    printf("'a' can't be zero!\n");
    return 1;
  }

  printf("Equation is %dx^2 + %dx + %d\n", a, b, c);

  /* Using Quadratic formula to find the roots of equation */
  float d = (b * b) - (4 * a * c);

  if (d < 0) {
    printf("NO Real Roots Exists!\n");
    return 1;
  }

  float x1 = ((-1 * b) + sqrt(d)) / (2 * a);
  float x2 = ((-1 * b) - sqrt(d)) / (2 * a);

  printf("Roots are %.2f and %.2f\n", x1, x2);

  return 0;
}
