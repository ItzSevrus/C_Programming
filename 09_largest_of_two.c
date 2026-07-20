// Program to find the largest of two numbers using if
// Author - Sahil Gour

#include <stdio.h>

int main(void){
    int a, b, greatest;
    printf("Enter two numbers >>> ");
    scanf("%d %d", &a, &b);
    if (a > b){
        greatest = a;
    } else if (b > a) {
        greatest = b;
    } else {
        printf("\nBoth numbers are equal!\n");
        return 1;
    }
    
    printf("\nLargest number is %d\n", greatest);

    return 0;
}
