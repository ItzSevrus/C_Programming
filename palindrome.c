// Program to check wheter a string is a palindrome or not
// Author - Sahil Gour

#include <stdio.h>
#include <string.h>

int main(void){
    char s[50];

    printf("Enter the string >>> ");
    scanf("%19s", s);

    printf("You entered : %s\n", s);

    for (int i=0; i < strlen(s); i++){
        if (s[i] != s[strlen(s) - 1 - i]) {
            printf("NOT PALINDROME!\n");
            return 1;
        }
    }

    printf("PALINDROME!\n");
    return 0;
}
