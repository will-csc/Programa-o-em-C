#include <stdio.h>

void main(){
	int iTwo[3][3];

	for(int i = 0; i <= 2; i++){
		for(int j = 0; j <= 2; j++){
			iTwo[i][j] = j * 2;
		}
	}
	printf("The position 1 in index 2 is: %d",iTwo[2][1]);
}
