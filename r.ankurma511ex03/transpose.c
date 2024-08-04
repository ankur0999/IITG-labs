void transpose(int A[4][4], int B[4][4], int row, int column){
    for(int i=0;i<row;i++){
        for(int j = 0; j<column; j++){
            B[j][i] = A[i][j];
            }
            }
            }
