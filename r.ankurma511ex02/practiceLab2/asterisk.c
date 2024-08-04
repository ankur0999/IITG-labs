#include<stdio.h>
int f(void);
int main(){
    int l;
    printf("Enter no. of lines of asterisks that you want:");
    scanf("%d",&l);
    for(int i=0;i<l;i++)
    f();
    return 0;
    }
    
int f(void){
    static int n=1;
    int j;
    for(j=0;j<n;++j)
    {
        printf("* ");
        }
        printf("\n");
        n++;
        return n;
        }

