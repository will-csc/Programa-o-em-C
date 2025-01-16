#include <stdio.h>

void compareTwoNumbers(int,int);

void main(){
	int iNum1,iNum2;

	printf("Type two numbers to be compared: ");
	scanf("\n%d%d",&iNum1,&iNum2);
	
	printf("The two numbers compared has the result of: \n");
	compareTwoNumbers(iNum1,iNum2);
}
void compareTwoNumbers(int iNum1,int iNum2){
	if(iNum1 < iNum2){
		printf("\n%d is less than %d\n",iNum1,iNum2);
	}else if(iNum1 == iNum2){
		printf("\n%d is equal to %d\n",iNum1,iNum2);
	}else{
		printf("\n%d is greater than %d\n",iNum1,iNum2);
	}
}


