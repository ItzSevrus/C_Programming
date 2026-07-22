// Write a C program to check whether a given number is a perfect number or not
// Author -> Sahil Gour

#include <stdio.h>

int main(void){

   // A Number is a perfect number when sum of its proper divisors (excluding number itself) is equals to number itself.
    
    int number;
    
    printf("Enter a Number >>> ");
    scanf("%d", &number);
    
    // zero is not treated as a positive number! and Definition of perfect number states that it is a positive integer
    if (number == 0){
        printf("Zero is not a positive integer! So not a Perfect Number!\n");
        return 1;
    } else if (number < 0){
        printf("Please enter a positive integer!\n");
        return 1;
    }

    int number_res = 0;

    for (int i=1; i <= number / 2; i++){
        if (number % i == 0){
            number_res += i;
        }
    }
    
    if (number == number_res){
        printf("YES! Number is a perfect number!\n");
    } else {
        printf("NO! Number %d is not a perfect number!\n", number);
    }
    return 0;
}
