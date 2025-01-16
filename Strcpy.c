#include <stdio.h>
#include <string.h>

void main(){
    char str1[11] = "William";
    char *str2 = "C Language";
    
    printf("\nString 1 now contains: %s\n",strcpy(str1, str2));
}