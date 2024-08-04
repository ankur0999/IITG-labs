#include<stdio.h>
#include<math.h>

enum shape{
    Circle,
    Rectangle,
    Triangle
    };

int main(){
    int shape;
    printf("Enter shape (Circle: 0, Rectangle: 1, Triangle: 2) : ");
    scanf("%d",&shape);
    switch(shape){
    case 0:
        float r;
        printf("Enter Radius of Circle: ");
        scanf("%f", &r);
        printf("Area is %.2f\n",3.14*r*r);
        break;
    case 1: 
        float len, bre;
        printf("Enter Diamention of Rectangle: ");
        scanf("%f %f",&len,&bre);
        printf("Area is %.2f\n", len*bre);
        break;
    case 2: 
        float s1, s2, s3,s;
        printf("Enter side length of Triangle: ");
        scanf("%f %f %f",&s1,&s2,&s3);
        if(s1 > (s2 + s3) || s2 > (s1 + s3) || s3 > (s1 + s2))
            printf("You have Entered wrong input\n");
        else{
            
        s = (s1 + s2 + s3)/2;
        printf("Area is %.2f\n",sqrt(s*(s-s1)*(s-s2)*(s-s3)));
        break;
        }
        }
        } 
