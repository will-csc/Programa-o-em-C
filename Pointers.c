#include <stdio.h>

void main(){
	int x = 10;
	int *iPtr = &x;

	printf("The 'x' variable has the value of: %d\n",x);
	printf("The 'iPtr' has the memory address of: %p\n",iPtr);
	printf("The '*iPtr' has the value of: %d\n",*iPtr);

	//Changing the value of iPtr
	*iPtr = 15;
	printf("The value after chaging the value of '*iPtr': %d\n",*iPtr);
}
