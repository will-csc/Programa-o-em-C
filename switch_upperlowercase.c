#include <stdio.h>

int main(){
	char cResponse;
	
	printf("Type a letter between 'a','b' and 'c': ");
	scanf("%c",&cResponse);

	switch(cResponse){
		case 'a': case 'A':
			printf("\nYou selected the character 'a' or 'A'\n");
			break;		
		case 'b': case 'B':
			printf("\nYou selected the character 'b' or 'B'\n");
			break;
		case 'c': case 'C':
			printf("\nYou selected the character 'c' or 'C'\n");
			break;
		}
}
		
