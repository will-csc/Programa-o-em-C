#include <stdio.h>
#include <stdlib.h>

int main() {
    char *name;
    name = (char *) malloc(80 * sizeof(char)); // Aloca 80 bytes
    
    if(name != NULL){
       printf("\nEnter your name: ");
       fgets(name,sizeof(name),stdin);
       printf("\nHi %s\n",name);
    }
}