#include <stdio.h>
#include <stdlib.h>

int main(){
    char *name = (char *) malloc(80); //Type cast to malloc to char
                                      //Reserves 80 bytes in memory, and
                                      //return a memory address
    
    printf("%p",name); //Address
    printf("\n%s",*name); //value
}