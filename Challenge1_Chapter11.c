#include <stdio.h>
#include <stdlib.h>

int main(){
    system("touch friends.dat");
    
    FILE *pWrite;
    int i = 0;
    char name[50];
    
    pWrite = fopen("friends.dat","w");
    
    for(i = 0; i < 3; i++){
        printf("Enter your %d's friend: ",i+1);
        scanf("%49s",name);
        
        fprintf(pWrite,"%s ",name);
    }
}