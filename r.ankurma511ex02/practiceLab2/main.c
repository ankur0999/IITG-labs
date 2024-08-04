#include<stdio.h>
#include "myHeader.h"

float a, b, c;
int main(){
printf("Enter sides of triangle: ");
scanf("%f %f %f",&a, &b, &c);

printf("Area: %.3f\nPerimeter: %.3f\n",area(a,b,c),peri(a,b,c));
return 0;
}
