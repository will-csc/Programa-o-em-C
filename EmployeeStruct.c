#include <stdio.h>
#include <string.h>

typedef struct employee{
    int id;
    char name[20];
    float salary;
} emp;

void processEmp(emp *);

void main(){
    emp emp1 = {0,0,0};
    emp *ptrEmp;
    
    ptrEmp = &emp1;
    
    processEmp(ptrEmp);
    
    printf("\nID: %d",ptrEmp->id);
    printf("\nName: %s",ptrEmp->name);
    printf("\nSalary: %.2f",ptrEmp->salary);
}
void processEmp(emp *e){
    printf("\nEnter your ID: ");
    int id1;
    scanf("%d",&id1);
    e->id = id1;
    
    printf("\nEnter your name: ");
    char name1[20];
    scanf("%19s",name1);
    strcpy(e->name, name1);
    
    printf("\nEnter your salary: ");
    float salary1;
    scanf("%f",&salary1);
    e->salary = salary1;
}