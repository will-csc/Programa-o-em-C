#include <stdio.h>

void main() {
    int iArray[5];
    int j = 0;

    for (int i = 10; i <= 50; i += 10) { // Loop ajustado para 5 iterações
        iArray[j] = i;
        printf("%d ", iArray[j]);
        j++;
    }
}