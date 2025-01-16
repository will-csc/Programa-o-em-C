#include <stdio.h>

int main(){
	int x;
	
	for(x = 10; x > 5; x--){
		if(x == 7){
			printf("\nWe have arrived at 7, breaking now...");
			break;
		}
		printf("\nPrinting the number %d",x);
	}
}
