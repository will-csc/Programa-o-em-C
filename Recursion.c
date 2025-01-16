#include <stdio.h>
#include <math.h>

int exponencialnumber(int);

void main(){
	int number;

	printf("Type a number to return his exponencial!:\n");
	scanf("%d",&number);
	printf("The exponencial number is: %d",exponencialnumber(number));
}
int exponencialnumber(int number){
	if(number == 1 || number ==0){
		return number;
	}else{
		return exponencialnumber(number-1) * number;
	}
}

