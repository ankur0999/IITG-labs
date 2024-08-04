#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int z = rand();
    z = z%6 + 1;
    printf("%d\n",z);
    return 0;
    }
