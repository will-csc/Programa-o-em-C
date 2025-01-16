#include <stdio.h>

void main(){
	int x = 1;
	int *iPtr;

	iPtr = &x;
	printf("The value of the expression 'iPtr = &x' is: %p\n",iPtr);

	*iPtr = 5;
	printf("The value of the expression '*iPtr = 5'\n(which changes the value of 'x') is: %d",*iPtr);
}
