// Program to calculate Area and Circumference of a circle, square and rectangular field.
// Author - Sahil Gour


#include <stdio.h>
#include <math.h>

// defining PI
#define PI 3.1415

// All the measurements are in meters

int main(){
    // Circumference and area of circle
    float radius = 5.0f; 
    printf("Radius of circle: %.2f m\n", radius);
    float circumference = 2 * PI * radius;
    float area_circle = PI * pow(radius, 2);
    printf("Circumference of Circle : %.2f m\n", circumference);
    printf("Area of Circle : %.2f m^2\n\n", area_circle);

    // perimeter and area of square
    int side = 5;
    printf("Side of Square: %d m\n", side);
    int perim_square = 4 * side;
    int area_square = pow(side, 2);
    printf("Perimeter of Square : %d m\n", perim_square);
    printf("Area of Square : %d m^2\n\n", area_square);

    // perimeter and area of rectangle
    int length = 5;
    int breadth = 6;
    printf("Length and Breadth of Square are %d m, %d m respectively\n", length, breadth);
    int perim_rect = 2 * (length + breadth);
    int area_rect = length * breadth;
    printf("Perimeter of Rectangle : %d m\n", perim_rect);
    printf("Area of Rectange : %d m^2\n", area_rect);


    return 0;
}
