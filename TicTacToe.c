#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Declaração de variáveis globais
char board[3][3]; // Tabuleiro 3x3
char User_Player;

// Protótipos das funções
void PlayTicTacToe(void);
void DisplayBoard(void);
void UserTime(void);
void MachineTime(void);
bool GameOver(void);

void main() {
    char option;

    do {
        printf("Do you want to play tic tac toe? (y/n): ");
        scanf(" %c", &option); // Espaço antes de %c para ignorar caracteres anteriores no buffer
        if (option == 'y') {
            PlayTicTacToe();
        } else if (option == 'n') {
            printf("\nExiting the game...\n");
        } else {
            printf("Invalid option! Please choose 'y' or 'n'.\n");
        }
    } while (option != 'n');
}

void PlayTicTacToe() {
    bool GameRunning = true;

    // Inicializar o tabuleiro vazio
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }

    DisplayBoard();
    printf("What's your player? (Choose 'X' or 'O'): ");
    scanf(" %c", &User_Player); // Espaço antes de %c para ignorar caracteres no buffer

    do {
        UserTime();
        DisplayBoard();
        if (GameOver()) {
            printf("You win!\n");
            break;
        }

        MachineTime();
        DisplayBoard();
        if (GameOver()) {
            printf("Machine wins!\n");
            break;
        }
    } while (GameRunning);
}

bool GameOver() {
    // Verificar linhas e colunas
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
            return true; // Linha completa
        }
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return true; // Coluna completa
        }
    }

    // Verificar diagonais
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return true; // Diagonal principal
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return true; // Diagonal secundária
    }

    // Verificar empate
    bool full = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                full = false;
                break;
            }
        }
    }
    if (full) {
        printf("It's a draw!\n");
        return true;
    }

    return false;
}

void UserTime() {
    int x, y;

    printf("Choose a position to occupy (Row and Column): ");
    scanf("%d %d", &x, &y);
    x--; // Ajustar para índice da matriz
    y--;

    if (x >= 0 && x < 3 && y >= 0 && y < 3 && board[x][y] == ' ') {
        board[x][y] = User_Player;
    } else {
        printf("Invalid move! Try again.\n");
        UserTime(); // Repetir até entrada válida
    }
}

void MachineTime() {
    char MachineOption = (User_Player == 'X') ? 'O' : 'X';

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                board[i][j] = MachineOption;
                return;
            }
        }
    }
}

void DisplayBoard() {
    system("clear"); // Limpar o terminal (use "cls" no Windows)
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

