// Program to find Least common factor of two numbers
// Author - Sahil Gour

#include <stdio.h>

int main(void){
    int a,b,x,y;
    
    printf("Enter both numbers >>> ");
    scanf("%d %d", &a, &b);    
    
    x = a;
    y = b;

    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    int gcd = a;

    int lcm = (x * y) / gcd;

    printf("LCM is %d\n", lcm);

    return 0;
}
