// Program to find factorial of a number
// Author - Sahil Gour

#include <stdio.h>

int main(void){
    int n;
    printf("Enter a Number >>> ");
    scanf("%d", &n);
    
    if (n == 0 || n == 1){
        printf("Factorial : 1\n");
        return 0;
    } else if (n < 0){
        printf("We can't find factorial for numbers less than 0!\n");
        return 1;
    }
    
    int fact = 1;
    for (int i=n; i > 0; i--){
        fact *= i;
    }

    printf("Factorial : %d\n", fact);
    return 0;
}
