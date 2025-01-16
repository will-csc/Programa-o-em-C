#include <stdio.h>

typedef struct Car{
    char *make;
    char *model;
    int year;
    int miles;
} carro;

void main(){
    carro MyCar;
    MyCar.make = "15km";
    MyCar.model = "Subaru";
    MyCar.year = 2025;
    MyCar.miles = 0;
    
    printf("Your car model is %s, he makes %s, his year is %d and his total km is %d",MyCar.make,MyCar.model,MyCar.year,MyCar.miles);
}