#include<stdio.h>
#define FAHRENHEIT(i) i
#define CONVERT(X) (X-32)*5/9


int main(){
    float celsius,fahrenheit;
    printf("Enter the Fahrenheit: ");
    scanf("%f",&fahrenheit);
    celsius = CONVERT(FAHRENHEIT(fahrenheit));
    printf("celsius: %.2f\n",celsius);
    return 0;
    }
