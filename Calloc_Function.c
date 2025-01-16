#include <stdio.h>
#include <stdlib.h>

int main(){
	int *numbers;

	numbers = (int *) calloc(10,sizeof(int));

	if(numbers == NULL){
		//return something
	}
	printf("Memory address: %p",numbers);
}
