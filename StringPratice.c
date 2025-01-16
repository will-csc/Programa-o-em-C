#include <stdio.h>

void main(){
	char nome[9] = "william\0";
	char *nome2 = "tamiles";

	printf("Using the array type: ");
	int i = 0;
	for(i = 0; i <= 7; i++){
		printf("%c",nome[i]);
	}
	
	printf("\nUsing the pointer: %s",nome2);
}
