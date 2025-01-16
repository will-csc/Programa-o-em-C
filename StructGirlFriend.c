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
	struct girlfriend qualquer;

	strcpy(qualquer.name,"Qualquer");
	strcpy(qualquer.boyfriend,"William");
	qualquer.hot = 1000;
	qualquer.children = 3;
	qualquer.age = 18;
	qualquer.marriage_years = 45;

	printf("\nYour girlfriend name is: %s with %d age\nAnd your name is: %s",qualquer.name,qualquer.age,qualquer.boyfriend);
	printf("\nShe is hot like: %d, and you two will have %d children, %d years of marriage",qualquer.hot,qualquer.children,qualquer.marriage_years);
}
