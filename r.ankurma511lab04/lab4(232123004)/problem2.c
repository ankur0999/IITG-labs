#include<stdio.h>
int HCF(int,int);
int LCM(int,int,int);

int main(void){
    int num1,num2,hcf,lcm;
    printf("\t\tA program to Calculate HCF and LCM of two given number\n\n\n");
    printf("Enter two number: ");
    scanf("%d %d",&num1,&num2);
    hcf = HCF(num1,num2);
    lcm = LCM(num1,num2,hcf);
    printf("HCF and LCM of %d and %d is %d and %d respectively\n",num1, num2, hcf, lcm);
    return 0;
    }
    
int HCF(int x, int y){
    int hcf;
    if(x < y){
    
        for(int i=1;i <= x;i++){
            if(x%i == 0 && y%i == 0)
                hcf = i;
                }
                return hcf;}
    else{
        for(int i=1;i <= y;i++){
            if(x%i == 0 && y%i == 0)
                hcf = i;
                }
                return hcf;
                }
                }
int LCM(int x, int y, int hcf){
    int temp1, temp2,lcm;
    temp1 = x/hcf;
    temp2 = y/hcf;
    lcm = (temp1*temp2*hcf);
    return lcm;}
        
    
