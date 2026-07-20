// Program to print a right angled triangle
// Author -> Sahil Gour

#include <stdio.h>

int main(){
    for (int i=0; i<8; i++){
        for (int j=0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
