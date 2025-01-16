#include <stdio.h>

int main(){
	int x = 0;
	int y = 1;

	x = y++ * 2; //increments x after the assignment
	printf("\nThe value of x is: %d\n",x);

	x = 0;
	y = 1;

	x = ++y * 2; //increments x before the assignment
	printf("The value of x is: %d\n",x);
}
