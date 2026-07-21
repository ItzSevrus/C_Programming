// Program to perform multiplication of two matrices
// Author - Sahil Gour

#include <stdio.h>
#include "matrices.h"

int *take_input(){
    static int values[2];

    printf("Enter Number of Rows >>> ");
    scanf("%d", &values[0]);

    printf("Enter Number of Columns >>> ");
    scanf("%d", &values[1]);

    return values;

}

int main(void){
    int r1, c1, r2, c2;

    // For matrix A 
    
    printf("Please enter details for Matrix_A :-\n");

    int  *values_a = take_input();
    r1 = values_a[0];
    c1 = values_a[1];

    int matrix_A[r1][c1];

    for (int i=0; i < r1; i++){
        for (int j=0; j < c1; j++){
            printf("Enter value for position %d,%d >>> ", i, j);
            scanf("%d", &matrix_A[i][j]);
        }
    }
    printf("\nMatrix_A is ");
    show_matrix(r1, c1, matrix_A); 

    // For matrix B
    
    int *values_b = take_input();

    r2 = values_b[0];
    c2 = values_b[1];
    
    int matrix_B[r2][c2];

    printf("\nPlease enter Matrix_B :-\n");
    for (int i=0; i < r2; i++){
        for (int j=0; j < c2; j++){
            printf("Enter value for position %d,%d >>> ", i, j);
            scanf("%d", &matrix_B[i][j]);
        }
    }
    printf("\nMatrix_B is ");
    show_matrix(r2, c2, matrix_B);
    
    // Checking that is matrix multiplication is possible or not
    if (c1 != r2){
        printf("Matrix Multiplication isn't possible! Reason: No. of columns of Matrix A != No. of rows of Matrix B)\n");
        return 1;
    }

    int matrix_M[r1][c2];

    for (int i=0; i < r1; i++){
        for (int j=0; j < c2; j++){
            int sum = 0;

            for (int k=0; k < c1; k++){
                sum += matrix_A[i][k] * matrix_B[k][j];
            }
            matrix_M[i][j] = sum;
        }
    }

    printf("RESULT OF Matrix_A * Matrix_B is ");

    show_matrix(r1, c2, matrix_M);
    
    return 0;
}
