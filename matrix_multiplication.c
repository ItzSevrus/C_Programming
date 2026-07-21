// Program to perform multiplication of two matrices
// Author - Sahil Gour

#include <stdio.h>
#include "matrices.h"

int main(void){
    int matrix_A[2][2] = {{1, 2}, {3, 4}};
    int matrix_B[2][2] = {{5, 6}, {7, 8}};

    printf("MATRIX A :\n");
    show_matrix(matrix_A);

    printf("\nMATRIX B :\n");
    show_matrix(matrix_B);

    int row1_mat_A[2];
    int row2_mat_A[2];

    int col1_mat_B[2];
    int col2_mat_B[2];

    int matrix_M[2][2] = {
        {
            row1_mat_A[0] * col1_mat_B[0] + row1_mat_A[1] * col1_mat_B[1],
            row1_mat_A[0] * col2_mat_B[0] + row1_mat_A[1] * col2_mat_B[1]
        },
        {
            row2_mat_A[0] * col1_mat_B[0] + row2_mat_A[1] * col1_mat_B[1],
            row2_mat_A[1] * col2_mat_B[0] + row1_mat_A[1] * col2_mat_B[1]
        }
    };

    show_matrix(matrix_M);
    

    return 0;
}
