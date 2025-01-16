#include <stdio.h>

int main(){
	int x = 10;

	do{
		printf("This printf statement is executed at least once\n");
		x++;
	}while(x < 10); //end do while loop
	
	while(x < 20){
		printf("\nThe value of x in \"While Loop\" is: %d",x);
		x++;
	}
}
