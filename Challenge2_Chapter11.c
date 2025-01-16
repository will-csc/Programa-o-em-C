#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pRead;
    int i;
    char name1[20],name2[20],name3[20];
    
    pRead = fopen("friends.dat","r");
    if(pRead == NULL){
        printf("Error with file reading...");
        goto HandleError;
    }
    while(!feof(pRead)){
        printf("%s\t%s\t%s\n",name1,name2,name3);
        fscanf(pRead,"%s%s%s",name1,name2,name3);
    }
    
    HandleError:
        return 1;
}