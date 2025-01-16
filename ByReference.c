#include <stdio.h>

void demoPassByReference(int *); // Demands a pointer

void main(){
	int x = 0;

	printf("\nEnter a number: ");
	scanf("%d", &x);
	
	printf("\nThe original value of x is: %d\n",x);
	demoPassByReference(&x);
}
void demoPassByReference(int *ptrX){
	*ptrX += 5;
	printf("\nThe value of x is now: %d\n", *ptrX);
}
	
