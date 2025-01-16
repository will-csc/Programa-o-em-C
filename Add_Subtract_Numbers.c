#include <stdio.h>

int AddTwoNumbers(int,int);
int SubTwoNumbers(int,int);

void main(){
	int in1,in2;

	printf("Type two numbers to be subtract and added: \n");
	scanf("%d%d",&in1,&in2);

	printf("The numbers added are: %d\n",AddTwoNumbers(in1,in2));
	printf("The numbers subtracted are: %d",SubTwoNumbers(in1,in2));
}
int AddTwoNumbers(int in1,int in2){
	return in1 + in2;
}
int SubTwoNumbers(int in1,int in2){
	return in1 - in2;
}
