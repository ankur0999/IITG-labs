#include<stdio.h>
#include<stdlib.h>



int main(){
    int n, a, b;
    printf("Enter the corresponding Number to perform the operation: \n");
    while(1){
        printf("\n1. AND\n2. OR\n3. XOR\n4. Left Shift\n5. Right Shift\n6. Exit\n");
        scanf("%d",&n);
        
        switch(n){
        case 1:printf("Enter two number: ");
        scanf("%d %d",&a, &b); 
               printf("%d AND %d is %d",a,b,a&b);
                break;
        case 2:printf("Enter two number: ");
        scanf("%d %d",&a, &b);
         printf("%d OR %d is %d",a,b,a|b);
                break;
        case 3:printf("Enter two number: ");
        scanf("%d %d",&a, &b);
         printf("%d XOR %d is %d",a,b,a^b);
                break;
        case 4:printf("Enter two number: ");
        scanf("%d %d",&a, &b);
         printf("%d << %d is %d",a,b,a<<b);
                break;  
        case 5:printf("Enter two number: ");
        scanf("%d %d",&a, &b);
         printf("%d >> %d is %d",a,b,a>>b);
                break;
        case 6: exit(1);
                break;
        default:printf("You have entered wrong input\n");
        break;      
        }}
        
        }      
