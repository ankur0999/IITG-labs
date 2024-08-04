#include<stdio.h>
int main(void){
   int bsal;
   float amount;
   printf("Enter basic salary: ");
   scanf("%d",&bsal);
   if(bsal>=1 && bsal <= 4000)
   {   
       amount = bsal + .10*bsal + .50*bsal;
       printf("\nGross salary = %.3f\n", amount);
       }
   else if(bsal>=4001 && bsal<= 8000)    
   {
       amount = bsal + .20*bsal + .60*bsal;
       printf("\nGross salary = %.3f\n", amount);
       }
   else if(bsal>=8001 && bsal <= 12000)
   {
       amount = bsal + .25*bsal + .70*bsal;
       printf("\nGross salary = %.3f\n", amount);
       }
   else
   {
       amount = bsal + .30*bsal + .80*bsal;
       printf("\nGross salary = %.3f\n", amount);
       }
   return 0;
   }
