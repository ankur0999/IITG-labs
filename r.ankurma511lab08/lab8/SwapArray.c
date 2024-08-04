#include<stdio.h>
#include<stdlib.h>

void inputArray(int *arr, int size){
    for(int i=0 ; i< size; i++){
        scanf("%d",(arr + i));
        }
        }

void printArray(int *arr, int size){
    for(int i=0; i<size; i++)
        printf("%d ",*(arr + i));
    printf("\n");
    }

void swapArray(int *sourceArr, int *destArr, int size){
    int Arr[size];
    for(int i=0;i<size;i++)
        Arr[i] = sourceArr[i];
    for(int i=0 ; i< size; i++)
        sourceArr[i] = destArr[i];
    for(int i = 0; i< size; i++)
        destArr[i] = Arr[i];
        }
int main(){
    printf("Enter the size of Array: ");
    int size;
    scanf("%d",&size);
    int*arr1 = (int*)malloc(size*sizeof(int));\
    int*arr2 = (int*)malloc(size*sizeof(int));
    
    printf("Enter the input of 1st Array: \n");
    inputArray(arr1,size);
    printf("Enter the input of 2nd Array: \n");
    inputArray(arr2,size);
    swapArray(arr1, arr2, size);
    printf("\n1st Array\n");
    printArray(arr1, size);
    printf("\n2nd Array\n");
    printArray(arr2, size);
    printf("\n");
    free(arr1);
    free(arr2);
    return 0;
    }
    
