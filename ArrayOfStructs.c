#include <stdio.h>
#include <string.h>

typedef struct scores{
	char name[20];
	int score;
} s;

void main(){
	s highScores[3];
	int x;

	strcpy(highScores[0].name, "William");
	highScores[0].score = 40768;
	
	strcpy(highScores[1].name, "Tamiles");
	highScores[1].score = 31680;
	
	strcpy(highScores[2].name, "Ellie");
	highScores[2].score = 96879;
	
	printf("\nTop 3 High Scores\n");

	for( x = 0; x < 3; x++){
		printf("\n%s\t%d\n",highScores[x].name,highScores[x].score);
	}
}

