// program to check whether a given number is an Armstrong number or not.
// Author -> Sahil Gour

#include <stdio.h>
#include <math.h>

int main(void){
    int num_orig;

    printf("Enter a Number >>> ");
    scanf("%d", &num_orig);

    int num = num_orig;
    int digits = 0;
    
    // Counting digits
    if (num_orig == 0){
        digits = 1;
    } else {
        while (num > 0){
            num = num / 10;
            digits++;
        }
    }

    // Calculating armstrong number
    num = num_orig;
    int arm_num = 0;
    while (num > 0){
        int val= num % 10;
        num /= 10;

        arm_num += (int)pow(val, digits); // Used type casting here cus pow() returns double;
    }

    if (arm_num == num_orig){
        printf("YES! Number is an Armstrong Number!\n");
    } else {
        printf("NO! Number is NOT an Armstrong Number!\n");
    }

    return 0;
}
