#include <stdio.h>

void main(){
	int iAge = 30;
	int *ptrAge = &iAge;

	printf("Using the variable 'iAge': %d\n",iAge);
	printf("The memory address of 'iAge' is: %p\n",ptrAge);
	printf("The value using the pointer: %d\n",*ptrAge);
}
