#include <stdio.h>

void main(){

	const double PI = 3.14159;
	double radius,circumference,area;

	printf("\nEnter the radius of a circle: ");
	scanf("%lf",&radius);

	circumference = 2 * PI * radius;
	area = PI * radius * radius;

	printf("\ncircumference: %lf",circumference);
	printf("\narea: %lf",area);
}
