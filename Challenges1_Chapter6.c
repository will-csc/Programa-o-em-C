#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSortAsc(int arr[], int size, int i) {
    if (i == size - 1)
        return;
    
    for (int j = 0; j < size - i - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            // Troca os elementos
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
    bubbleSortAsc(arr, size, i + 1);
}

void bubbleSortDesc(int arr[], int size, int i) {
    if (i == size - 1)
        return;
    
    for (int j = 0; j < size - i - 1; j++) {
        if (arr[j] < arr[j + 1]) {
            // Troca os elementos
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
    bubbleSortDesc(arr, size, i + 1);
}

int main() {
    int arr[10];
    int option;

    // Entrada dos números
    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Menu de opções
    printf("\nEscolha uma opção para ordenar os números:\n");
    printf("1. Ordenar em ordem crescente\n");
    printf("2. Ordenar em ordem decrescente\n");
    printf("Opção: ");
    scanf("%d", &option);

    // Execução com base na escolha
    switch (option) {
        case 1:
            bubbleSortAsc(arr, 10, 0);
            printf("Números em ordem crescente: ");
            break;
        case 2:
            bubbleSortDesc(arr, 10, 0);
            printf("Números em ordem decrescente: ");
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    // Impressão do resultado
    printArray(arr, 10);

    return 0;
}
