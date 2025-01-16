#include <stdio.h>
#include "profit.h"

main(){
    float price, totalCost;
    int quantity;
    
    printf("\nThe Profit Program\n");
    
    printf("\nEnter unit price: ");
    scanf("%f", &price);
    
    printf("Enter quantity sold: ");
    scanf("%d", &quantity);
    
    printf("Enter total cost: ");
    scanf("%f", &totalCost);
    
    profit(price,quantity,totalCost);
} //end main