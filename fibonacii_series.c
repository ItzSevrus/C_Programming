// Program to generate fibonacci series upto n digits
// Author - Sahil Gour

#include <stdio.h>

int main(void){
    int n;
    printf("Enter upto how many numbers you want to print series? ");
    scanf("%d", &n);
    
    int a = 0;
    int b = 1;
    printf("%d, %d,", a, b);
    for (int i=0; i < n - 2; i++){
        int temp = b;
        b = a + b;
        a = temp;
        printf("%d ", b);
    }
    printf("\n");

    return 0;
}
