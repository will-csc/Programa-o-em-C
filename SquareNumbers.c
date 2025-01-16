#include <stdio.h>

void squareNumbers(int []);

void main(){
	int x;
	int iNumbers[3] = {2,4,6};

	printf("\nThe current array values are: ");

	for(x = 0; x < 3; x++){
		printf("%d ",iNumbers[x]);
	}
	printf("\n");

	squareNumbers(iNumbers);

	printf("\nThe modified array values are: ");
	for(x = 0; x < 3; x++){
		printf("%d ", iNumbers[x]);
	}
	printf("\n");
}

void squareNumbers(int num[]){
	int x;

	for(x = 0; x < 3; x ++){
		num[x] = num[x] * num[x];
	}
}
