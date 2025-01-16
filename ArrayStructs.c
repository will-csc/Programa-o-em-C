#include <stdio.h>
#include <string.h>

typedef struct employee{
    int id;
    char name[15];
    float salary;
} e;

void processEmp(e *,int size);

void main(){
    e emp1[3] = {0};
    int x;
    
    processEmp(emp1,3);
    
    for(x = 0; x < 3; x++){
        printf("\nID: %d\n",emp1[x].id);
        printf("Name: %s\n", emp1[x].name);
        printf("Salary: %.2f\n", emp1[x].salary);
    }
}

void processEmp(e *emp, int size){
    int i;
    
    for(i = 0; i < size; i++){
        printf("\nEnter the %d employee's ID: ",i+1);
        scanf("%d",&emp[i].id);
        
        printf("Enter the %d employee's name: ",i+1);
        scanf("%14s",&emp[i].name);
        
        printf("Enter the %d employee's salary: ",i+1);
        scanf("%f",&emp[i].salary);
    }
}