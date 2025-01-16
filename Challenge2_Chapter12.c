#include <stdio.h>

#define PERIMETER(l,w) ((l * 2) + (w * 2))

int main(){
    int len,width;
    
    printf("Enter a length: ");
    scanf("%d",&len);
    printf("Enter a width: ");
    scanf("%d",&width);
    
    int perimeter = PERIMETER(len,width);
    printf("\nThe perimeter of the rectangle is: %d",perimeter);
}