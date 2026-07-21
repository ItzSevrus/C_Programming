#include "../include/matrices.h"
#include <stdio.h>

void show_matrix(int rows, int columns, int matrix[rows][columns]){
    printf("[");
    for (int i=0; i<rows; i++){
        printf("[");
        for (int j=0; j<columns; j++){
            printf("%d", matrix[i][j]);
            if (j < columns - 1) {
               printf(",");
            }
        }
        printf("]");
    }
    printf("] %dx%d\n\n", rows, columns);
}

