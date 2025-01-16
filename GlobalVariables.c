#include <stdio.h>

void printLuckyNumbers();

int iLuckyNumbers;

void main() {
    printf("\nEnter your lucky number: ");
    scanf("%d", &iLuckyNumbers);  // Passa o endereço de memória para o scanf
    printLuckyNumbers();
}

void printLuckyNumbers() {
    printf("\nYour lucky number is: %d\n", iLuckyNumbers);  // Use apenas a variável
}

