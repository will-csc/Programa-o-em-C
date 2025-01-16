#include <stdio.h>
#include <string.h>

struct employee{
	char fname[10];
	char lname[10];
	int id;
	float salary;
};

void main(){
	struct employee emp1;

	strcpy(emp1.fname, "William");
	strcpy(emp1.lname, "Cesar");
	emp1.id = 15122003;
	emp1.salary = 7580.50;

	printf("\nFirst Name: %s\n", emp1.fname);
	printf("\nLast Name: %s\n", emp1.lname);
	printf("\nEmployee ID: %d\n",emp1.id);
	printf("\nSalary: $%.2f\n", emp1.salary);
}
