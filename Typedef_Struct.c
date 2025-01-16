#include <stdio.h>
#include <string.h>

typedef struct employee{ //Creates an alias
	char fname[10];
	char lname[10];
	int id;
	float salary;
} emp; //alias name on the end

void main(){
	//create instance of employee structure using emp
	emp emp1;

	strcpy(emp1.fname,"William");
	strcpy(emp1.lname,"Cesar");
	emp1.id = 123;
	emp1.salary = 50000.00;

	printf("\nFirst Name: %s\n", emp1.fname);
	printf("\nLast Name: %s\n", emp1.lname);
	printf("\nEmployee ID: %d\n", emp1.id);
	printf("\nSalary: %.2f\n", emp1.salary);
}

