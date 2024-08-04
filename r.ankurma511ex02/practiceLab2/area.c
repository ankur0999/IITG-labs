#include<stdio.h>
#include<math.h>
float area(float x,float y, float z){
    float s;
    s = (x + y + z)/2;
    
    return (sqrt(s*(s-x)*(s-y)*(s-z)));
    }
