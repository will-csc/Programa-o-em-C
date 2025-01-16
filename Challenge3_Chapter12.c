#include <stdio.h>

#define REVENUE(p,q) (p * q)

int main(){
    float price;
    int qtd;
    
    printf("Enter a price: ");
    scanf("%f",&price);
    printf("Enter a quantity: ");
    scanf("%d",&qtd);
    
    printf("The total revenue was: %.2f",REVENUE(price,qtd));
}