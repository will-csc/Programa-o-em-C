#include <stdio.h>
#include <stdlib.h>

void main(){
    char *str1 = "123.79";
    char *str2 = "55";
    
    float x;
    int y;
    
    printf("\nString 1 is \"%s\"\n", str1);
    printf("String 2 is \"%s\"\n", str2);
    
    x = atof(str1);
    y = atoi(str2);
    
    printf("\nString 1 converted to a float is %.2f\n", x);
    printf("String 2 converted to an integer is %d\n", y);
} //end main