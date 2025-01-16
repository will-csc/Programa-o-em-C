#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    
    long int len = strlen(name);
    printf("\nThe length of the name is: %ld", len);
    
    int i = 0;
    printf("\nYour name in upper case is: ");
    for(i = 0; i <= len; i++){
        printf("%c",toupper(name[i]));
    };
}
