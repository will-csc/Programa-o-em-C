#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Funções declaradas e implementadas com nomes consistentes
int sportsQuestion(void);
int geographyQuestion(void);
void pause(int);

int giResponse = 0;

void main() {
    do {
        system("clear");
        printf("\n\tTHE TRIVIA GAME\n\n");
        printf("1\tSports\n");
        printf("2\tGeography\n");
        printf("3\tQuit\n");
        printf("\n\nEnter your selection: ");
        scanf("%d", &giResponse);

        switch (giResponse) {
            case 1:
                if (sportsQuestion() == 4) {
                    printf("\nCorrect!\n");
                } else {
                    printf("\nIncorrect\n");
                }
                pause(2);
                break;

            case 2:
                if (geographyQuestion() == 2) {
                    printf("\nCorrect!\n");
                } else {
                    printf("\nIncorrect\n");
                }
                pause(2);
                break;
        }
    } while (giResponse != 3);
}

int sportsQuestion(void) {
    int iAnswer = 0;

    system("clear");
    printf("\tSports Question\n");
    printf("\nWhat University did NFL star Deon Sanders attend? ");
    printf("\n\n1\tPensacola\n");
    printf("2\tTallahassee\n");
    printf("3\tJacksonville\n");
    printf("4\tMiami\n");
    printf("\nEnter your selection: ");
    scanf("%d", &iAnswer);
    return iAnswer;
}

int geographyQuestion(void) {
    int iAnswer = 0;

    system("clear");
    printf("\tGeography Question\n");
    printf("\nWhat is the capital of France?");
    printf("\n\n1\tBerlin\n");
    printf("2\tParis\n");
    printf("3\tRome\n");
    printf("4\tMadrid\n");
    printf("\nEnter your selection: ");
    scanf("%d", &iAnswer);
    return iAnswer;
}

void pause(int inNum) {
    int iCurrentTime = 0;
    int iElapsedTime = 0;
    iCurrentTime = time(NULL);
    do {
        iElapsedTime = time(NULL);
    } while ((iElapsedTime - iCurrentTime) < inNum);
}

