#include <stdio.h>
#include <stdlib.h>

int main(){
	int *number;
	int *newNumber;
	int x;
	
	number = malloc(sizeof(int) * 5);

	if(number == NULL){
		printf("\nOut of memory!\n");
	}

	printf("\nOriginal memory:\n");
	for(x = 0; x < 5; x++){
		number[x] = x * 100;
		printf("number[%d] = %d\n",x,number[x]);
	}

	newNumber = realloc(number, 10 * sizeof(int));

	if(newNumber == NULL){
		printf("\nOut of memory!\n");
	}else{
		number = newNumber;
	}

	for(x = 5; x < 10; x++){
		number[x] = x * 100;
	}

	printf("\nExpanded memory:\n");
	for(x = 0; x < 10; x++){
		printf("number[%d] = %d\n",x,number[x]);
	}
	free(number);
}
