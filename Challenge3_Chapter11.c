#include <stdio.h>
#include <stdlib.h>

int menu(char *file);
void printInfor(char *file);
void addStudent(char *file);

int main(){
    int i;
    char file[50];
    char command[100];
    
    printf("Enter a file name:");
    scanf("%49s",file);
    
    sprintf(command, "touch %s", file);
    system(command);
    
    do{
        i = menu(file);
    }while(i != 3);
}
int menu(char *file){
    int option;
    
    printf("\n\tStudents Information");
    printf("\n1 - Print informations");
    printf("\n2 - Enter new student");
    printf("\n3 - Quit\n");
    scanf("%d",&option);
    system("clear");
    
    switch(option){
        case 1:
            printInfor(file);
            break;
        case 2:
            addStudent(file);
            break;
    }
    return option;
}
void printInfor(char *file){
    char cName[50];
    int iId;
    float fGpa; 
    
    FILE *pFile = fopen(file,"r");
    
    system("clear");
    printf("Students informations:\n\n");
    while(fscanf(pFile, "%s %d %f", cName, &iId, &fGpa) == 3){
        printf("%s %d %.2f\n", cName, iId, fGpa);
    }
    fclose(pFile);
}
void addStudent(char *file){
    char cName[50];
    int iId;
    float fGpa;
    
    FILE *pFile = fopen(file,"a");
    printf("Enter a name, id and GPA: ");
    scanf("%s %d %f", cName, &iId, &fGpa);
    
    fprintf(pFile,"%s %d %.2f",cName,iId,fGpa);
    fclose(pFile);
}