#include <stdio.h>
#include <string.h>

void main(){
    typedef struct girlfriend{
        char name[15];
        char boyfriend[15];
        int age;
    } girlf;
    
    
    girlf girl = {0,0,0};
    girlf *ptrgirl;
    
    ptrgirl = &girl;
    
    strcpy(ptrgirl->name,"Tamiles");
    strcpy(ptrgirl->boyfriend,"William");
    ptrgirl->age = 18;
    
    printf("\nThe name of your girlfriend is: %s",girl.name);
    printf("\nYour girlfriend's boyfriend name is: %s",girl.boyfriend);
    printf("\nThe age of your girlfriend is: %d",girl.age);
}
