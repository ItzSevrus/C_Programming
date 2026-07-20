// Program to find the roots of a quadratic equation
// Author - Sahil Gour

#include <stdio.h>
#include <math.h>

// A quadratic equation is in form of ax^2 + bx + c
// So we are defining the a, b and c.

int main(void){
    int a, b, c;
    a = 1;
    b = 4;
    c = 1;
    printf("Given Quadratic Equation is %dx^2 + %dx + %d\n", a, b, c);
    // Using quadratic formula to find the roots of a given equation
    
    float d = pow(b, 2) - (4 * a * c);
    float x_1, x_2;

    printf("Discriminant value is %.3f\n", d);
    if (d < 0){
        printf("Discriminant is less than 0, means roots will be imaginary!\n");
        return -1;
    } else if (d == 0) {
        printf("Discriminant is equals to 0, means both roots are equal.\n");
        x_1 = (-b + sqrt(d)) / (2 * a);
        x_2 = x_1;
    } else {
        x_1 = (-b + sqrt(d)) / (2 * a);
        x_2 = (-b - sqrt(d)) / (2 * a);
    }

    printf("Roots of equation are %.3f and %.3f\n", x_1, x_2);
}
