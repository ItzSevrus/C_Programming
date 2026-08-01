// Program to find the ascii value of a character
// Author -> Sahil Gour

#include <stdio.h>

int main(void){
    char c; // creating a variable c with character datatype

    // Taking input from user
    printf("Enter a character >>> ");
    scanf("%c", &c); // Taking input and storing it in c

    // Printing the ascii value of character
    printf("ASCII Value of %c is %d\n", c, c);
}
