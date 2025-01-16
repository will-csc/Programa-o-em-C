#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct phoneBook{
    char *sName;
    long long iPhone;
} Bookp;

void printBook(Bookp *book[]);
void AddPhone(Bookp *book[]);

int main(){
    Bookp *phoneBook[20] = {NULL};
    int option = 0;
    
    while (option != 3){
        printf("\n\nChoose an option: \n");
        printf("1 - Add Contact\n");
        printf("2 - Print Contact\n");
        printf("3 - Exit\n\n");
        scanf("%d",&option);
        
        switch (option){
            case 1:
                AddPhone(phoneBook);
                break;
            case 2:
                printBook(phoneBook);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid option\n");
        }
    }

    return 0;
}
void AddPhone(Bookp *book[]){
    int i = 0;
    char name[50];
    long long phone;
    
    while(book[i] && i < 20){
        i++;
    }
    if (i == 20) {
        printf("Phonebook is full!\n");
        return;
    }
    
    // Alocando memória para a estrutura do contato
    book[i] = (Bookp *)malloc(sizeof(Bookp));  
    if (book[i] == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter a name: ");
    scanf("%s",name);
    printf("Enter the %s's phone: ",name);
    scanf("%lld",&phone);
    
    // Alocando memória para o nome e copiando
    book[i]->sName = (char *)malloc(strlen(name) + 1);  
    if (book[i]->sName == NULL) {
        printf("Memory allocation for name failed!\n");
        return;
    }
    
    strcpy(book[i]->sName, name);  // Copiando o nome para a memória alocada
    book[i]->iPhone = phone;  // Atribuindo o telefone 
}
void printBook(Bookp *book[]){
    int i = 0;

    // Imprimindo os contatos
    while (book[i] != NULL && i < 20) {
        printf("Contact %d: %s, %lld\n", i + 1, book[i]->sName, book[i]->iPhone);
        i++;
    }

    if (i == 0) {
        printf("No contacts to display.\n");
    }
}