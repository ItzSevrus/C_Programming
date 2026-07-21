// Program to practice loops in C
// Author -> Sahil Gour

#include <stdio.h>

void while_loop(void){
    int num;
    printf("WHILE_LOOP\nEnter number to count >>> ");
    scanf("%d", &num);

    int count = 0;

    // A while loop checks the condition and executes the instructions inside its scope
    while (count <= num) {
        printf("Counted %d\n", count);
        count++;
    }
}

void do_while_loop(void){
    int num;
    printf("DO_WHILE_LOOP\nEnter a number to count >>> ");
    scanf("%d", &num);

    int count = 0;
    
    // Do while loop does like executes the code in scope of do once and then checks condition and if its true then it repeats the instructions.
    // It executes code in scope of do at least once before checking condition

    do {
        printf("Counted %d\n", count);
        count ++;
    } while(count <=num);
}

void for_loop(void){
    int num;
    printf("FOR_LOOP\nEnter a number to count >>> ");
    scanf("%d", &num);

    // Used when number of iterations is known
    for (int i=0; i <= num; i++){
        printf("Counted %d\n", i);
    }
}

int main(void){
    while_loop();
    do_while_loop();
    for_loop();
    return 0;
}
