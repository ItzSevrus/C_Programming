#include "../include/matrices.h"
#include <stdio.h>

void show_matrix(int matrix[2][2]){
    printf("[");
    for (int i=0; i<2; i++){
        printf("[");
        for (int j=0; j<2; j++){
            printf("%d,", matrix[i][j]); 
        }
        printf("]");
    }
    printf("]\n\n");
}
