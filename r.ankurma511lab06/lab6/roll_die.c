#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int roll_die(void){
    
    int z = rand();
    return (z%6 + 1);
    }    
