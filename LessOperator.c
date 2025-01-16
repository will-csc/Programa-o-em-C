#include <stdio.h>

int main(){
	int x = 1;
	int y = 1;

	x = y-- * 4;

	printf("\nThe value of x is %d\n",x);

	y = 1; //reset variable value for demonstration purposes
	x = --y * 4;

	printf("\nThe value of x is now %d\n",x);
}
