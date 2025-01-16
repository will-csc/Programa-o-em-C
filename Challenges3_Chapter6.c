#include <stdio.h>
#include <string.h> // Necessário para usar strcpy

char arr_names[2][5][100]; // Array para armazenar até 5 nomes de até 99 caracteres

int main() {
    char name[100];   // Buffer para entrada de nome
    char option;      // Armazena 'y' ou 'n'

    // Entrada dos nomes
    for (int i = 0; i < 5; i++) {
        printf("Write the name of one of your friends, position %d:\n", i + 1);
        scanf("%s", name); // Lê um nome
        strcpy(arr_names[0][i], name); // Copia o nome para o array de nomes
    }

    // Verifica se o usuário deseja adicionar mais um nome
    printf("Do you want to enter another name? (y/n): ");
    scanf(" %c", &option); // Lê uma opção

    if (option == 'y') {
        printf("Write another name: ");
        scanf("%s", name); // Lê outro nome
        strcpy(arr_names[1][0], name); // Adiciona na segunda linha do array
    }

    // Exibe os nomes armazenados
    printf("\nThe names added so far are:\n");
    for (int i = 0; i < 2; i++) {           // Percorre as "linhas"
        for (int j = 0; j < 5; j++) {       // Percorre as "colunas"
            if (arr_names[i][j][0] != '\0') { // Verifica se há um nome válido
                printf("%s ", arr_names[i][j]);
            }
        }
    }

    return 0;
}

