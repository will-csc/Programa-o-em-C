#include <stdio.h>

void main(){
	int iTwo[3][3] = {{0,1,2},{0,1,2},{0,1,2}};

	for(int i = 0; i <= 2; i++){
		for(int j = 0; j <= 2; j++){
			printf("The value of 'iTwo[%d][%d]' is: %d\n",i,j,iTwo[i][j]);
			}
	}
}
