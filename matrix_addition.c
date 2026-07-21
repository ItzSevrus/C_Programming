// Program to perform addition of two matrices
// Author - Sahil Gour

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

int main(void){
    int matrixA[2][2] = {{1, 2}, {3, 4}};
    int matrixB[2][2] = {{5, 6}, {7, 8}};
    int matrixS[2][2];
   
    printf("Matrix A is\n");
    show_matrix(matrixA);

    printf("Matrix B is\n");
    show_matrix(matrixB);

    // Adding matrix A and B
    for (int i=0; i < 2; i++){
        for (int j=0; j < 2; j++){
            matrixS[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    printf("Result of Sum, Matrix S is \n");
    show_matrix(matrixS);
}
