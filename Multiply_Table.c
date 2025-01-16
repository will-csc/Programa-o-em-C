#include <stdio.h>

void main(){
    int iArray[9];
    int number;
    
    //Multiply table
    printf("Type a number to get the multiple table: ");
    scanf("%d",&number);
    
    for(int x = 1;x < 11;x++){
        iArray[x-1] = number * x;
    }
    
    //Showing the multiply table
    printf("The multiply table of %d:\n",number);
    for(int x = 0;x < 10;x++){
        printf("\n%d x %d = %d",number,x+1,iArray[x]);
    }
}