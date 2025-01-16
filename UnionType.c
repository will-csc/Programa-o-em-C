#include <stdio.h>

union phoneBook{
	char *name;
	char *number;
	char *address;
};

struct magazine{
	char *name;
	char *author;
	int isbn;
};

void main(){
	union phoneBook aBook;
	struct magazine aMagazine;

	printf("\nUnion Details\n");
	printf("Address for 'aBook.name': %p\n",&aBook.name);
	printf("Address for 'aBook.number': %p\n",&aBook.number);
	printf("Address for 'aBook.address': %p\n",&aBook.address);
	
	printf("\nStructure Details\n");
	printf("Address for 'aMagazine.name': %p\n",&aMagazine.name);
	printf("Address for 'aMagazine.author': %p\n",&aMagazine.author);
	printf("Address for 'aMagazine.isbn': %p\n",&aMagazine.isbn);
}
