#include <stdio.h>

void main(){
	char *colors[3][10] = {'\0'};

	printf("\nEnter 3 colors separated by spaces: ");
	scanf("%s %s %s",colors[0],colors[1],colors[2]);

	printf("\nYour entered: ");
	printf("%s %s %s\n",colors[0],colors[1],colors[2]);
}
