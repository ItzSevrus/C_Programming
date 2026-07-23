// program to perform arithmetic operations using a switch statement
// Author -> Sahil Gour

#include <stdio.h>

int main(void){
    int num1, num2;
    
    char operator;

    printf("Enter Two Numbers seperated by space(eg. 12 13) >>> ");
    scanf("%d %d", &num1, &num2);

    printf("Enter operation to perform (+ - / *) >>> ");
    scanf(" %c", &operator);
    
    float result;

    switch (operator){
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if (num2 == 0){
                printf("ZERO_DIVISION_ERROR: can't divide by Zero!\n");
                return 1;
            }
            result = (float)num1 / num2;
            break;

        default:
            printf("Invalid Operator!\n");
            return 1;
    }
    
    printf("Result of %d %c %d is %.2f\n", num1, operator, num2, result);
}
