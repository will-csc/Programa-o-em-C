#include <stdio.h>

int main(){
	int x;

	for(x = 20;x > 1;x--){
		if(x == 14){
		printf("\nWe don' like the 14 number, Vinnicius13 would be proud right now!\n");
			continue;
		}
		printf("\n%d\n",x);
	}
}
