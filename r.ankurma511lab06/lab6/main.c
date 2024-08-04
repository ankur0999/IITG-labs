#include<stdio.h>
#include "myHeader.h"
#include<stdlib.h>
#include<time.h>

int main(){
    int freq[7] = {0};
    srand(time(0));
    for(int i=0;i<600;i++){
        ++freq[roll_die()];
        }
    for(int i= 1; i<=6; i++){
        printf("frequency of getting digit %d is %d\n",i,freq[i]);
        }
        return 0;
        }
