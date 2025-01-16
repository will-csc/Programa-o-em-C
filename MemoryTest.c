#include <stdio.h>

void teste_memoria(int *x);

int main(){
    int x = 3;
    int y = 4;
    teste_memoria(&x);
    
    printf("\nTestando a variavel 'x': %d",x);
    printf("\nTestando a variavel 'y': %d",y);
}
void teste_memoria(int *x){
    *x = 12;
    printf("\n%d",*x);
}