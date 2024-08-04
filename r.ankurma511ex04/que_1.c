#include<stdio.h>

int main(){
     float a = 4,b=6;
    const float *const ptr1 = &a;
    *ptr1 = 5.6;
    ptr1 = &b;
    printf("%f\n",*ptr1);
    return 0;
    }
