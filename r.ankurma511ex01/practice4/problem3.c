#include<stdio.h>
int main(){
   
    int num,fac;
    while(1){
     char y;
        fac = 1;
        printf("\nDo you want to compute the factorial(y/n)?");
        scanf("%c",&y);
        if(y == 'n')
            break;
        else
            {printf("\nPlease enter the number: ");
            scanf("%d",&num);
            for(int i = 1; i<=num; i++)
            {  
                fac *= i;
               }
       printf("factorial of %d is %d\n",num,fac);
       getchar();
       }
       }
   return 0;
   }
