#include <stdio.h>

void main(){
	int x = 5;
	int *iPtr;

	iPtr = &x; //iPtr is assigned the address of x
	printf("The address value is: %p\nThe current value is: %d\n",iPtr,x);

	*iPtr = 7; //The value of x is indirectly change to 7;
	printf("\nThe address value is: %p\nThe value after the change is: %d\n",iPtr,x);
}
