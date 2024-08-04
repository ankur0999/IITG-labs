#include<stdio.h>

int main(void){
    int a, b, c,d;
    printf("Enter the dividend: ");
    scanf("%d",&a);
    printf("Enter divisor1: ");
    scanf("%d",&b);
    printf("Enter divisor2: ");
    scanf("%d",&c);
    d = (a % b==0) && (a%c==0);
    printf("%d\n",d);
    return 0;
    }
