#include <stdio.h>

int addTwoNumbers(int,int);

void main(){
	int iNumber1,iNumber2;
	
	printf("Type a number to add: ");
	scanf("%d",&iNumber1);
	printf("Type another number to add: ");
	scanf("%d",&iNumber2);

	printf("Using the add two numbers functions!\n");
	printf("The two numbers added has the value of: %d",addTwoNumbers(iNumber1,iNumber2));
}
int addTwoNumbers(int iNumber1,int iNumber2){
	return iNumber1 + iNumber2;
}


	
