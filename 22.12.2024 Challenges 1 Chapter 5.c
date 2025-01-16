#include <stdio.h>
#include <stdlib.h>

int divides_re(int,int);
int greater_num(int,int);
void atm_machine(void);

void main() {
	int num1, num2;
	int remainder_num,larger_num;

	printf("type two numbers: \n");
	scanf("%d%d",&num1,&num2);

	remainder_num = divides_re(num1,num2);
	larger_num = greater_num(num1,num2);
	atm_machine();
}

int divides_re(int n1,int n2) {
	int rem;

	if(n1 > n2) {
		rem = n1 % n2;
	} else {
		rem = n2 % n1;
	}

	printf("The remainder between the two numbers divided was: %d\n",rem);
	return rem;
}

int greater_num(int n1,int n2) {
	int greater;

	if(n1 > n2) {
		greater = n1;
	} else {
		greater = n2;
	}

	printf("The greater number is: %d\n",greater);
	return greater;
}
void atm_machine() {
	int option;
	float value;

	printf("************** Welcome to your bank - Choose an option**************\n\n\n");
	printf("1. Withdraw\n2. Deposit\n3. Quit\n\n");
	scanf("%d",&option);
	system("clear");

	printf("Type the value: ");
	scanf("%f",&value);

	if(option == 1) {
		printf("Withdrawing the total value of %.2f",value);
	} else {
		printf("Depositing the total value of %.2f",value);
	}


}