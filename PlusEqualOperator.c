#include <stdio.h>

int main(){
	int x = 1;
	int y = 2;

	x = y * x + 1; //arithmetic operations perfomed before assignment
	printf("\nThe value of x is: %d\n",x);

	x = 1;
	y = 2;
	
	x += y * x + 1; //arithmetic operations perfomed before assignment
	printf("the value of x is: %d\n",x);
}

