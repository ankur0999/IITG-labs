#include<stdio.h>
float fac(int);
int main(void){
    int num;
    float exp = 1;
    printf("\t\tCompute Euler's number\n\n\n");
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num-1;i++){
    exp += (1/fac(i));
    
    }
    printf("exponential upto %d terms is %.5f\n",num,exp);
    return 0;
}
float fac(int x){
    float temp=1;
    if(x == 1)
        return 1;
    else{
        temp = x * fac(x-1);
        return temp;
        }
        }
    
    
    
