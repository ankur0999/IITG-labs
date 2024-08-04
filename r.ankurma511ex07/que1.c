#include<stdio.h>
#include<stdlib.h>
void findMissingNumber(int arr[], int n){
    int XOR = arr[0];
    for(int i=1; i<n-1; i++)
        XOR ^= arr[i];
    for(int i=1; i<= n; i++)
        XOR ^= i;
    printf("the missing number is: %d\n",XOR);
    }

int main(){
    printf("Enter no. of array element you want: ");
    int n;
    scanf("%d",&n);
    
    int *arr = (int*)malloc(n*sizeof(int));
    printf("Enter array element upto %d : ",n);
    
    for(int i=0; i<n-1; i++)
        scanf("%d",(arr+i));
    findMissingNumber(arr,n);
    }
