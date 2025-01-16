#include <stdio.h>

int main(){
	FILE *pRead;
	char name[10];

	pRead = fopen("file1.txt","r");

	if(pRead == NULL){
		printf("\nFile cannot be opened\n");
	}else{
		printf("\nContents of file1.txt\n\n");
		fscanf(pRead,"%s",name);

		while(!feof(pRead)){
			printf("%s\n",name);
			fscanf(pRead,"%s",name);
		}
	}
}
