#include<stdio.h>

int main(){
    int marks[5][4]={{9,6,7,8}, {8, 8, 8, 8}, {6, 7, 5, 7}, {7, 7, 8, 7}, {10, 9, 10, 9}};
    double avg[5] = {0};
    
    for(int i = 0; i< 5; i++){
        for(int j = 0; j<4; j++){
            avg[i] += marks[i][j];
            }
            avg[i] = avg[i]/4;
            if(avg[i] >= 9)
                printf(" Grade of roll no. 202300%d is AA\n",i+1);
            else if(avg[i] >=8 && avg[i] <9)
                printf(" Grade of roll no. 202300%d is AB\n",i+1);
            else if(avg[i] >=7 && avg[i] <8)
                printf(" Grade of roll no. 202300%d is BB\n",i+1);
            else if(avg[i] >=6 && avg[i] <7)
                printf(" Grade of roll no. 202300%d is BC\n",i+1);
            else if(avg[i] >=5 && avg[i] <6)
                printf(" Grade of roll no. 202300%d is CC\n",i+1);
            else if(avg[i] >=4 && avg[i] <5)
                printf(" Grade of roll no. 202300%d is CD\n",i+1);
            else if(avg[i] >=3 && avg[i] <4)
                printf(" Grade of roll no. 202300%d is DD\n",i+1);
            else
                printf(" Grade of roll no. 202300%d is F\n",i+1);    
            }
            return 0;
            }
            
            
      
    
