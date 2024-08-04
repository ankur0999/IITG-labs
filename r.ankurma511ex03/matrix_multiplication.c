#include<stdio.h>

void matrix_multiplication(int A[4][4],int B[4][4], int C[4][4], int row, int column){
    for(int i=0;i<row;i++){
        for(int j =0; j<column;j++){
            for(int k = 0;k<row;k++){
                C[i][j] += A[i][k] * B[k][j];
                }
                }
                }}
