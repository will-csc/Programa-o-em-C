#include <stdio.h>

int main(){
    FILE *pRead;
    char name[10];
    char hobby[10];

    pRead = fopen("file1.txt", "r");

    if(pRead == NULL){
        printf("\nFile cannot be opened\n");
    }else{
        printf("\nName\tHobby\n\n");
        
        // Use fscanf para ler do arquivo corretamente
        fscanf(pRead, "%s%s", name, hobby);

        while(!feof(pRead)){
            printf("%s\t%s\n", name, hobby);
            fscanf(pRead, "%s%s", name, hobby);
        }
        
        fclose(pRead); // Fechar o arquivo após a leitura
    }
    
    return 0;
}

