#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *name = (char *) calloc(20, sizeof(char));

	printf("Enter your name: ");
	fgets(name,20,stdin);
	
	int i;
	int j = 0;
	for(i = 0; i < strlen(name); i++){
		printf("%c",name[i]);
		j++;
	}
	printf("%d",j);
}
