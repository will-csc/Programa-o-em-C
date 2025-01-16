#include <stdio.h>
#include <stdlib.h>

int main(){
	char *movie = malloc(80 * sizeof(char));

	printf("Enter your favorite movie: ");
	fgets(movie,80,stdin);

	printf("\nThe movie you entered was: %s",movie);
}
