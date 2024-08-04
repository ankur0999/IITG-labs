#include<stdio.h>
#include<math.h>

typedef struct point{
    float x, y;
    }point;
    
float distance(point base, point p){
    return sqrt(pow(base.x - p.x,2) + pow(base.y - p.y,2));
    }
    
    int main(){
        printf("Enter the number of points you wanted: ");
        int n;
        scanf("%d",&n);
        float Arr[n];
        point base, n_points[n];
        printf("Enter coordinates of base point: ");
        scanf("%f %f",&base.x,&base.y);
        printf("Enter %d coordinates: \n",n);
        for(int i=0; i<n; i++){
            scanf("%f %f",&n_points[i].x,&n_points[i].y);
            Arr[i] = distance(base, n_points[i]);
            }
       int max = 0;
       for(int i=1; i<n; i++)
           if(Arr[max] < Arr[i])
               max = i;
               
        printf(" So the %d points  (%.2f, %.2f) is the farthest point from the base point (%.2f, %.2f) \n",max+1, n_points[max].x, n_points[max].y,base.x,base.y);
        }
            
