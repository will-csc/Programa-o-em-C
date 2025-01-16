#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pRead;
    char name[10];
    char hobby[15];
    
    pRead = fopen("file1.txt","w");
    fprintf(pRead, "%s %s\n", "william", "programming");
    fclose(pRead);

    if(pRead == NULL){
        goto ErrorHandle;
    }else{
        char all[50];
        pRead = fopen("file1.txt","r");
        
        while(!feof(pRead)){
            printf("%s\t%s\n",name,hobby);
            fscanf(pRead,"%s%s",name,hobby);
        }
    }
    
    exit(EXIT_SUCCESS);
    
    ErrorHandle:
        perror("The following error occurred");
        exit(EXIT_SUCCESS);
}