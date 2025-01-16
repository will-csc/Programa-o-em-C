#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	int iRandomNum = (rand() % 10) + 1;
	int iUserNum;
	int validation;
	
	printf("Type a number between 1 and 10\n");
	scanf("%d",&iUserNum);

	if (!isdigit(iUserNum)){
		if(iUserNum == iRandomNum){
			printf("You guessed right!");
		}else{
			printf("You guessed wrong!");
			printf("The right number is: %d",iRandomNum);
		}
	}else{
		printf("You do not typed a number!");
	}
}
