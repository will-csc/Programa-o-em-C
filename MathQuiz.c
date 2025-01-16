#include <stdio.h>
#include <stdlib.h>

int main(){
	int qnt_questions,answer,answer_expression,w_questions=0,c_questions=0;
	int random_num1,random_num2;
	
	printf("How many questions on the multiply table you want?: \n");
	scanf("%d",&qnt_questions);

	for(int i=1;i<=qnt_questions;i++){
		random_num1 = (rand() % 10) + 1;
		random_num2 = (rand() % 10) + 1;
		answer_expression = random_num1 * random_num2;

		printf("Expression:\n %d x %d\nResult: ",random_num1,random_num2);
		scanf("%d",&answer);

		if(answer == answer_expression){
			printf("\nYou are correct!\n\n");
			c_questions++;
		}else{
			printf("\nYou are wrong!\n\n");
			w_questions++;
		}
	}
	printf("In the end, your results were: \nCorrect questions: %d\nWrong questions: %d",c_questions,w_questions);
}


