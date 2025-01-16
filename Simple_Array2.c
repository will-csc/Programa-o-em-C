#include <stdio.h>

void main(){
    int x,index;
    int iArray[5];
    
    for(x = 0;x < 5; x++){
        iArray[x] = x*2;
    }
    
    printf("Type a index for see the value in array number: ");
    scanf("%d",&index);
    int result = iArray[index];
    printf("The result in the %d index was: %d",index,result);
}