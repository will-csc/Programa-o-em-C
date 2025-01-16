#include <stdio.h>
#include <math.h>

void main(){
	int n1,n2;
	double hyp;

	printf("Type the two leg's: ");
	scanf("%d%d",&n1,&n2);
	
	hyp = sqrt(pow(n1,2) + pow(n2,2));
	printf("The result of the hypotenuse is:\n%f",hyp);
}

