// Program to check whether reverse of a number is equals to the number itself, number can be of any length
// Author - Sahil Gour

#include <stdio.h>

int main(void){
    int num_orig;
    
    printf("Enter a Number >>> ");
    scanf("%d", &num_orig);
    
    int num = num_orig;

    int val;
    int index = 0;
    int num_rev = 0;

    while (num > 0){
        val = num % 10; // Storing the remainder
        num = num / 10; // Storing the quotient
        num_rev = num_rev * 10 + val;

    }
    
    if (num_orig == num_rev){
        printf("Yes, Number is same as its reverse!\n");
    } else {
        printf("No, Number is NOT same as its reverse!\n");
    }

    return 0;
}
