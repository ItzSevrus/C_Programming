// Program to find the sum of individual digits of a number
// Author - Sahil Gour

#include <stdio.h>

int main(void){
    int number = 12345;
    int sum  = 0;
    
    printf("Number is %d\n", number);
    // We can get the last digit of number by doing number % 10 and rest of digits by number / 10
    while (number > 0){
        int last_digit = number % 10; // Taking the last digit from number which is 5 for first time.
        number = number / 10; // Now taking rest of number which is 1234 for first time
        sum += last_digit; // Summing the last digit 
    }
    printf("Sum of digits is %d\n", sum);
    return 0;
}
