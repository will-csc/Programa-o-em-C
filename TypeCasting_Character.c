#include <stdio.h>

void main(){
    int number;
    printf("\nEnter a number value: ");
    scanf("%d",&number);
    
    char letter;
    printf("\nEnter a character: ");
    scanf(" %c",&letter);
    
    printf("\n%d type-casted to char is: %c\n",number,(char) number);
    printf("\n'%c' type-casted to number is: %d\n",letter,(int) letter);
}
