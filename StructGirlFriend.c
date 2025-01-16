#include <stdio.h>
#include <string.h>

struct girlfriend{
	char name[15];
	char boyfriend[15];
	int hot;
	int children;
	int age;
	int marriage_years;
};

void main(){
	struct girlfriend tamiles;

	strcpy(tamiles.name,"Tamiles");
	strcpy(tamiles.boyfriend,"William");
	tamiles.hot = 1000;
	tamiles.children = 3;
	tamiles.age = 18;
	tamiles.marriage_years = 45;

	printf("\nYour girlfriend name is: %s with %d age\nAnd your name is: %s",tamiles.name,tamiles.age,tamiles.boyfriend);
	printf("\nShe is hot like: %d, and you two will have %d children, %d years of marriage",tamiles.hot,tamiles.children,tamiles.marriage_years);
}
