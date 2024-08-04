#include<stdio.h>

enum Months{
    January=1,
    February,
    March,
    April,
    May,
    June,
    July,
    Agust,
    September,
    October,
    November,
    December
    };
   
int main(){
    int Months;
     Months = January;
    printf("Enter Months: ");
    scanf("%d",&Months);
    switch(Months){
    
    case April:
    case June:
    case September:
    case November:
        printf("30\n");
        break;
    case February:
        printf("28\n");
        break;
    default:
        printf("31\n");
        break;
        }
   
    }
