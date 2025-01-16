#include <stdio.h>
#include <string.h>

typedef struct employee{
	int id;
	char name[10];
	float salary;
} e;

void processEmp(e);

void main(){
	e emp1 = {0,0,0};

	processEmp(emp1); //Here the original array will not be modified because 
			  //C passes a copy, and not the original one

	printf("\nID: %d\n", emp1.id);
	printf("\nName: %s\n", emp1.name);
	printf("\nSalary: %.2f\n", emp1.salary);
}

void processEmp(e emp){
	emp.id = 123;
	strcpy(emp.name,"Sheila");
	emp.salary = 65000.00;
}
