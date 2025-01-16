#include <stdio.h>
#include <string.h>

void main(){
    typedef struct girlfriend{
        char name[15];
        char boyfriend[15];
        int age;
    } girlf;
    
    
    girlf tamiles = {0,0,0};
    girlf *ptrTami;
    
    ptrTami = &tamiles;
    
    strcpy(ptrTami->name,"Tamiles");
    strcpy(ptrTami->boyfriend,"William");
    ptrTami->age = 18;
    
    printf("\nThe name of your girlfriend is: %s",tamiles.name);
    printf("\nYour girlfriend's boyfriend name is: %s",tamiles.boyfriend);
    printf("\nThe age of your girlfriend is: %d",tamiles.age);
}