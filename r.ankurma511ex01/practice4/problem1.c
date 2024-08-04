#include<stdio.h>
#define WRITE(i,n)do{if((i++)<n)printf("Hello world\n"); }while(1);
        
int main(){
    WRITE(0,3);
    return 0;
    }
