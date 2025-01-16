#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // Para malloc e free

typedef struct friends_contacts {
    int phone;
    char *name;
} fBook;

// Prototipação da função
void AddContact(fBook *fPhones, int max);

int main() {  // Corrigido de void main() para int main()
    fBook fPhones[5];  // Agora corretamente declarado
    int total_f;
    
    printf("How many friends are you adding? (5 is the maximum): ");
    scanf("%d", &total_f);
    
    if (total_f > 5 || total_f <= 0) {
        printf("Invalid number of friends.\n");
        return 1;
    }

    AddContact(fPhones, total_f);  // Chamada corrigida
    
    printf("\nContacts Added:\n");
    for (int i = 0; i < total_f; i++) {
        printf("Name: %s, Phone: %d\n", fPhones[i].name, fPhones[i].phone);
        free(fPhones[i].name);  // Libera a memória alocada
    }

    return 0;
}

void AddContact(fBook *fPhones, int max) {
    for (int i = 0; i < max; i++) {
        fPhones[i].name = (char *)malloc(50 * sizeof(char));  // Alocação corrigida
        if (fPhones[i].name == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }

        printf("Enter the %d° name: ", i + 1);
        scanf("%49s", fPhones[i].name);  // Limitação para evitar buffer overflow

        printf("Enter the phone number for %s: ", fPhones[i].name);
        scanf("%d", &fPhones[i].phone);
    }
}
