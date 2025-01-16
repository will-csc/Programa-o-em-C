#include <stdlib.h>
#include <stdio.h>

void main(){
    char *str1 = "37";
    char *str2 = "20";
    
    int iResult = atoi(str1) + atoi(str2);
    
    printf("\nString 1 + String 2 is: %d\n",iResult);
}