#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void frequency(char* str){
    //char** words = (char**)malloc(30*sizeof(char));
    //for(int i=0; i<30; i++)
    //    *(words + i) = (char*)malloc(20*sizeof(char));
    char* words[100];
    int wordsCount[100] = {0};
    //char* delim = " ,.";
    char* token = strtok(str," ");
    int count = 0;
    //printf("%d",count);
    while(token != "\0"){
        words[count] = token;
        count++;
         token = strtok(str," ");
        }
        printf("%d",count);
   for(int i=0; i< count; i++){
        if(words[i] != " "){
        for(int j =i; j<count; j++){
            if(strcmp(words[i], words[j]) == 0){
                ++wordsCount[i];
                words[j] = " ";
                }
                }
                }
                }
                
    for(int i = 0; i<count; i++){
        if(words[i] != " ")
        printf("%s: %d\n",words[i],wordsCount[i]);    
        }  }          

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    printf("%s",str);
    frequency(str);
    }
    
