#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[1000];
    printf("Enter some sentence: ");
    scanf("%[^\n]%*c",str);
    //printf("%ld",sizeof(str));
    int i,k=0;
    for(i=0;str[i] != '\0'; i++);
    long int size = i;
    //printf("%ld",size);
    for(long int j=0; j<size; j++){
        if(str[j] == ' ' || j==size-1){
            for(long int l = k; l<j+1; l++)
                printf("%c",str[l]);
            k = j+1;
            printf("\n");
            }
            
            } 
    
    
    return 0;
    }
