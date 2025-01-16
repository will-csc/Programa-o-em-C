#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

typedef struct deck {
    char type[10];
    char used;
    int value;
} aDeck;

void shuffle(aDeck *thisDeck);

int main() {  // Alterado de void main() para int main() (padrão correto)
    int x, y;
    aDeck myDeck[52];
    
    srand(time(NULL));

    // Preenchendo o baralho corretamente
    for (x = 0; x < 4; x++) {
        for (y = 0; y < 13; y++) {
            switch (x) {
                case 0:
                    strcpy(myDeck[y].type, "diamonds");
                    break;
                case 1:
                    strcpy(myDeck[y + 13].type, "clubs");
                    break;
                case 2:
                    strcpy(myDeck[y + 26].type, "hearts");
                    break;
                case 3:
                    strcpy(myDeck[y + 39].type, "spades");
                    break;
            }
            myDeck[y + (x * 13)].value = y;
            myDeck[y + (x * 13)].used = 'n';
        }
    }

    // Chamar a função shuffle
    shuffle(myDeck);
    
    return 0;  // Correção de padrão para retorno de int main()
}

void shuffle(aDeck *thisDeck) {
    int iRnd;
    int found = 0;

    system("clear");  // Pode ser "cls" se estiver usando Windows
    printf("\nYour five cards are: \n\n");

    while (found < 5) {
        iRnd = rand() % 52;  // Corrigido de 51 para 52 (baralho completo)

        // Evitar repetir cartas já usadas
        if (thisDeck[iRnd].used == 'n') {
            switch (thisDeck[iRnd].value) {  
                case 12:
                    printf("Ace of %s\n", thisDeck[iRnd].type);
                    break;
                case 11:
                    printf("King of %s\n", thisDeck[iRnd].type);
                    break;
                case 10:
                    printf("Queen of %s\n", thisDeck[iRnd].type);
                    break;
                case 9:
                    printf("Jack of %s\n", thisDeck[iRnd].type);
                    break;
                default:
                    printf("%d of %s\n", thisDeck[iRnd].value + 2, thisDeck[iRnd].type);
                    break;
            }
            thisDeck[iRnd].used = 'y';
            found++;
        }
    }
}
