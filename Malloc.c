#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    
    p = malloc(4); //Reserves an space in memory
    *p = 5;
    
    printf("%p",p); //Memory address
    printf("\n%d",*p); //Value
    
    return 0;
}