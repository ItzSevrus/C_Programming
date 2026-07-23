// program to check whether a given number is a strong number or not.
// Author -> Sahil Gour

#include <stdio.h>

int factorial(int num){
    int fact = 1;
    if (num == 0 || num == 1){
        return fact;
    }
    for (int i=num; i > 1; i--){
        fact *= i;
    }
    return fact;
}

int main(void){
    int num_orig;
    
    printf("Enter a Number >>> ");
    scanf("%d", &num_orig);
    
    if (num_orig == 0){
        printf("No! Number 0 is NOT a Strong Number!\n");
        return 1;
    } else if (num_orig < 0){
        printf("Invalid Number! Negative numbers are not allowed!\n");
        return 1;
    }
    
    int num = num_orig;
    
    int strong = 0;

    while (num > 0){
        int digit = num % 10;
        strong += factorial(digit);

        num /= 10;
    }

    if (num_orig == strong){
        printf("YES! Number %d is a Strong Number!\n", num_orig);
    } else {
        printf("NO! Number %d is NOT a Strong Number!\n", num_orig);
    }
    

    return 0;
}
