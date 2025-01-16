#include <stdio.h>

// Prototipando a função para evitar erro de compilação
void option_program(int *ptrX);

void main() {
    int x;
    int *ptrX = &x;

    printf("Enter one value for x: ");
    scanf("%d", &x);

    option_program(ptrX); // Passa o ponteiro para a função
}

void option_program(int *ptrX) {
    int option = 0; // Opção escolhida pelo usuário
    int value;

    printf("\nEnter one of the following options: ");
    printf("\n1 - Enter New Integer Value");
    printf("\n2 - Print Pointer Address");
    printf("\n3 - Print Integer Address");
    printf("\n4 - Print Integer Value\n");
    scanf("%d", &option);

    switch (option) {
        case 1: // Inserir novo valor para o inteiro
            printf("\nEnter one value: ");
            scanf("%d", &value);
            *ptrX = value; // Atualiza o valor de x via ponteiro
            break;

        case 2: // Imprimir o endereço do ponteiro
            printf("\nPointer Address: %p\n", ptrX);
            break;

        case 3: // Imprimir o endereço do inteiro
            printf("\nInteger Address: %p\n", &(*ptrX));
            break;

        case 4: // Imprimir o valor do inteiro
            printf("\nInteger Value: %d\n", *ptrX);
            break;

        default: // Caso o usuário insira uma opção inválida
            printf("\nInvalid option.\n");
            break;
    }
}
