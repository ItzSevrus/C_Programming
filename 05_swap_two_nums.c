// Program to swap two numbers using a temporary variable and without variable
// Author - Sahil Gour

#include <stdio.h>

int main(void){
    int a,b; // Defined two numbers a and b

    // Assigning values to a and b
    a = 5;
    b = 6;    
    printf("VARIABLES are a: %d    b: %d\n", a, b);
    printf("Swapping variables a and b using a temporary variable c!\n");
    // Swapping values of a and b using a temporary variable c
    int c;
    c = b; // c takes value of b

    b = a; // Now b takes value of a
    a = c; // and a takes value of c
    printf("SWAPPED a: %d    b: %d\n\n", a, b);

    // Now reassigning some values to a and b
    a = 10;
    b = 11;
    
    printf("VARIABLES are a: %d    b: %d\n", a, b);
    printf("Swapping variables a and b without using a temporary variable!\n");

    // Swapping values of a and b without using a temporary variable
    // Using Multiplication and then division method
    // This method fails when either of a and b is 0
    
    if (a == 0 || b == 0){
        printf("ERROR: a or b must not equal to zero!\n");
        return -1;
    }

    a = a * b;
    b = a / b;
    a = a / b;
    printf("SWAPPED a: %d    b: %d\n\n", a, b);
    return 0;
}
