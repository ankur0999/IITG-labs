#include<stdio.h>
#include<string.h>
#include<ctype.h>

void count(char* str){
    int character=0, words = 0,i=0;
    while(str[i] != '\0'){
        if(str[i] != ' ' && str[i+1] == ' ')
            words++;
        if(str[i] != ' ')
            character++;
        if(str[i] != ' ' && str[i+1] == '\0')
            words++;
        i++;
        }
        printf("total character is %d\n",character);
        printf("total words is %d\n",words);
        }
            

int  main(){
    char str[1000];
    printf("Enter string: ");
    scanf("%[^\n]%*c",str);
    //int i=0;
    /*for(i=0; str[i] != '\0'; i++);
    long int size = i;*/
    //printf("%ld\n",size);
    count(str);
    return 0;
    }
    
