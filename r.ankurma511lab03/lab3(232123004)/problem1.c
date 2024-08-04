#include<stdio.h>
int main(void){
   int c;
   while((c = getchar()) != EOF)
   {   
       if(c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
       printf("vowel\n");
       
       else if(c >= 'B' && c <='z')
          printf("consonant\n");
          }
     return 0;
         } 
       
