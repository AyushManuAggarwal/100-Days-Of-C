#include <stdio.h>

int main(){
float PIE = 3.14;
float radius;
float area;
float circumference;

printf("Enter the radius of the circle: ");
scanf("%f", &radius);

area = PIE * radius * radius;
circumference = 2 * PIE * radius;

printf("the area of the circle is: %.2f\n", area);
printf("the circumference of the circle is: %.2f\n", circumference);
return 0;
}
