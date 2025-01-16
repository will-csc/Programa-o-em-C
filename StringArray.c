#include <stdio.h>

int nameLength(char []);

void main(){
	char aName[20] = {'\0'};

	printf("\nEnter your first name: ");
	scanf("%s",aName);

	printf("\nYour first name constains: ");
	printf("%d characters\n",nameLength(aName));
}

int nameLength(char name[]){
	int x = 0;

	while(name[x] != '\0'){
		x++;
	}
	
	return x;
}
