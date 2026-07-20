// Program to find prime numbers between 1 and n
// Author - Sahil Gour

#include <stdio.h>

int main(void){
    int num;
    printf("Enter a number >>> ");
    scanf("%d", &num);
    printf("\n");

    printf("Prime numbers between 1 and %d are :-\n", num);
    for (int i=1; i <= num; i++){
        int isprime = 1;

        if (i == 1){
            continue;
        }
        
        for (int j=2; j <= i / 2; j++){
            if (i % j == 0){
                // this means number is not prime
                isprime = 0;
                break;
            }
        }
        if (isprime){
            printf("%d\n", i);
        }
    }

    return 0;
}

