#include <stdio.h>
#include <math.h>

void main(){
	int n1,n2;
	printf("Type two numbers to evaluate your some functions: ");
	scanf("%d%d",&n1,&n2);
	
	double A,B;
	//Square rooti
	A = sqrt(n1);
	B = sqrt(n2);
	printf("\nThe square root of n1:%d n2:%d",A,B);

	//Power of
	A = pow(n1,n2);
	printf("\nThe power of n2 in n1 is: %d",A);

	//Absolute value
	A = fabs(n1);
	printf("\nThe absolute value of n1 is: %d",A);
	A = fabs(n2);
	printf("\nThe absolute value of n2 is: %d",A);

	//Log value
	A = log(n1);
	printf("\nThe log value of n1 is: %d",A);
	A = log(n2);
	printf("\nThe log value of n2 is: %d",A);

	//Absolute value using floor,ceil and round
	int C;
	C = round(n1);
	printf("\nThe number n1 rounded is: %d",C);
	C = round(n2);
	printf("\nThe number n2 rounded is: %d",C);

	C = ceil(n1);
	printf("\nThe number n1 using ceil is: %d",C);
	C = ceil(n2);
	printf("\nThe number n2 using ceil is: %d",C);
	
	C = floor(n1);
	printf("\nThe number n1 using floor is: %d",C);
	C = floor(n2);
	printf("\nThe number n2 using floor is: %d",C);
}

