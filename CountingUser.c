#include <stdio.h>

int main(){
	int i;
	int z;
	int y;

	printf("What's the beginner's number?: ");
	scanf("%d",&i);
	
	printf("What's the ending number?: ");
	scanf("%d",&z);
	
	printf("What's the increment number?: ");
	scanf("%d",&y);

	printf("\nStarting the couting...\n");
	for(i;i<=z;i+=y){
		printf("\n%d",i);
	}
}
		
