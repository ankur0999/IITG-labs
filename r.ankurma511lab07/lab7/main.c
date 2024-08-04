#include<stdio.h>
#include "myHeader.h"
int main(){
    int arr[8];
    printf("Enter eight digit you wanna sort\n");
    for(int i = 0;i<8;i++)
        scanf("%d",&arr[i]);
        
    sort(arr, 8);
    printf("sorted array is: ");
    for(int i=0; i<8; i++)
        printf("%d ",arr[i]);
   printf("\n");
   return 0;
   }
