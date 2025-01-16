#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Protótipo da função TossDice
void TossDice(int arr[], int index);

int main() {
    int x;
    int arr[6] = {0}; // Inicializar o array com zeros

    printf("How many times do you want to toss the dice? (max 6): ");
    scanf("%d", &x);

    if (x > 6) {
        printf("You can only toss the dice up to 6 times.\n");
        return 1; // Encerrar o programa com código de erro
    }

    srand(time(NULL)); // Inicializar o gerador de números aleatórios

    for (int i = 0; i < x; i++) {
        TossDice(arr, i);
    }

    printf("\nResults:\n");
    for (int i = 0; i < x; i++) {
        printf("Toss %d: %d\n", i + 1, arr[i]);
    }

    return 0;
}

void TossDice(int arr[], int index) {
    int iRand = (rand() % 6) + 1;
    arr[index] = iRand;
}

