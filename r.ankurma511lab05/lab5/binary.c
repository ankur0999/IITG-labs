#include<stdio.h>
#define dectobin DTOB


void DTOB(int n){
    
    
    if(n == 0){
   	 return;
    }
    int x = n%2;
    n = n/2;
    DTOB(n);
    printf("%d", x);
}
    
 
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Binary of %d is : ", n);
    DTOB(n);
    printf("\n");
    return 0;
}

        
    
