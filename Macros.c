#include <stdio.h>
#define AREA(l,w) (l*w)
// "(l,w)" means the arguments the macro will receive
// "(l * w)" means what the macro will do

int main(){
    int length = 0;
    int width = 0;
    
    printf("\nEnter length: ");
    scanf("%d",&length);
    printf("\nEnter width: ");
    scanf("%d",&width);
    
    printf("\nArea of rectangle = %d\n", AREA(length,width));
}