#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RollDice(int try){
	int iRandomNum = (rand() % 10) + 1;
	printf("The number you get on your %d try is: %d\n",try,iRandomNum);
	return iRandomNum;
}
int main(){
	int TryOne;
	int TryTwo;

	// Inicializando o gerador de números aleatórios com base no tempo
    	srand(time(NULL));

	printf("Rolling the dice!!\n");
	TryOne = RollDice(1);
	TryTwo = RollDice(2);
	
	if ((TryOne + TryTwo) == 7 ||(TryOne + TryTwo) == 11){
		printf("You won!");
	}
}
