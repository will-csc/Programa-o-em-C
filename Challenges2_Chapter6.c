#include <stdio.h>

void calc_avarage(float arr[], int size);

int main() {
    float gpa;
    float total_gpa[10];
    char option;

    for (int i = 0; i < 10; i++) { // Limitar o loop ao tamanho do array
        printf("Enter GPA %d: ", i + 1);
        scanf("%f", &gpa); // Use %f para float
        total_gpa[i] = gpa;

        printf("Do you want to calculate the current average? (y/n): ");
        scanf(" %c", &option);

        if (option == 'y') {
            calc_avarage(total_gpa, i + 1); // Envia o número de elementos atuais
        }
    }

    return 0;
}

void calc_avarage(float arr[], int size) {
    float sum = 0.0; // Inicializar a soma em 0.0

    for (int i = 0; i < size; i++) { // Use índice 0 baseado
        sum += arr[i]; // Adiciona os elementos do array à soma
    }

    float average = sum / size; // Calcula a média
    printf("The average of the current GPA notes is: %.2f\n", average);
}
