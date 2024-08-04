#include<stdio.h>
#include<stdlib.h>

void is_palindrome(char *str){
    int start = 0,i,end;
    for( i = 0;str[i] != '\0'; i++);
    end = i-1;
    
    while(start < end){
        if(str[start] != str[end]){
            printf("Given string is not Palindrome\n");
            return;
       }
       start++;
       end--;
       }
       printf("Given string is Palindrome.\n");
       }
       

int main(){
    printf("Enter a word: ");
    char str[20];
    scanf("%s",str);
    is_palindrome(str);
    return 0;
    }
     
    
