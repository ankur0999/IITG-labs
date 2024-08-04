#include<stdio.h>
#include "myHeader.h"

int main(){
    int A[4][4]={0};int B[4][4]={0};
    for(int i =0; i<4; i++){
        for(int j = 0; j<4; j++){
            printf("A[%d][%d]: ", i,j);
            scanf("%d",&A[i][j]);
            }
            }
     int row = 4,column = 4;
    transpose(A,B, row, column);
    printf("Real Matrix\n");
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            printf("%d ",A[i][j]);}
            printf("\n");
            }
    printf("Transpose Matrix\n");
    for(int i = 0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",B[i][j]);}
            printf("\n");
            }
            return 0;
            }
