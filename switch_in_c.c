#include <stdio.h>

int main(){
	int iResponse;
	printf("Choose a number between 1 and 3\n");
	scanf("%d",&iResponse);

	switch(iResponse){
		case 1:
			printf("\nYou typed 1\n");
			break;
		case 2:
			printf("\nYou typed 2\n");
			break;
		case 3:
			printf("\nYou typed 3\n");
			break;
		default:
			printf("\nInvalid number!\n");
			break;
		}
}
