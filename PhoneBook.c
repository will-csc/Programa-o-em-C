#include <stdio.h>
#include <stdlib.h>

int main(){
    int response;
    
    char *lName[20] = {0};
    char *fName[20] = {0};
    char *number[20] = {0};
    
    FILE *pWrite;
    FILE *pRead;
    
    printf("\n\tPhone Book\n");
    printf("\n1\tAdd phone book entry\n");
    printf("2\tPrint phone book\n\n");
    printf("Select an option: ");
    scanf("%d", &response);
    
    if ( response == 1 ) {
        printf("\nEnter first name: ");
        scanf("%s", fName);
        printf("\nEnter last name: ");
        scanf("%s", lName);
        printf("\nEnter phone number: ");
        scanf("%s", number);
        
        pWrite = fopen("phone_book.txt", "a");
        
        if ( pWrite != NULL ) {
            fprintf(pWrite, "%s %s %s\n", fName, lName, number);
            fclose(pWrite);
        }else{
            goto ErrorHandler; //there is a file i/o error
        }
    }else if(response == 2){
        pRead = fopen("phone_book.txt", "r");
        
        if ( pRead != NULL ) {
            printf("\nPhone Book Entries\n");
            while ( !feof(pRead) ) {
                fscanf(pRead, "%s %s %s", fName, lName, number);
                if ( !feof(pRead) ){
                    printf("\n%s %s\t%s", fName, lName, number);
                }
            } //end loop
            printf("\n");
        }else{
            goto ErrorHandler; //there is a file i/o error
        }
    }else {
        printf("\nInvalid selection\n");
    }
    exit(EXIT_SUCCESS); //exit program normally
    
    ErrorHandler:
        perror("The following error occurred");
        exit(EXIT_FAILURE); //exit program with error
}
