#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define AREA_C(r) (PI * pow(r,2))

int main(){
    float result,ray;
    
    printf("Enter a ray for a circle: ");
    scanf("%f",&ray);

    result = AREA_C(ray);
    printf("\nThe area is: %.2f",result);
}