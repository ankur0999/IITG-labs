#include<stdio.h>
#include<stdlib.h>
int main(){
   int *ptr;
   int n,i,j,m;
   printf("Enter number of rows & columns : ");
   scanf("%d %d", &n,&m);
   ptr = (int*)malloc(n *m* sizeof(int));
   
   
   for(i = 0;i<n;i++){
   printf("Enter elements of %d row ",i+1);
       for(j = 0; j<m; j++)
             scanf("%d",(ptr + i*m+ j));
       }
   printf("the elements in 2D array is\n");
   for(i = 0;i<n;i++){
       for(j = 0; j<m; j++){
           printf("%d ", *(ptr + i*m+ j));
       }
       printf("\n");
       }
   printf("\n");
       
   return 0;
   }
