// Program to swap two strings
// Author - Sahil Gour

#include <stdio.h>
#include <string.h>

void print_str(char str[]){
    for (int i=0; i < strlen(str); i++){
        printf("%c", str[i]);
    }
    printf("\n");
}

int main(void){
    char s[] = "Hello this is a string";
    printf("STRING A : ");
    print_str(s);

    char s_2[] = "Hello Another String";
    printf("STRING B : ");
    print_str(s_2);


    printf("SWAPPING STRINGS...\n");
    char temp[50];

    strcpy(temp, s);
    strcpy(s, s_2);
    strcpy(s_2, temp);

    printf("STRING A : %s\n", s);
    printf("STRING B : %s\n", s_2);
}
