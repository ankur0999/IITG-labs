#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
    double a= atof(argv[1]), b = atof(argv[3]);
  char* exp = argv[2];
    //printf("%s",argv[2]);
    char exp1 = exp[0];
    switch(exp1){
    
    case '+': printf("%.3f\n",a+b);
        break;
    case '-': printf("%.3f\n",a-b);
        break;
    case '*': printf("%.3f\n",a*b);
        break;
    case '/': printf("%.3f\n",a/b);
        break;
        }
        }
    
        
    
