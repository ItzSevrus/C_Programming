// Program to print character of an ascii number from 0 to 255
// Author - Sahil Gour

#include <stdio.h>

int main(void){
    for (int i=0; i <= 255; i++){
        printf("Ascii Value %d, Character is %c\n", i, i);
    }
    return 0;
}
