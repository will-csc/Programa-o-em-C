#include <stdio.h>

void readData(void);

int main(){
	FILE *pWrite;
	char name[10];
	char hobby[15];

	printf("\nCurrent file contents:\n");

	readData();

	printf("\nEnter a new name and hobby: ");
	scanf("%s%s",name,hobby);

	//open data file for append
	pWrite = fopen("file1.txt","a");

	if(pWrite == NULL){
		printf("\nFile cannot be opened\n");
	}else{
		//append record information to data file
		fprintf(pWrite,"%s %s\n",name,hobby);
		fclose(pWrite);
		readData();
	}
}

void readData(void){
	FILE *pRead;
	char name[10];
	char hobby[15];

	//open data file for read access only
	pRead = fopen("file1.txt","r");

	if(pRead == NULL){
		printf("\nFile cannot be opened\n");
	}else{
		printf("\tName\tHobby\n\n");
		fscanf(pRead,"%s%s",name,hobby);

		//read records from data file until end of file is reached
		while(!feof(pRead)){
			printf("%s\t%s\n",name,hobby);
			fscanf(pRead,"%s%s",name,hobby);
		}
	}
}

