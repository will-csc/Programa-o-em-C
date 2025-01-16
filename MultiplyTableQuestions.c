#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(){
	int x,iNumQuestions,iResponse,iRndNum1,iRndNum2;
	srand(time(NULL));
	
	printf("\nEnter number of questions to ask: ");
	scanf("%d",&iNumQuestions);

	for(x = 0; x < iNumQuestions;x++){
		iRndNum1 = rand() % 10 + 1;
		iRndNum2 = rand() % 10 + 1;

		printf("\nWhat is %d x %d: ",iRndNum1,iRndNum2);
		scanf("%d",&iResponse);

		if(iResponse == iRndNum1 * iRndNum2){
			printf("\nCorrect!\n");
		}else{
			printf("\nThe correct answer was %d \n",iRndNum1 * iRndNum2);
		} //end if
	}// end for loop
}//end main function
