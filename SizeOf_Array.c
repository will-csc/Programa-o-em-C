#include <stdio.h>

int main(){
    int array[11];
    
     printf("\nSize of int: %d bytes",sizeof(int));
    printf("\nSize of array: %d bytes\n", sizeof(array));
    printf("Number of elements in array ");
    printf("%d\n", sizeof(array) / sizeof(int));
}