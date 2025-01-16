#include <stdio.h>

int addTwoNumbers(int,int);

void main(){
	int x = 0;
	int y = 0;

	printf("\nEnter the first number: ");
	scanf("%d",&x);
	printf("\nEnter the second number: ");
	scanf("%d",&y);

	printf("\nResult is %d\n",addTwoNumbers(x,y));
}

int addTwoNumbers(int x, int y){
	return x + y;
}

