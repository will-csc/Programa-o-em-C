#include <stdio.h>

void teste_memoria(int *x);

int main(){
    int x;
    float f;
    double d;
    char c;
    
    typedef struct employee{
        int id;
        char *name;
        float salary;
    } e;
    
    printf("\nSize of integer: %d bytes\n", sizeof(x));
    printf("Size of float: %d bytes\n", sizeof(f));
    printf("Size of double %d bytes\n", sizeof(d));
    printf("Size of char %d byte\n", sizeof(c));
    printf("Size of employee structure: %d bytes\n", sizeof(e));
}