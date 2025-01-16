#include <stdio.h>

void main() {
    char *myString = "Mike";
    int x;

    printf("\nThe pointer variable's value is: %p\n",*myString);
    printf("\nThe pointer variable points to: %s\n", myString);
    printf("\nThe memory locations for each character are: \n\n");

    // Access & print each memory address in hexadecimal format
    for (x = 0; x < 5; x++) {
        printf("%p\n", &(myString[x]));
    }
}

