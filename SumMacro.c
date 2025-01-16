#include <stdio.h>

#define RESULT(x,y) (printf("\nResult is %d\n",x+y))
//We can pass another C function to preprocessor

int main(){
    int n1,n2;
    
    printf("Enter a number: ");
    scanf("%d",&n1);
    printf("Enter another number: ");
    scanf("%d",&n2);
    
    RESULT(n1,n2);
}