#include <stdio.h>
#include <stdbool.h>

bool running = true;

void getMultiplyof(void);

void main(){
	do{
		char option;

		printf("\n\nDo you wanna get a multiply table of a number?: (y/n) ");
		scanf(" %c",&option);

		if(option == 'y'){
			getMultiplyof();
		}else{
			running = false;
		}
	}while(running);
	printf("\nExiting the executable...");
}
void getMultiplyof(){
	int number;
	char running_option;

	printf("\nType a number to get the multiply table: ");
	scanf("%d",&number);
	
	for(int i = 1; i <= 10; i++){
		printf("\n%d x %d = %d",number,i,number * i);
	}
}


