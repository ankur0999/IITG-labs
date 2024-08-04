#include<stdio.h>
#include "myHeader.h"

int main(){
    int arr[8];
    double sum = 0,average;
    printf("Enter the 8 number  to calculate mean, median & mode\n");
    for(int i = 0;i<8;i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
        }
    printf("mean is %.2lf \n",sum/8);
    
    sort(arr,8);
    
    average = ((float)arr[3] + (float)arr[4])/2;
    printf("median is %.2lf \n", average);
    
    
    printf("mode is %d \n",mode(arr, 8));
    
    
    return 0;
    }
    
    
    
