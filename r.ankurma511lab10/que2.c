#include<stdio.h>
#include<string.h>
#include<ctype.h>



int main(){
    printf("Enter a string: ");
    char str[50], word[10];
    scanf("%[^\n]%*c",str);
    printf("Enter a word: ");
    scanf("%[^\n]%*c",word);
    
    char str1[50], word1[10];
    
    int stringlen = strlen(str);
    int wordlen = strlen(word);
    for(int i =0 ;i<stringlen; i++)
        str1[i] = tolower(str[i]);
    for(int i=0; i<wordlen; i++)
        word1[i] = tolower(word[i]);
    printf("substring found at index ");
    int i = 0, j, start, flag;
    for(i=0;i<stringlen;i++){
        flag = 0;
        start = i;
        for(j=0; word1[j] == str1[i]; i++, j++)
            if(j == wordlen - 1)
                flag = 1;
        if(flag == 0)
            i -= j;
        else
            printf("%d ",start);
            }
            printf("\n");
}
