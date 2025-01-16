#include <stdio.h>

void main(){
	int iNumber = 10;
	int *iPtr = &iNumber;
	printf("\nThe memory address of 'iNumber' is: %p\nThe value is: %d",iPtr,*iPtr);

	char cCharacter = 'w';
	char *cPtr = &cCharacter;
	printf("\nThe memory address of 'cCharacter' is: %p\nThe value is: %c",cPtr,*cPtr);

	float fNumber = 10.55;
	float *fFloat = &fNumber;
	printf("\nThe memory address of 'fFloat' is: %p\nThe value is: %f",fFloat,*fFloat);
}
	
