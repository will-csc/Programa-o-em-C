#include <stdio.h>

void main(){
	int x = 12;
	int y = 5;

	printf("\nWithout Type-Casting\n");
	printf("12 \\ 5 = %.2f\n",x/y);

	printf("\nWith Type-Casting\n");
	printf("12 \\ 5 = %.2f\n",(float) x / (float) y);
}
