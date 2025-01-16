#include <stdio.h>

void main(){
	char color[12] = {'\0'};

	printf("Enter your favorite color: ");
	scanf("%s",color);

	printf("\nYou entered: %s",color);
}
