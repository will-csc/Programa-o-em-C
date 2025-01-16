#include <stdio.h>

typedef struct Car{
    char *make;
    char *model;
    int year;
    int miles;
} carro;

void main(){
    carro MyCars[3] = {0};
    
    int i;
    for(i = 0; i < 3; i++){
        printf("\nEnter the make of your car %d: ",i+1);
        scanf("%s",&MyCars[i].make);
        
        printf("Enter the model of your car %d: ",i+1);
        scanf("%s",&MyCars[i].model);
        
        printf("Enter the year of your car %d: ",i+1);
        scanf("%d",&MyCars[i].year);
        
        printf("Enter the miles of your car %d: ",i+1);
        scanf("%d",&MyCars[i].miles);
    }
}