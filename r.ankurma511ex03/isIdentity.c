#include<stdio.h>

int isIdentity(int C[4][4]){
    for(int i = 0;i<4;i++){
    for(int j =0;j<4;j++){
    
        
            if(C[i][i] != 1){
                return 0;
                }
            else if(C[i][j] ==0){
                return 0;
                }
            else{
                return 1;
                }
                }
                }
                }
